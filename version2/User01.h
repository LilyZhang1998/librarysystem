#include<string.h>
#include<fstream> 
#include<iostream> 
using namespace std;
class User{
	public:
		User(string &Name,string &Account,string &Code,string &Role,string &Right);
		User(User &b);
		void Showinfo(string &);
		string Get(string &p);
	//	void Borrow(char *number);
	//	void Return(char *number);
		~User(){}
	private:
		string name;
		string account;
		string code;
		string role;
		string right;
};
