#include<string.h>
#include<fstream> 
#include<iostream>   
using namespace std;
class Paper{
	public:
		Paper(string &Title ,string &Number,string &Writer,
		 string &Magzine,string &PublishTime,string &Routine,
		 string &Type,string &Elseinfo);   
        Paper(Paper &b);     
        void Showinfo(string &p);        
        void Changeinfo(string &p ,string &newinfo);
        void Showtext();
		string Get(string &p);
		~Paper(){}
	private:
		string title;
		string number;
		string writer;
		string magzine;
		string publishTime;
		string routine;
		string type;
		string elseinfo;
};
