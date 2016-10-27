#include <NinjaKeyboard.h>

EthicNinjaKeyboard en;

void setup()
{
  //Inisialisasi program
  en.init(1500);
  //Upload single file
  en.winFTP("put","user_ftp","pass_ftp","host_ftp", "port_ftp","log.txt");
}

void loop() {
  
}

