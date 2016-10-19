#include <NinjaKeyboard.h>

EthicNinjaKeyboard en;

void setup()
{
  //Inisialisasi program
  en.init(1500);
  en.writeOnBackground("del %userprofile%\\prankDesktop.bmp");
  en.writeOnBackground("exit");
  en.pressAndRelease(KEY_M, MOD_GUI_LEFT); //minimize all windows
  en.sleep(1000);
  en.pressAndRelease(KEY_PRINTSCREEN); //prntscr
  en.sleep(50);
  en.pressAndRelease(KEY_F10, MOD_SHIFT_LEFT); //Open Menu
  en.sleep(200);
  en.pressAndRelease(KEY_V);
  en.sleep(50);
  en.pressAndRelease(KEY_D);
  en.sleep(500);  
  en.pressAndRelease(KEY_R, MOD_GUI_LEFT); //run
  en.sleep(100);
  en.echoEnter("mspaint");
  en.sleep(1200);
  en.pressAndRelease(KEY_V, MOD_CONTROL_LEFT); //paste
  en.sleep(500);  
  en.pressAndRelease(KEY_S, MOD_CONTROL_LEFT); //save
  en.sleep(500);  
  en.echoEnter("%userprofile%\\prankDesktop.bmp"); //save in users folder
  en.sleep(1000);
  en.pressAndRelease(KEY_F, MOD_ALT_LEFT); //file
  en.sleep(500);
  en.pressAndRelease(KEY_K); //set as desktop
  en.sleep(100);  
  en.pressAndRelease(KEY_T); //tile
  en.sleep(1000); 
  en.pressAndRelease(KEY_F4, MOD_ALT_LEFT); //close paint
  en.sleep(300);
  en.pressAndRelease(KEY_M, MOD_GUI_LEFT | MOD_SHIFT_LEFT);
  en.done();
}

void loop() {
  
}

