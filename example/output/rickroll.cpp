#define WINVER 0x0500
#include <windows.h>
#ifndef ARRAYSIZE
#define ARRAYSIZE(arr) (sizeof(arr) / sizeof(arr[0]))
#endif

int main()
{
   INPUT shift_down[1] = {};
   shift_down[0].type = INPUT_KEYBOARD;
   shift_down[0].ki.wVk = VK_SHIFT;

   INPUT shift_up[1] = {};
   shift_up[0].type = INPUT_KEYBOARD;
   shift_up[0].ki.wVk = VK_SHIFT;
   shift_up[0].ki.dwFlags = KEYEVENTF_KEYUP;

   INPUT altgr_down[1] = {};
   altgr_down[0].type = INPUT_KEYBOARD;
   altgr_down[0].ki.wVk = VK_RMENU;

   INPUT altgr_up[1] = {};
   altgr_up[0].type = INPUT_KEYBOARD;
   altgr_up[0].ki.wVk = VK_RMENU;
   altgr_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_32_down[1] = {};   
   ZeroMemory(key_32_down, sizeof(key_32_down));
   
   key_32_down[0].type = INPUT_KEYBOARD;   
   key_32_down[0].ki.wVk = 32;
   
   INPUT key_32_up[1] = {};   
   ZeroMemory(key_32_up, sizeof(key_32_up));
   
   key_32_up[0].type = INPUT_KEYBOARD;   
   key_32_up[0].ki.wVk = 32;   
   key_32_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_34_down[1] = {};   
   ZeroMemory(key_34_down, sizeof(key_34_down));
   
   key_34_down[0].type = INPUT_KEYBOARD;   
   key_34_down[0].ki.wVk = 50;
   
   INPUT key_34_up[1] = {};   
   ZeroMemory(key_34_up, sizeof(key_34_up));
   
   key_34_up[0].type = INPUT_KEYBOARD;   
   key_34_up[0].ki.wVk = 50;   
   key_34_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_37_down[1] = {};   
   ZeroMemory(key_37_down, sizeof(key_37_down));
   
   key_37_down[0].type = INPUT_KEYBOARD;   
   key_37_down[0].ki.wVk = 53;
   
   INPUT key_37_up[1] = {};   
   ZeroMemory(key_37_up, sizeof(key_37_up));
   
   key_37_up[0].type = INPUT_KEYBOARD;   
   key_37_up[0].ki.wVk = 53;   
   key_37_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_38_down[1] = {};   
   ZeroMemory(key_38_down, sizeof(key_38_down));
   
   key_38_down[0].type = INPUT_KEYBOARD;   
   key_38_down[0].ki.wVk = 54;
   
   INPUT key_38_up[1] = {};   
   ZeroMemory(key_38_up, sizeof(key_38_up));
   
   key_38_up[0].type = INPUT_KEYBOARD;   
   key_38_up[0].ki.wVk = 54;   
   key_38_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_40_down[1] = {};   
   ZeroMemory(key_40_down, sizeof(key_40_down));
   
   key_40_down[0].type = INPUT_KEYBOARD;   
   key_40_down[0].ki.wVk = 56;
   
   INPUT key_40_up[1] = {};   
   ZeroMemory(key_40_up, sizeof(key_40_up));
   
   key_40_up[0].type = INPUT_KEYBOARD;   
   key_40_up[0].ki.wVk = 56;   
   key_40_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_41_down[1] = {};   
   ZeroMemory(key_41_down, sizeof(key_41_down));
   
   key_41_down[0].type = INPUT_KEYBOARD;   
   key_41_down[0].ki.wVk = 57;
   
   INPUT key_41_up[1] = {};   
   ZeroMemory(key_41_up, sizeof(key_41_up));
   
   key_41_up[0].type = INPUT_KEYBOARD;   
   key_41_up[0].ki.wVk = 57;   
   key_41_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_44_down[1] = {};   
   ZeroMemory(key_44_down, sizeof(key_44_down));
   
   key_44_down[0].type = INPUT_KEYBOARD;   
   key_44_down[0].ki.wVk = 188;
   
   INPUT key_44_up[1] = {};   
   ZeroMemory(key_44_up, sizeof(key_44_up));
   
   key_44_up[0].type = INPUT_KEYBOARD;   
   key_44_up[0].ki.wVk = 188;   
   key_44_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_45_down[1] = {};   
   ZeroMemory(key_45_down, sizeof(key_45_down));
   
   key_45_down[0].type = INPUT_KEYBOARD;   
   key_45_down[0].ki.wVk = 189;
   
   INPUT key_45_up[1] = {};   
   ZeroMemory(key_45_up, sizeof(key_45_up));
   
   key_45_up[0].type = INPUT_KEYBOARD;   
   key_45_up[0].ki.wVk = 189;   
   key_45_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_46_down[1] = {};   
   ZeroMemory(key_46_down, sizeof(key_46_down));
   
   key_46_down[0].type = INPUT_KEYBOARD;   
   key_46_down[0].ki.wVk = 190;
   
   INPUT key_46_up[1] = {};   
   ZeroMemory(key_46_up, sizeof(key_46_up));
   
   key_46_up[0].type = INPUT_KEYBOARD;   
   key_46_up[0].ki.wVk = 190;   
   key_46_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_47_down[1] = {};   
   ZeroMemory(key_47_down, sizeof(key_47_down));
   
   key_47_down[0].type = INPUT_KEYBOARD;   
   key_47_down[0].ki.wVk = 55;
   
   INPUT key_47_up[1] = {};   
   ZeroMemory(key_47_up, sizeof(key_47_up));
   
   key_47_up[0].type = INPUT_KEYBOARD;   
   key_47_up[0].ki.wVk = 55;   
   key_47_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_48_down[1] = {};   
   ZeroMemory(key_48_down, sizeof(key_48_down));
   
   key_48_down[0].type = INPUT_KEYBOARD;   
   key_48_down[0].ki.wVk = 48;
   
   INPUT key_48_up[1] = {};   
   ZeroMemory(key_48_up, sizeof(key_48_up));
   
   key_48_up[0].type = INPUT_KEYBOARD;   
   key_48_up[0].ki.wVk = 48;   
   key_48_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_49_down[1] = {};   
   ZeroMemory(key_49_down, sizeof(key_49_down));
   
   key_49_down[0].type = INPUT_KEYBOARD;   
   key_49_down[0].ki.wVk = 49;
   
   INPUT key_49_up[1] = {};   
   ZeroMemory(key_49_up, sizeof(key_49_up));
   
   key_49_up[0].type = INPUT_KEYBOARD;   
   key_49_up[0].ki.wVk = 49;   
   key_49_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_50_down[1] = {};   
   ZeroMemory(key_50_down, sizeof(key_50_down));
   
   key_50_down[0].type = INPUT_KEYBOARD;   
   key_50_down[0].ki.wVk = 50;
   
   INPUT key_50_up[1] = {};   
   ZeroMemory(key_50_up, sizeof(key_50_up));
   
   key_50_up[0].type = INPUT_KEYBOARD;   
   key_50_up[0].ki.wVk = 50;   
   key_50_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_51_down[1] = {};   
   ZeroMemory(key_51_down, sizeof(key_51_down));
   
   key_51_down[0].type = INPUT_KEYBOARD;   
   key_51_down[0].ki.wVk = 51;
   
   INPUT key_51_up[1] = {};   
   ZeroMemory(key_51_up, sizeof(key_51_up));
   
   key_51_up[0].type = INPUT_KEYBOARD;   
   key_51_up[0].ki.wVk = 51;   
   key_51_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_52_down[1] = {};   
   ZeroMemory(key_52_down, sizeof(key_52_down));
   
   key_52_down[0].type = INPUT_KEYBOARD;   
   key_52_down[0].ki.wVk = 52;
   
   INPUT key_52_up[1] = {};   
   ZeroMemory(key_52_up, sizeof(key_52_up));
   
   key_52_up[0].type = INPUT_KEYBOARD;   
   key_52_up[0].ki.wVk = 52;   
   key_52_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_55_down[1] = {};   
   ZeroMemory(key_55_down, sizeof(key_55_down));
   
   key_55_down[0].type = INPUT_KEYBOARD;   
   key_55_down[0].ki.wVk = 55;
   
   INPUT key_55_up[1] = {};   
   ZeroMemory(key_55_up, sizeof(key_55_up));
   
   key_55_up[0].type = INPUT_KEYBOARD;   
   key_55_up[0].ki.wVk = 55;   
   key_55_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_57_down[1] = {};   
   ZeroMemory(key_57_down, sizeof(key_57_down));
   
   key_57_down[0].type = INPUT_KEYBOARD;   
   key_57_down[0].ki.wVk = 57;
   
   INPUT key_57_up[1] = {};   
   ZeroMemory(key_57_up, sizeof(key_57_up));
   
   key_57_up[0].type = INPUT_KEYBOARD;   
   key_57_up[0].ki.wVk = 57;   
   key_57_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_58_down[1] = {};   
   ZeroMemory(key_58_down, sizeof(key_58_down));
   
   key_58_down[0].type = INPUT_KEYBOARD;   
   key_58_down[0].ki.wVk = 190;
   
   INPUT key_58_up[1] = {};   
   ZeroMemory(key_58_up, sizeof(key_58_up));
   
   key_58_up[0].type = INPUT_KEYBOARD;   
   key_58_up[0].ki.wVk = 190;   
   key_58_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_59_down[1] = {};   
   ZeroMemory(key_59_down, sizeof(key_59_down));
   
   key_59_down[0].type = INPUT_KEYBOARD;   
   key_59_down[0].ki.wVk = 188;
   
   INPUT key_59_up[1] = {};   
   ZeroMemory(key_59_up, sizeof(key_59_up));
   
   key_59_up[0].type = INPUT_KEYBOARD;   
   key_59_up[0].ki.wVk = 188;   
   key_59_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_60_down[1] = {};   
   ZeroMemory(key_60_down, sizeof(key_60_down));
   
   key_60_down[0].type = INPUT_KEYBOARD;   
   key_60_down[0].ki.wVk = 188;
   
   INPUT key_60_up[1] = {};   
   ZeroMemory(key_60_up, sizeof(key_60_up));
   
   key_60_up[0].type = INPUT_KEYBOARD;   
   key_60_up[0].ki.wVk = 188;   
   key_60_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_61_down[1] = {};   
   ZeroMemory(key_61_down, sizeof(key_61_down));
   
   key_61_down[0].type = INPUT_KEYBOARD;   
   key_61_down[0].ki.wVk = 48;
   
   INPUT key_61_up[1] = {};   
   ZeroMemory(key_61_up, sizeof(key_61_up));
   
   key_61_up[0].type = INPUT_KEYBOARD;   
   key_61_up[0].ki.wVk = 48;   
   key_61_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_62_down[1] = {};   
   ZeroMemory(key_62_down, sizeof(key_62_down));
   
   key_62_down[0].type = INPUT_KEYBOARD;   
   key_62_down[0].ki.wVk = 190;
   
   INPUT key_62_up[1] = {};   
   ZeroMemory(key_62_up, sizeof(key_62_up));
   
   key_62_up[0].type = INPUT_KEYBOARD;   
   key_62_up[0].ki.wVk = 190;   
   key_62_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_63_down[1] = {};   
   ZeroMemory(key_63_down, sizeof(key_63_down));
   
   key_63_down[0].type = INPUT_KEYBOARD;   
   key_63_down[0].ki.wVk = 191;
   
   INPUT key_63_up[1] = {};   
   ZeroMemory(key_63_up, sizeof(key_63_up));
   
   key_63_up[0].type = INPUT_KEYBOARD;   
   key_63_up[0].ki.wVk = 191;   
   key_63_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_64_down[1] = {};   
   ZeroMemory(key_64_down, sizeof(key_64_down));
   
   key_64_down[0].type = INPUT_KEYBOARD;   
   key_64_down[0].ki.wVk = 86;
   
   INPUT key_64_up[1] = {};   
   ZeroMemory(key_64_up, sizeof(key_64_up));
   
   key_64_up[0].type = INPUT_KEYBOARD;   
   key_64_up[0].ki.wVk = 86;   
   key_64_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_65_down[1] = {};   
   ZeroMemory(key_65_down, sizeof(key_65_down));
   
   key_65_down[0].type = INPUT_KEYBOARD;   
   key_65_down[0].ki.wVk = 65;
   
   INPUT key_65_up[1] = {};   
   ZeroMemory(key_65_up, sizeof(key_65_up));
   
   key_65_up[0].type = INPUT_KEYBOARD;   
   key_65_up[0].ki.wVk = 65;   
   key_65_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_66_down[1] = {};   
   ZeroMemory(key_66_down, sizeof(key_66_down));
   
   key_66_down[0].type = INPUT_KEYBOARD;   
   key_66_down[0].ki.wVk = 66;
   
   INPUT key_66_up[1] = {};   
   ZeroMemory(key_66_up, sizeof(key_66_up));
   
   key_66_up[0].type = INPUT_KEYBOARD;   
   key_66_up[0].ki.wVk = 66;   
   key_66_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_67_down[1] = {};   
   ZeroMemory(key_67_down, sizeof(key_67_down));
   
   key_67_down[0].type = INPUT_KEYBOARD;   
   key_67_down[0].ki.wVk = 67;
   
   INPUT key_67_up[1] = {};   
   ZeroMemory(key_67_up, sizeof(key_67_up));
   
   key_67_up[0].type = INPUT_KEYBOARD;   
   key_67_up[0].ki.wVk = 67;   
   key_67_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_68_down[1] = {};   
   ZeroMemory(key_68_down, sizeof(key_68_down));
   
   key_68_down[0].type = INPUT_KEYBOARD;   
   key_68_down[0].ki.wVk = 68;
   
   INPUT key_68_up[1] = {};   
   ZeroMemory(key_68_up, sizeof(key_68_up));
   
   key_68_up[0].type = INPUT_KEYBOARD;   
   key_68_up[0].ki.wVk = 68;   
   key_68_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_69_down[1] = {};   
   ZeroMemory(key_69_down, sizeof(key_69_down));
   
   key_69_down[0].type = INPUT_KEYBOARD;   
   key_69_down[0].ki.wVk = 69;
   
   INPUT key_69_up[1] = {};   
   ZeroMemory(key_69_up, sizeof(key_69_up));
   
   key_69_up[0].type = INPUT_KEYBOARD;   
   key_69_up[0].ki.wVk = 69;   
   key_69_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_70_down[1] = {};   
   ZeroMemory(key_70_down, sizeof(key_70_down));
   
   key_70_down[0].type = INPUT_KEYBOARD;   
   key_70_down[0].ki.wVk = 70;
   
   INPUT key_70_up[1] = {};   
   ZeroMemory(key_70_up, sizeof(key_70_up));
   
   key_70_up[0].type = INPUT_KEYBOARD;   
   key_70_up[0].ki.wVk = 70;   
   key_70_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_72_down[1] = {};   
   ZeroMemory(key_72_down, sizeof(key_72_down));
   
   key_72_down[0].type = INPUT_KEYBOARD;   
   key_72_down[0].ki.wVk = 72;
   
   INPUT key_72_up[1] = {};   
   ZeroMemory(key_72_up, sizeof(key_72_up));
   
   key_72_up[0].type = INPUT_KEYBOARD;   
   key_72_up[0].ki.wVk = 72;   
   key_72_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_73_down[1] = {};   
   ZeroMemory(key_73_down, sizeof(key_73_down));
   
   key_73_down[0].type = INPUT_KEYBOARD;   
   key_73_down[0].ki.wVk = 73;
   
   INPUT key_73_up[1] = {};   
   ZeroMemory(key_73_up, sizeof(key_73_up));
   
   key_73_up[0].type = INPUT_KEYBOARD;   
   key_73_up[0].ki.wVk = 73;   
   key_73_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_75_down[1] = {};   
   ZeroMemory(key_75_down, sizeof(key_75_down));
   
   key_75_down[0].type = INPUT_KEYBOARD;   
   key_75_down[0].ki.wVk = 75;
   
   INPUT key_75_up[1] = {};   
   ZeroMemory(key_75_up, sizeof(key_75_up));
   
   key_75_up[0].type = INPUT_KEYBOARD;   
   key_75_up[0].ki.wVk = 75;   
   key_75_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_76_down[1] = {};   
   ZeroMemory(key_76_down, sizeof(key_76_down));
   
   key_76_down[0].type = INPUT_KEYBOARD;   
   key_76_down[0].ki.wVk = 76;
   
   INPUT key_76_up[1] = {};   
   ZeroMemory(key_76_up, sizeof(key_76_up));
   
   key_76_up[0].type = INPUT_KEYBOARD;   
   key_76_up[0].ki.wVk = 76;   
   key_76_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_77_down[1] = {};   
   ZeroMemory(key_77_down, sizeof(key_77_down));
   
   key_77_down[0].type = INPUT_KEYBOARD;   
   key_77_down[0].ki.wVk = 77;
   
   INPUT key_77_up[1] = {};   
   ZeroMemory(key_77_up, sizeof(key_77_up));
   
   key_77_up[0].type = INPUT_KEYBOARD;   
   key_77_up[0].ki.wVk = 77;   
   key_77_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_78_down[1] = {};   
   ZeroMemory(key_78_down, sizeof(key_78_down));
   
   key_78_down[0].type = INPUT_KEYBOARD;   
   key_78_down[0].ki.wVk = 78;
   
   INPUT key_78_up[1] = {};   
   ZeroMemory(key_78_up, sizeof(key_78_up));
   
   key_78_up[0].type = INPUT_KEYBOARD;   
   key_78_up[0].ki.wVk = 78;   
   key_78_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_79_down[1] = {};   
   ZeroMemory(key_79_down, sizeof(key_79_down));
   
   key_79_down[0].type = INPUT_KEYBOARD;   
   key_79_down[0].ki.wVk = 79;
   
   INPUT key_79_up[1] = {};   
   ZeroMemory(key_79_up, sizeof(key_79_up));
   
   key_79_up[0].type = INPUT_KEYBOARD;   
   key_79_up[0].ki.wVk = 79;   
   key_79_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_80_down[1] = {};   
   ZeroMemory(key_80_down, sizeof(key_80_down));
   
   key_80_down[0].type = INPUT_KEYBOARD;   
   key_80_down[0].ki.wVk = 80;
   
   INPUT key_80_up[1] = {};   
   ZeroMemory(key_80_up, sizeof(key_80_up));
   
   key_80_up[0].type = INPUT_KEYBOARD;   
   key_80_up[0].ki.wVk = 80;   
   key_80_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_82_down[1] = {};   
   ZeroMemory(key_82_down, sizeof(key_82_down));
   
   key_82_down[0].type = INPUT_KEYBOARD;   
   key_82_down[0].ki.wVk = 82;
   
   INPUT key_82_up[1] = {};   
   ZeroMemory(key_82_up, sizeof(key_82_up));
   
   key_82_up[0].type = INPUT_KEYBOARD;   
   key_82_up[0].ki.wVk = 82;   
   key_82_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_83_down[1] = {};   
   ZeroMemory(key_83_down, sizeof(key_83_down));
   
   key_83_down[0].type = INPUT_KEYBOARD;   
   key_83_down[0].ki.wVk = 83;
   
   INPUT key_83_up[1] = {};   
   ZeroMemory(key_83_up, sizeof(key_83_up));
   
   key_83_up[0].type = INPUT_KEYBOARD;   
   key_83_up[0].ki.wVk = 83;   
   key_83_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_84_down[1] = {};   
   ZeroMemory(key_84_down, sizeof(key_84_down));
   
   key_84_down[0].type = INPUT_KEYBOARD;   
   key_84_down[0].ki.wVk = 84;
   
   INPUT key_84_up[1] = {};   
   ZeroMemory(key_84_up, sizeof(key_84_up));
   
   key_84_up[0].type = INPUT_KEYBOARD;   
   key_84_up[0].ki.wVk = 84;   
   key_84_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_85_down[1] = {};   
   ZeroMemory(key_85_down, sizeof(key_85_down));
   
   key_85_down[0].type = INPUT_KEYBOARD;   
   key_85_down[0].ki.wVk = 85;
   
   INPUT key_85_up[1] = {};   
   ZeroMemory(key_85_up, sizeof(key_85_up));
   
   key_85_up[0].type = INPUT_KEYBOARD;   
   key_85_up[0].ki.wVk = 85;   
   key_85_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_86_down[1] = {};   
   ZeroMemory(key_86_down, sizeof(key_86_down));
   
   key_86_down[0].type = INPUT_KEYBOARD;   
   key_86_down[0].ki.wVk = 86;
   
   INPUT key_86_up[1] = {};   
   ZeroMemory(key_86_up, sizeof(key_86_up));
   
   key_86_up[0].type = INPUT_KEYBOARD;   
   key_86_up[0].ki.wVk = 86;   
   key_86_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_87_down[1] = {};   
   ZeroMemory(key_87_down, sizeof(key_87_down));
   
   key_87_down[0].type = INPUT_KEYBOARD;   
   key_87_down[0].ki.wVk = 87;
   
   INPUT key_87_up[1] = {};   
   ZeroMemory(key_87_up, sizeof(key_87_up));
   
   key_87_up[0].type = INPUT_KEYBOARD;   
   key_87_up[0].ki.wVk = 87;   
   key_87_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_88_down[1] = {};   
   ZeroMemory(key_88_down, sizeof(key_88_down));
   
   key_88_down[0].type = INPUT_KEYBOARD;   
   key_88_down[0].ki.wVk = 88;
   
   INPUT key_88_up[1] = {};   
   ZeroMemory(key_88_up, sizeof(key_88_up));
   
   key_88_up[0].type = INPUT_KEYBOARD;   
   key_88_up[0].ki.wVk = 88;   
   key_88_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_89_down[1] = {};   
   ZeroMemory(key_89_down, sizeof(key_89_down));
   
   key_89_down[0].type = INPUT_KEYBOARD;   
   key_89_down[0].ki.wVk = 89;
   
   INPUT key_89_up[1] = {};   
   ZeroMemory(key_89_up, sizeof(key_89_up));
   
   key_89_up[0].type = INPUT_KEYBOARD;   
   key_89_up[0].ki.wVk = 89;   
   key_89_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_90_down[1] = {};   
   ZeroMemory(key_90_down, sizeof(key_90_down));
   
   key_90_down[0].type = INPUT_KEYBOARD;   
   key_90_down[0].ki.wVk = 90;
   
   INPUT key_90_up[1] = {};   
   ZeroMemory(key_90_up, sizeof(key_90_up));
   
   key_90_up[0].type = INPUT_KEYBOARD;   
   key_90_up[0].ki.wVk = 90;   
   key_90_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_91_down[1] = {};   
   ZeroMemory(key_91_down, sizeof(key_91_down));
   
   key_91_down[0].type = INPUT_KEYBOARD;   
   key_91_down[0].ki.wVk = 70;
   
   INPUT key_91_up[1] = {};   
   ZeroMemory(key_91_up, sizeof(key_91_up));
   
   key_91_up[0].type = INPUT_KEYBOARD;   
   key_91_up[0].ki.wVk = 70;   
   key_91_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_92_down[1] = {};   
   ZeroMemory(key_92_down, sizeof(key_92_down));
   
   key_92_down[0].type = INPUT_KEYBOARD;   
   key_92_down[0].ki.wVk = 81;
   
   INPUT key_92_up[1] = {};   
   ZeroMemory(key_92_up, sizeof(key_92_up));
   
   key_92_up[0].type = INPUT_KEYBOARD;   
   key_92_up[0].ki.wVk = 81;   
   key_92_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_93_down[1] = {};   
   ZeroMemory(key_93_down, sizeof(key_93_down));
   
   key_93_down[0].type = INPUT_KEYBOARD;   
   key_93_down[0].ki.wVk = 71;
   
   INPUT key_93_up[1] = {};   
   ZeroMemory(key_93_up, sizeof(key_93_up));
   
   key_93_up[0].type = INPUT_KEYBOARD;   
   key_93_up[0].ki.wVk = 71;   
   key_93_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_94_down[1] = {};   
   ZeroMemory(key_94_down, sizeof(key_94_down));
   
   key_94_down[0].type = INPUT_KEYBOARD;   
   key_94_down[0].ki.wVk = 51;
   
   INPUT key_94_up[1] = {};   
   ZeroMemory(key_94_up, sizeof(key_94_up));
   
   key_94_up[0].type = INPUT_KEYBOARD;   
   key_94_up[0].ki.wVk = 51;   
   key_94_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_95_down[1] = {};   
   ZeroMemory(key_95_down, sizeof(key_95_down));
   
   key_95_down[0].type = INPUT_KEYBOARD;   
   key_95_down[0].ki.wVk = 189;
   
   INPUT key_95_up[1] = {};   
   ZeroMemory(key_95_up, sizeof(key_95_up));
   
   key_95_up[0].type = INPUT_KEYBOARD;   
   key_95_up[0].ki.wVk = 189;   
   key_95_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_97_down[1] = {};   
   ZeroMemory(key_97_down, sizeof(key_97_down));
   
   key_97_down[0].type = INPUT_KEYBOARD;   
   key_97_down[0].ki.wVk = 65;
   
   INPUT key_97_up[1] = {};   
   ZeroMemory(key_97_up, sizeof(key_97_up));
   
   key_97_up[0].type = INPUT_KEYBOARD;   
   key_97_up[0].ki.wVk = 65;   
   key_97_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_98_down[1] = {};   
   ZeroMemory(key_98_down, sizeof(key_98_down));
   
   key_98_down[0].type = INPUT_KEYBOARD;   
   key_98_down[0].ki.wVk = 66;
   
   INPUT key_98_up[1] = {};   
   ZeroMemory(key_98_up, sizeof(key_98_up));
   
   key_98_up[0].type = INPUT_KEYBOARD;   
   key_98_up[0].ki.wVk = 66;   
   key_98_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_99_down[1] = {};   
   ZeroMemory(key_99_down, sizeof(key_99_down));
   
   key_99_down[0].type = INPUT_KEYBOARD;   
   key_99_down[0].ki.wVk = 67;
   
   INPUT key_99_up[1] = {};   
   ZeroMemory(key_99_up, sizeof(key_99_up));
   
   key_99_up[0].type = INPUT_KEYBOARD;   
   key_99_up[0].ki.wVk = 67;   
   key_99_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_100_down[1] = {};   
   ZeroMemory(key_100_down, sizeof(key_100_down));
   
   key_100_down[0].type = INPUT_KEYBOARD;   
   key_100_down[0].ki.wVk = 68;
   
   INPUT key_100_up[1] = {};   
   ZeroMemory(key_100_up, sizeof(key_100_up));
   
   key_100_up[0].type = INPUT_KEYBOARD;   
   key_100_up[0].ki.wVk = 68;   
   key_100_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_101_down[1] = {};   
   ZeroMemory(key_101_down, sizeof(key_101_down));
   
   key_101_down[0].type = INPUT_KEYBOARD;   
   key_101_down[0].ki.wVk = 69;
   
   INPUT key_101_up[1] = {};   
   ZeroMemory(key_101_up, sizeof(key_101_up));
   
   key_101_up[0].type = INPUT_KEYBOARD;   
   key_101_up[0].ki.wVk = 69;   
   key_101_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_102_down[1] = {};   
   ZeroMemory(key_102_down, sizeof(key_102_down));
   
   key_102_down[0].type = INPUT_KEYBOARD;   
   key_102_down[0].ki.wVk = 70;
   
   INPUT key_102_up[1] = {};   
   ZeroMemory(key_102_up, sizeof(key_102_up));
   
   key_102_up[0].type = INPUT_KEYBOARD;   
   key_102_up[0].ki.wVk = 70;   
   key_102_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_103_down[1] = {};   
   ZeroMemory(key_103_down, sizeof(key_103_down));
   
   key_103_down[0].type = INPUT_KEYBOARD;   
   key_103_down[0].ki.wVk = 71;
   
   INPUT key_103_up[1] = {};   
   ZeroMemory(key_103_up, sizeof(key_103_up));
   
   key_103_up[0].type = INPUT_KEYBOARD;   
   key_103_up[0].ki.wVk = 71;   
   key_103_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_104_down[1] = {};   
   ZeroMemory(key_104_down, sizeof(key_104_down));
   
   key_104_down[0].type = INPUT_KEYBOARD;   
   key_104_down[0].ki.wVk = 72;
   
   INPUT key_104_up[1] = {};   
   ZeroMemory(key_104_up, sizeof(key_104_up));
   
   key_104_up[0].type = INPUT_KEYBOARD;   
   key_104_up[0].ki.wVk = 72;   
   key_104_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_105_down[1] = {};   
   ZeroMemory(key_105_down, sizeof(key_105_down));
   
   key_105_down[0].type = INPUT_KEYBOARD;   
   key_105_down[0].ki.wVk = 73;
   
   INPUT key_105_up[1] = {};   
   ZeroMemory(key_105_up, sizeof(key_105_up));
   
   key_105_up[0].type = INPUT_KEYBOARD;   
   key_105_up[0].ki.wVk = 73;   
   key_105_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_106_down[1] = {};   
   ZeroMemory(key_106_down, sizeof(key_106_down));
   
   key_106_down[0].type = INPUT_KEYBOARD;   
   key_106_down[0].ki.wVk = 74;
   
   INPUT key_106_up[1] = {};   
   ZeroMemory(key_106_up, sizeof(key_106_up));
   
   key_106_up[0].type = INPUT_KEYBOARD;   
   key_106_up[0].ki.wVk = 74;   
   key_106_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_107_down[1] = {};   
   ZeroMemory(key_107_down, sizeof(key_107_down));
   
   key_107_down[0].type = INPUT_KEYBOARD;   
   key_107_down[0].ki.wVk = 75;
   
   INPUT key_107_up[1] = {};   
   ZeroMemory(key_107_up, sizeof(key_107_up));
   
   key_107_up[0].type = INPUT_KEYBOARD;   
   key_107_up[0].ki.wVk = 75;   
   key_107_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_108_down[1] = {};   
   ZeroMemory(key_108_down, sizeof(key_108_down));
   
   key_108_down[0].type = INPUT_KEYBOARD;   
   key_108_down[0].ki.wVk = 76;
   
   INPUT key_108_up[1] = {};   
   ZeroMemory(key_108_up, sizeof(key_108_up));
   
   key_108_up[0].type = INPUT_KEYBOARD;   
   key_108_up[0].ki.wVk = 76;   
   key_108_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_109_down[1] = {};   
   ZeroMemory(key_109_down, sizeof(key_109_down));
   
   key_109_down[0].type = INPUT_KEYBOARD;   
   key_109_down[0].ki.wVk = 77;
   
   INPUT key_109_up[1] = {};   
   ZeroMemory(key_109_up, sizeof(key_109_up));
   
   key_109_up[0].type = INPUT_KEYBOARD;   
   key_109_up[0].ki.wVk = 77;   
   key_109_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_110_down[1] = {};   
   ZeroMemory(key_110_down, sizeof(key_110_down));
   
   key_110_down[0].type = INPUT_KEYBOARD;   
   key_110_down[0].ki.wVk = 78;
   
   INPUT key_110_up[1] = {};   
   ZeroMemory(key_110_up, sizeof(key_110_up));
   
   key_110_up[0].type = INPUT_KEYBOARD;   
   key_110_up[0].ki.wVk = 78;   
   key_110_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_111_down[1] = {};   
   ZeroMemory(key_111_down, sizeof(key_111_down));
   
   key_111_down[0].type = INPUT_KEYBOARD;   
   key_111_down[0].ki.wVk = 79;
   
   INPUT key_111_up[1] = {};   
   ZeroMemory(key_111_up, sizeof(key_111_up));
   
   key_111_up[0].type = INPUT_KEYBOARD;   
   key_111_up[0].ki.wVk = 79;   
   key_111_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_112_down[1] = {};   
   ZeroMemory(key_112_down, sizeof(key_112_down));
   
   key_112_down[0].type = INPUT_KEYBOARD;   
   key_112_down[0].ki.wVk = 80;
   
   INPUT key_112_up[1] = {};   
   ZeroMemory(key_112_up, sizeof(key_112_up));
   
   key_112_up[0].type = INPUT_KEYBOARD;   
   key_112_up[0].ki.wVk = 80;   
   key_112_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_114_down[1] = {};   
   ZeroMemory(key_114_down, sizeof(key_114_down));
   
   key_114_down[0].type = INPUT_KEYBOARD;   
   key_114_down[0].ki.wVk = 82;
   
   INPUT key_114_up[1] = {};   
   ZeroMemory(key_114_up, sizeof(key_114_up));
   
   key_114_up[0].type = INPUT_KEYBOARD;   
   key_114_up[0].ki.wVk = 82;   
   key_114_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_115_down[1] = {};   
   ZeroMemory(key_115_down, sizeof(key_115_down));
   
   key_115_down[0].type = INPUT_KEYBOARD;   
   key_115_down[0].ki.wVk = 83;
   
   INPUT key_115_up[1] = {};   
   ZeroMemory(key_115_up, sizeof(key_115_up));
   
   key_115_up[0].type = INPUT_KEYBOARD;   
   key_115_up[0].ki.wVk = 83;   
   key_115_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_116_down[1] = {};   
   ZeroMemory(key_116_down, sizeof(key_116_down));
   
   key_116_down[0].type = INPUT_KEYBOARD;   
   key_116_down[0].ki.wVk = 84;
   
   INPUT key_116_up[1] = {};   
   ZeroMemory(key_116_up, sizeof(key_116_up));
   
   key_116_up[0].type = INPUT_KEYBOARD;   
   key_116_up[0].ki.wVk = 84;   
   key_116_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_117_down[1] = {};   
   ZeroMemory(key_117_down, sizeof(key_117_down));
   
   key_117_down[0].type = INPUT_KEYBOARD;   
   key_117_down[0].ki.wVk = 85;
   
   INPUT key_117_up[1] = {};   
   ZeroMemory(key_117_up, sizeof(key_117_up));
   
   key_117_up[0].type = INPUT_KEYBOARD;   
   key_117_up[0].ki.wVk = 85;   
   key_117_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_118_down[1] = {};   
   ZeroMemory(key_118_down, sizeof(key_118_down));
   
   key_118_down[0].type = INPUT_KEYBOARD;   
   key_118_down[0].ki.wVk = 86;
   
   INPUT key_118_up[1] = {};   
   ZeroMemory(key_118_up, sizeof(key_118_up));
   
   key_118_up[0].type = INPUT_KEYBOARD;   
   key_118_up[0].ki.wVk = 86;   
   key_118_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_119_down[1] = {};   
   ZeroMemory(key_119_down, sizeof(key_119_down));
   
   key_119_down[0].type = INPUT_KEYBOARD;   
   key_119_down[0].ki.wVk = 87;
   
   INPUT key_119_up[1] = {};   
   ZeroMemory(key_119_up, sizeof(key_119_up));
   
   key_119_up[0].type = INPUT_KEYBOARD;   
   key_119_up[0].ki.wVk = 87;   
   key_119_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_120_down[1] = {};   
   ZeroMemory(key_120_down, sizeof(key_120_down));
   
   key_120_down[0].type = INPUT_KEYBOARD;   
   key_120_down[0].ki.wVk = 88;
   
   INPUT key_120_up[1] = {};   
   ZeroMemory(key_120_up, sizeof(key_120_up));
   
   key_120_up[0].type = INPUT_KEYBOARD;   
   key_120_up[0].ki.wVk = 88;   
   key_120_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_121_down[1] = {};   
   ZeroMemory(key_121_down, sizeof(key_121_down));
   
   key_121_down[0].type = INPUT_KEYBOARD;   
   key_121_down[0].ki.wVk = 89;
   
   INPUT key_121_up[1] = {};   
   ZeroMemory(key_121_up, sizeof(key_121_up));
   
   key_121_up[0].type = INPUT_KEYBOARD;   
   key_121_up[0].ki.wVk = 89;   
   key_121_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_123_down[1] = {};   
   ZeroMemory(key_123_down, sizeof(key_123_down));
   
   key_123_down[0].type = INPUT_KEYBOARD;   
   key_123_down[0].ki.wVk = 66;
   
   INPUT key_123_up[1] = {};   
   ZeroMemory(key_123_up, sizeof(key_123_up));
   
   key_123_up[0].type = INPUT_KEYBOARD;   
   key_123_up[0].ki.wVk = 66;   
   key_123_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   INPUT key_125_down[1] = {};   
   ZeroMemory(key_125_down, sizeof(key_125_down));
   
   key_125_down[0].type = INPUT_KEYBOARD;   
   key_125_down[0].ki.wVk = 78;
   
   INPUT key_125_up[1] = {};   
   ZeroMemory(key_125_up, sizeof(key_125_up));
   
   key_125_up[0].type = INPUT_KEYBOARD;   
   key_125_up[0].ki.wVk = 78;   
   key_125_up[0].ki.dwFlags = KEYEVENTF_KEYUP;
   
   Sleep(10);
   INPUT inputs1[2] = {};   
   ZeroMemory(inputs1, sizeof(inputs1));
   
   inputs1[0].type = INPUT_KEYBOARD;   
   inputs1[0].ki.wVk = VK_LWIN;
   
   inputs1[1].type = INPUT_KEYBOARD;   
   inputs1[1].ki.wVk = 'R';
   
   SendInput(ARRAYSIZE(inputs1), inputs1, sizeof(INPUT));

   
   Sleep(10);   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
   Sleep(10);
   INPUT inputs4[1] = {};   
   ZeroMemory(inputs4, sizeof(inputs4));
   
   inputs4[0].type = INPUT_KEYBOARD;   
   inputs4[0].ki.wVk = VK_RETURN;
   
   SendInput(ARRAYSIZE(inputs4), inputs4, sizeof(INPUT));


   
   Sleep(1010);
   
   Sleep(10);   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_65_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_65_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_84_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_84_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_84_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_84_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_68_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_68_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_102_down, sizeof(INPUT));   
   SendInput(1, key_102_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_64_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_64_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_94_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_94_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_34_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_34_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_49_down, sizeof(INPUT));   
   SendInput(1, key_49_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_103_down, sizeof(INPUT));   
   SendInput(1, key_103_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_59_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_59_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_103_down, sizeof(INPUT));   
   SendInput(1, key_103_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_82_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_82_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_73_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_73_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_59_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_59_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_65_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_65_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_123_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_123_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_49_down, sizeof(INPUT));   
   SendInput(1, key_49_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_91_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_91_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_68_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_68_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_73_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_73_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_40_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_40_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_34_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_34_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_51_down, sizeof(INPUT));   
   SendInput(1, key_51_up, sizeof(INPUT));
   
      
   SendInput(1, key_50_down, sizeof(INPUT));   
   SendInput(1, key_50_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_34_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_34_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_41_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_41_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_93_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_93_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_49_down, sizeof(INPUT));   
   SendInput(1, key_49_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_120_down, sizeof(INPUT));   
   SendInput(1, key_120_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_103_down, sizeof(INPUT));   
   SendInput(1, key_103_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_87_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_87_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_40_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_40_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_73_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_73_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_87_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_87_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, key_44_down, sizeof(INPUT));   
   SendInput(1, key_44_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_103_down, sizeof(INPUT));   
   SendInput(1, key_103_up, sizeof(INPUT));
   
      
   SendInput(1, key_44_down, sizeof(INPUT));   
   SendInput(1, key_44_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_73_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_73_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_119_down, sizeof(INPUT));   
   SendInput(1, key_119_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, key_44_down, sizeof(INPUT));   
   SendInput(1, key_44_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_73_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_73_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_41_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_41_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_59_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_59_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_65_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_65_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_67_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_67_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_79_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_79_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_65_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_65_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_78_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_78_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_68_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_68_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_95_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_95_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_86_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_86_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_79_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_79_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_76_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_76_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_85_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_85_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_69_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_69_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_95_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_95_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_85_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_85_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_61_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_61_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_48_down, sizeof(INPUT));   
   SendInput(1, key_48_up, sizeof(INPUT));
   
      
   SendInput(1, key_120_down, sizeof(INPUT));   
   SendInput(1, key_120_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_65_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_65_up, sizeof(INPUT));
   
      
   SendInput(1, key_48_down, sizeof(INPUT));   
   SendInput(1, key_48_up, sizeof(INPUT));
   
      
   SendInput(1, key_48_down, sizeof(INPUT));   
   SendInput(1, key_48_up, sizeof(INPUT));
   
      
   SendInput(1, key_48_down, sizeof(INPUT));   
   SendInput(1, key_48_up, sizeof(INPUT));
   
      
   SendInput(1, key_48_down, sizeof(INPUT));   
   SendInput(1, key_48_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_59_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_59_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_87_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_87_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_95_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_95_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_65_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_65_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_67_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_67_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_79_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_79_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_65_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_65_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_78_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_78_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_68_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_68_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_61_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_61_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_48_down, sizeof(INPUT));   
   SendInput(1, key_48_up, sizeof(INPUT));
   
      
   SendInput(1, key_120_down, sizeof(INPUT));   
   SendInput(1, key_120_up, sizeof(INPUT));
   
      
   SendInput(1, key_51_down, sizeof(INPUT));   
   SendInput(1, key_51_up, sizeof(INPUT));
   
      
   SendInput(1, key_49_down, sizeof(INPUT));   
   SendInput(1, key_49_up, sizeof(INPUT));
   
      
   SendInput(1, key_57_down, sizeof(INPUT));   
   SendInput(1, key_57_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_59_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_59_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_120_down, sizeof(INPUT));   
   SendInput(1, key_120_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_86_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_86_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_40_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_40_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_41_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_41_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_123_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_123_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_103_down, sizeof(INPUT));   
   SendInput(1, key_103_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_87_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_87_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_40_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_40_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_119_down, sizeof(INPUT));   
   SendInput(1, key_119_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_73_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_73_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_40_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_40_up, sizeof(INPUT));
   
      
   SendInput(1, key_48_down, sizeof(INPUT));   
   SendInput(1, key_48_up, sizeof(INPUT));
   
      
   SendInput(1, key_120_down, sizeof(INPUT));   
   SendInput(1, key_120_up, sizeof(INPUT));
   
      
   SendInput(1, key_102_down, sizeof(INPUT));   
   SendInput(1, key_102_up, sizeof(INPUT));
   
      
   SendInput(1, key_102_down, sizeof(INPUT));   
   SendInput(1, key_102_up, sizeof(INPUT));
   
      
   SendInput(1, key_102_down, sizeof(INPUT));   
   SendInput(1, key_102_up, sizeof(INPUT));
   
      
   SendInput(1, key_102_down, sizeof(INPUT));   
   SendInput(1, key_102_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_41_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_41_up, sizeof(INPUT));
   
      
   SendInput(1, key_44_down, sizeof(INPUT));   
   SendInput(1, key_44_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_87_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_87_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_95_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_95_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_65_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_65_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_67_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_67_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_79_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_79_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_65_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_65_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_78_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_78_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_68_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_68_up, sizeof(INPUT));
   
      
   SendInput(1, key_44_down, sizeof(INPUT));   
   SendInput(1, key_44_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_73_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_73_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_90_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_90_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_44_down, sizeof(INPUT));   
   SendInput(1, key_44_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_40_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_40_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_73_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_73_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_41_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_41_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_65_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_65_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_67_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_67_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_79_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_79_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_65_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_65_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_78_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_78_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_68_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_68_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_95_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_95_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_86_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_86_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_79_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_79_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_76_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_76_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_85_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_85_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_69_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_69_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_95_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_95_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_85_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_85_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_41_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_41_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_59_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_59_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_125_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_125_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_125_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_125_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_49_down, sizeof(INPUT));   
   SendInput(1, key_49_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_94_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_94_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_34_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_34_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_64_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_64_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_49_down, sizeof(INPUT));   
   SendInput(1, key_49_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_91_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_91_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_65_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_65_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_93_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_93_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_58_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_58_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_58_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_58_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_120_down, sizeof(INPUT));   
   SendInput(1, key_120_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_86_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_86_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_40_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_40_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_41_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_41_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_49_down, sizeof(INPUT));   
   SendInput(1, key_49_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_119_down, sizeof(INPUT));   
   SendInput(1, key_119_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_69_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_69_up, sizeof(INPUT));
   
      
   SendInput(1, key_120_down, sizeof(INPUT));   
   SendInput(1, key_120_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_66_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_66_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_70_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_70_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_49_down, sizeof(INPUT));   
   SendInput(1, key_49_up, sizeof(INPUT));
   
   Sleep(10);
   INPUT inputs8[1] = {};   
   ZeroMemory(inputs8, sizeof(inputs8));
   
   inputs8[0].type = INPUT_KEYBOARD;   
   inputs8[0].ki.wVk = VK_RETURN;
   
   SendInput(ARRAYSIZE(inputs8), inputs8, sizeof(INPUT));

   
   Sleep(10);   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_76_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_76_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_34_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_34_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_58_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_58_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_47_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_47_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_47_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_47_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_103_down, sizeof(INPUT));   
   SendInput(1, key_103_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_103_down, sizeof(INPUT));   
   SendInput(1, key_103_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_47_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_47_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_63_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_63_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_120_down, sizeof(INPUT));   
   SendInput(1, key_120_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_61_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_61_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_119_down, sizeof(INPUT));   
   SendInput(1, key_119_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_61_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_61_up, sizeof(INPUT));
   
      
   SendInput(1, key_49_down, sizeof(INPUT));   
   SendInput(1, key_49_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_57_down, sizeof(INPUT));   
   SendInput(1, key_57_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_68_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_68_up, sizeof(INPUT));
   
      
   SendInput(1, key_51_down, sizeof(INPUT));   
   SendInput(1, key_51_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_72_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_72_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_75_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_75_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_95_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_95_up, sizeof(INPUT));
   
      
   SendInput(1, key_102_down, sizeof(INPUT));   
   SendInput(1, key_102_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_73_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_73_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_88_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_88_up, sizeof(INPUT));
   
      
   SendInput(1, key_106_down, sizeof(INPUT));   
   SendInput(1, key_106_up, sizeof(INPUT));
   
      
   SendInput(1, key_50_down, sizeof(INPUT));   
   SendInput(1, key_50_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_72_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_72_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_89_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_89_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_55_down, sizeof(INPUT));   
   SendInput(1, key_55_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_67_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_67_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_88_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_88_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_49_down, sizeof(INPUT));   
   SendInput(1, key_49_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_69_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_69_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_34_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_34_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_67_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_67_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_58_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_58_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_47_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_47_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_85_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_85_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_47_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_47_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_37_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_37_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_37_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_37_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_47_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_47_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_68_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_68_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_119_down, sizeof(INPUT));   
   SendInput(1, key_119_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_47_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_47_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, key_103_down, sizeof(INPUT));   
   SendInput(1, key_103_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, key_103_down, sizeof(INPUT));   
   SendInput(1, key_103_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, key_52_down, sizeof(INPUT));   
   SendInput(1, key_52_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_68_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_68_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_107_down, sizeof(INPUT));   
   SendInput(1, key_107_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_61_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_61_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_67_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_67_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_79_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_79_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_106_down, sizeof(INPUT));   
   SendInput(1, key_106_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_40_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_40_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_34_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_34_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_87_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_87_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_77_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_77_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_79_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_79_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_67_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_67_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_88_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_88_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_34_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_34_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_41_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_41_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_107_down, sizeof(INPUT));   
   SendInput(1, key_107_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_61_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_61_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_67_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_67_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_79_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_79_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_106_down, sizeof(INPUT));   
   SendInput(1, key_106_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_40_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_40_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_34_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_34_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_87_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_87_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_34_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_34_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_41_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_41_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_107_down, sizeof(INPUT));   
   SendInput(1, key_107_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_102_down, sizeof(INPUT));   
   SendInput(1, key_102_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_61_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_61_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_69_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_69_up, sizeof(INPUT));
   
      
   SendInput(1, key_120_down, sizeof(INPUT));   
   SendInput(1, key_120_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_69_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_69_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_103_down, sizeof(INPUT));   
   SendInput(1, key_103_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_40_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_40_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_34_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_34_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_37_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_37_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_102_down, sizeof(INPUT));   
   SendInput(1, key_102_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_37_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_37_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_34_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_34_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_41_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_41_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_107_down, sizeof(INPUT));   
   SendInput(1, key_107_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_85_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_85_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_82_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_82_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_76_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_76_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_61_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_61_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_34_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_34_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_37_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_37_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_102_down, sizeof(INPUT));   
   SendInput(1, key_102_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_37_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_37_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_92_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_92_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_119_down, sizeof(INPUT));   
   SendInput(1, key_119_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_92_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_92_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, key_103_down, sizeof(INPUT));   
   SendInput(1, key_103_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, key_103_down, sizeof(INPUT));   
   SendInput(1, key_103_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_45_down, sizeof(INPUT));   
   SendInput(1, key_45_up, sizeof(INPUT));
   
      
   SendInput(1, key_117_down, sizeof(INPUT));   
   SendInput(1, key_117_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_109_down, sizeof(INPUT));   
   SendInput(1, key_109_up, sizeof(INPUT));
   
      
   SendInput(1, key_52_down, sizeof(INPUT));   
   SendInput(1, key_52_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_34_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_34_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_107_down, sizeof(INPUT));   
   SendInput(1, key_107_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_107_down, sizeof(INPUT));   
   SendInput(1, key_107_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_87_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_87_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_94_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_94_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_60_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_60_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_94_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_94_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_49_down, sizeof(INPUT));   
   SendInput(1, key_49_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_107_down, sizeof(INPUT));   
   SendInput(1, key_107_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_87_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_87_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_83_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_83_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_112_down, sizeof(INPUT));   
   SendInput(1, key_112_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_49_down, sizeof(INPUT));   
   SendInput(1, key_49_up, sizeof(INPUT));
   
      
   SendInput(1, key_48_down, sizeof(INPUT));   
   SendInput(1, key_48_up, sizeof(INPUT));
   
      
   SendInput(1, key_48_down, sizeof(INPUT));   
   SendInput(1, key_48_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_107_down, sizeof(INPUT));   
   SendInput(1, key_107_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_87_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_87_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_110_down, sizeof(INPUT));   
   SendInput(1, key_110_up, sizeof(INPUT));
   
      
   SendInput(1, key_100_down, sizeof(INPUT));   
   SendInput(1, key_100_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_107_down, sizeof(INPUT));   
   SendInput(1, key_107_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_104_down, sizeof(INPUT));   
   SendInput(1, key_104_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_80_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_80_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_121_down, sizeof(INPUT));   
   SendInput(1, key_121_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, altgr_down, sizeof(INPUT));   
   SendInput(1, key_62_down, sizeof(INPUT));   
   SendInput(1, altgr_up, sizeof(INPUT));   
   SendInput(1, key_62_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_107_down, sizeof(INPUT));   
   SendInput(1, key_107_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_97_down, sizeof(INPUT));   
   SendInput(1, key_97_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_99_down, sizeof(INPUT));   
   SendInput(1, key_99_up, sizeof(INPUT));
   
      
   SendInput(1, key_107_down, sizeof(INPUT));   
   SendInput(1, key_107_up, sizeof(INPUT));
   
      
   SendInput(1, key_114_down, sizeof(INPUT));   
   SendInput(1, key_114_up, sizeof(INPUT));
   
      
   SendInput(1, key_111_down, sizeof(INPUT));   
   SendInput(1, key_111_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_108_down, sizeof(INPUT));   
   SendInput(1, key_108_up, sizeof(INPUT));
   
      
   SendInput(1, key_46_down, sizeof(INPUT));   
   SendInput(1, key_46_up, sizeof(INPUT));
   
      
   SendInput(1, key_118_down, sizeof(INPUT));   
   SendInput(1, key_118_up, sizeof(INPUT));
   
      
   SendInput(1, key_98_down, sizeof(INPUT));   
   SendInput(1, key_98_up, sizeof(INPUT));
   
      
   SendInput(1, key_115_down, sizeof(INPUT));   
   SendInput(1, key_115_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, shift_down, sizeof(INPUT));   
   SendInput(1, key_38_down, sizeof(INPUT));   
   SendInput(1, shift_up, sizeof(INPUT));   
   SendInput(1, key_38_up, sizeof(INPUT));
   
      
   SendInput(1, key_32_down, sizeof(INPUT));   
   SendInput(1, key_32_up, sizeof(INPUT));
   
      
   SendInput(1, key_101_down, sizeof(INPUT));   
   SendInput(1, key_101_up, sizeof(INPUT));
   
      
   SendInput(1, key_120_down, sizeof(INPUT));   
   SendInput(1, key_120_up, sizeof(INPUT));
   
      
   SendInput(1, key_105_down, sizeof(INPUT));   
   SendInput(1, key_105_up, sizeof(INPUT));
   
      
   SendInput(1, key_116_down, sizeof(INPUT));   
   SendInput(1, key_116_up, sizeof(INPUT));
   
   Sleep(10);
   INPUT inputs11[1] = {};   
   ZeroMemory(inputs11, sizeof(inputs11));
   
   inputs11[0].type = INPUT_KEYBOARD;   
   inputs11[0].ki.wVk = VK_RETURN;
   
   SendInput(ARRAYSIZE(inputs11), inputs11, sizeof(INPUT));


   return 0;
}