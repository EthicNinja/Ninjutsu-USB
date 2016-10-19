#include <NinjaKeyboard.h>

EthicNinjaKeyboard en;

void setup()
{
  //Inisialisasi program
  en.init(1500);
  //Buka program notepad
  en.winRUN("notepad");
  //Tulis Hello world!
  en.echo("Hello world!");
  en.done();
}

void loop() {
  
}

