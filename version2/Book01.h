#include<string.h>
#include<fstream> 
#include<iostream>      
using namespace std;     
class Book{     
    public:   
        Book(string &Name,string &Number,string &ISBN1 , string &Authur,string &Establishinfo,
			string &Statememt,string &Keeper ,string &Saveplace):	name(Name),number(Number),
	ISBN(ISBN1),authur(Authur),establishinfo(Establishinfo),statement(Statememt),keeper(Keeper),
	saveplace(Saveplace){	} ; 
        Book(Book &b);     
        void Showinfo(string &s);        
        void Changeinfo(string &p ,string &newinfo); 
		string Get(string &p);
		~Book(){} 
    private:
		string name;
		string number;
		string ISBN;   
        string authur;     
        string establishinfo;    
        string statement;
		string  keeper;    
        string saveplace;     
}; 
