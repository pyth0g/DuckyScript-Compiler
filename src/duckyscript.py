class Parser:
    def parse(code: str) -> list:
        code = [i.split(" ", 1) for i in list(filter(None, code.split("\n")))]
        return code

class Compiler:
    def vk_key(char) -> list:
        import win32api
        vk = win32api.VkKeyScan(char)
        vk_code = vk & 0xFF
        shift_state = (vk >> 8) & 0xFF
        return [vk_code, shift_state]

    def vk_translate(name: str) -> str:
        try:
            return [{
            "UPARROW" : "VK_UP",
            "DOWNARROW" : "VK_DOWN",
            "LEFTARROW" : "VK_LEFT",
            "RIGHTARROW" : "VK_RIGHT",
            "PAGEUP" : "VK_PRIOR",
            "PAGEDOWN" : "VK_NEXT",
            "HOME" : "VK_HOME",
            "END" : "VK_END",
            "INSERT" : "VK_INSERT",
            "DEL" : "VK_DELETE",
            "TAB" : "VK_TAB",
            "SPACE" : "VK_SPACE",
            "ENTER" : "VK_RETURN",
            "ESC" : "VK_ESCAPE",
            "PRINTSCREEN" : "VK_SNAPSHOT",
            "F1" : "VK_F1",
            "F2" : "VK_F2",
            "F3" : "VK_F3",
            "F4" : "VK_F4",
            "F5" : "VK_F5",
            "F6" : "VK_F6",
            "F7" : "VK_F7",
            "F8" : "VK_F8",
            "F9" : "VK_F9",
            "F10" : "VK_F10",
            "F11" : "VK_F11",
            "F12" : "VK_F12",
            "SHIFT" : "VK_SHIFT",
            "ALT" : "VK_MENU",
            "CTRL" : "VK_CONTROL",
            "PAUSE" : "VK_PAUSE",
            "WIN" : "VK_LWIN",
            "WINDOWS" : "VK_LWIN",
            "GUI" : "VK_LWIN",
            "CAPSLOCK" : "VK_CAPITAL",
            "SCROLLOCK" : "VK_SCROLL",
            "NUMLOCK" : "VK_NUMLOCK",
            }[name], 1]
        
        except KeyError:
            if name.isalpha():
                return [name.upper(), 0]
            
            else:
                return [name, 0]

    def add(code: str, delay: int = 0) -> str:
        return f"   {f"\n   Sleep({delay});" if delay != 0 else ""}\n   {code}"
    
    def error(code: str, line: int):
        import sys
        print(f"Error at line {line + 1}: {code}")
        sys.exit()

    def _compile(code: str, def_delay: int, type_delay: int, inputs_index: int, instruction: list, iter: int, parsed: list) -> str:
        if any(str(instruction[0]).startswith(i) for i in ["REM", "DEFAULTDELAY", "DELAY", "STRING", "KEYCODE", "REPEAT", "TYPEDELAY"]):
            try:
                instruction[1]
            
            except IndexError:
                Compiler.error(f"{str(instruction[0]).upper()} must contain content.", iter)

            if instruction[0] == "REM":
                code += Compiler.add(f"//{instruction[1]}\n")

            if instruction[0] == "DEFAULTDELAY":
                try:
                    def_delay = int(instruction[1])
                
                except ValueError:
                    Compiler.error("Value for DEFAULTDELAY must be an integer.", iter)

            if instruction[0] == "TYPEDELAY":
                try:
                    type_delay = int(instruction[1])

                except ValueError:
                    Compiler.error("Value for TYPEDELAY must be an integer.", iter)

            if instruction[0] == "DELAY":
                try:
                    code += "\n"
                    code += Compiler.add(f"Sleep({int(instruction[1]) + def_delay});\n")
                
                except ValueError:
                    Compiler.error("Value for DELAY must be an integer.", iter)

            if instruction[0] == "REPEAT":
                try: int(instruction[1])
                except ValueError: Compiler.error("Value for REPEAT must be an integer.", iter)

                if iter != 0:
                    for i in range(int(instruction[1])):
                        instruction = parsed[iter - 1]
                        code += Compiler._compile("", def_delay, inputs_index, instruction, iter, [instruction])[0]
                        inputs_index += 1
                                                                            
            if instruction[0] == "STRING":
                code += Compiler.add(f"Sleep({def_delay});")
                for i in instruction[1]:
                    code += Compiler.add("",type_delay)
                    if str(Compiler.vk_key(i)[1]) == "1":
                        code += Compiler.add(f"SendInput(1, shift_down, sizeof(INPUT));")

                    if str(Compiler.vk_key(i)[1]) == "6":
                        code += Compiler.add(f"SendInput(1, altgr_down, sizeof(INPUT));")

                    code += Compiler.add(f"SendInput(1, key_{ord(i)}_down, sizeof(INPUT));")
                    
                    if str(Compiler.vk_key(i)[1]) == "1":
                        code += Compiler.add(f"SendInput(1, shift_up, sizeof(INPUT));")

                    if str(Compiler.vk_key(i)[1]) == "6":
                        code += Compiler.add(f"SendInput(1, altgr_up, sizeof(INPUT));")

                    code += Compiler.add(f"SendInput(1, key_{ord(i)}_up, sizeof(INPUT));")
                    
                    code += "\n"

            if instruction[0] == "KEYCODE":
                try: int(instruction[1])
                except ValueError: Compiler.error("", iter)

                inputs_index += 1
                code += Compiler.add(f"INPUT inputs{inputs_index}[2] = {"{}"};", def_delay)
                code += Compiler.add(f"ZeroMemory(inputs{inputs_index}, sizeof(inputs{inputs_index}));\n")

                code += Compiler.add(f"inputs{inputs_index}[0].type = INPUT_KEYBOARD;")
                code += Compiler.add(f"inputs{inputs_index}[0].ki.wVk = {instruction[1]};\n")
                code += Compiler.add(f"inputs{inputs_index}[1].type = INPUT_KEYBOARD;")
                code += Compiler.add(f"inputs{inputs_index}[1].ki.wVk = {instruction[1]};")
                code += Compiler.add(f"inputs{inputs_index}[1].ki.dwFlags = KEYEVENTF_KEYUP;\n")

                code += Compiler.add(f"SendInput(2, inputs{inputs_index}, sizeof(INPUT));")

                code += "\n"

        else:
            if Compiler.vk_translate(instruction[0])[1] == 0 and len(str(instruction[0])) > 1:
                Compiler.error(f"'{instruction[0]}' is not recognized as the name of a command.", iter)

            c = 0
            code += Compiler.add(f"INPUT inputs{inputs_index}[{len(instruction)}] = {"{}"};", def_delay)
            code += Compiler.add(f"ZeroMemory(inputs{inputs_index}, sizeof(inputs{inputs_index}));\n")

            for i in instruction:
                code += Compiler.add(f"inputs{inputs_index}[{c}].type = INPUT_KEYBOARD;")
                code += Compiler.add(f"inputs{inputs_index}[{c}].ki.wVk = {"'" if Compiler.vk_translate(i)[1] == 0 else ""}{Compiler.vk_translate(i)[0]}{"'" if Compiler.vk_translate(i)[1] == 0 else ""};\n")

                c += 1

            code += Compiler.add(f"SendInput(ARRAYSIZE(inputs{inputs_index}), inputs{inputs_index}, sizeof(INPUT));\n")
            inputs_index += 1

            code += "\n"

        return code, inputs_index, def_delay, type_delay


    def compile(code: str, output: str | None = None) -> str:
        parsed: list = Parser.parse(code)
        code: str = "#define WINVER 0x0500\n#include <windows.h>\n#ifndef ARRAYSIZE\n#define ARRAYSIZE(arr) (sizeof(arr) / sizeof(arr[0]))\n#endif\n\nint main()\n{\n   INPUT shift_down[1] = {};\n   shift_down[0].type = INPUT_KEYBOARD;\n   shift_down[0].ki.wVk = VK_SHIFT;\n\n   INPUT shift_up[1] = {};\n   shift_up[0].type = INPUT_KEYBOARD;\n   shift_up[0].ki.wVk = VK_SHIFT;\n   shift_up[0].ki.dwFlags = KEYEVENTF_KEYUP;\n\n   INPUT altgr_down[1] = {};\n   altgr_down[0].type = INPUT_KEYBOARD;\n   altgr_down[0].ki.wVk = VK_RMENU;\n\n   INPUT altgr_up[1] = {};\n   altgr_up[0].type = INPUT_KEYBOARD;\n   altgr_up[0].ki.wVk = VK_RMENU;\n   altgr_up[0].ki.dwFlags = KEYEVENTF_KEYUP;\n"
        def_delay = 0
        type_delay = 0
        inputs_index = 0

        chars = ""

        for iter, instruct in enumerate(parsed):
            if instruct[0] == "STRING":
                try: chars += instruct[1]
                except IndexError: Compiler.error("STRING must contain content.", iter)

        chars = sorted(list(set(chars)))

        for char in chars:
            char = ord(char)

            #key up
            code += Compiler.add(f"INPUT key_{char}_down[1] = {"{}"};")
            code += Compiler.add(f"ZeroMemory(key_{char}_down, sizeof(key_{char}_down));\n")

            code += Compiler.add(f"key_{char}_down[0].type = INPUT_KEYBOARD;")
            code += Compiler.add(f"key_{char}_down[0].ki.wVk = {Compiler.vk_key(chr(char))[0] if chr(char) != "\n" else "VK_RETURN"};\n")

            #key down
            code += Compiler.add(f"INPUT key_{char}_up[1] = {"{}"};")
            code += Compiler.add(f"ZeroMemory(key_{char}_up, sizeof(key_{char}_up));\n")

            code += Compiler.add(f"key_{char}_up[0].type = INPUT_KEYBOARD;")
            code += Compiler.add(f"key_{char}_up[0].ki.wVk = {Compiler.vk_key(chr(char))[0] if chr(char) != "\n" else "VK_RETURN"};")
            code += Compiler.add(f"key_{char}_up[0].ki.dwFlags = KEYEVENTF_KEYUP;\n")

        for iter, instruction in enumerate(parsed):
            code,  inputs_index, def_delay, type_delay = Compiler._compile(code, def_delay, type_delay, inputs_index, instruction, iter, parsed)
            inputs_index += 1

        code += "\n   return 0;\n}"
            
        if not output: return code
        else:
            with open(output, "x") as f:
                f.write(code)