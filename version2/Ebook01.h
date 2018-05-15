#include<iostream> 
#include<string> 
#include<fstream>     
using namespace std;
class Ebook{     
    public:   
        Ebook(string &Name,string &Number,string &ISBN1,string &Authur,string &Establishinfo,
			string &Routine):number(Number),ISBN(ISBN1),name(Name),authur(Authur),
			establishinfo(Establishinfo),routine(Routine){	}; 
        Ebook(Ebook &b);     
        void Showinfo(string &p);        
        void Changeinfo(string &p ,string &newinfo);
        void Readonline();
        void Download(string &p);
		string Get(string &p); 
		~Ebook(){}    
    private:
		string name;
    	string number;
		string ISBN; 
        string authur;     
        string establishinfo;    
        string routine;     
};
