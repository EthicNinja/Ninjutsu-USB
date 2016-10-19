#ifndef NinjaKeyboard_h
#define NinjaKeyboard_h

class EthicNinjaKeyboard
{
  public:    
	void init(int x);
	void echo(char* x);
	void echoEnter(char* x);
	void sleep(int x);
	void winRUN(char* x);
	void winFTP(char* action,char* username,char* password,char* host, char* port,char* file);
  private:
    int _Def_Init;
};

#endif