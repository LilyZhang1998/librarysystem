#include<string.h>
#include<fstream> 
#include<iostream> 
#include"Book01.h" 
#include"Ebook01.h"
#include"Paper01.h"
#include"User01.h"
class Manage{
	public:
		Manage(string &routine,int booknumber=2,int ebooknumber=2,int papernumber=2,int usernumber=2);
		Manage(Manage &m);
		void Start();
		int Getnumber(string &p);
		void Record(Book &book1);
		void Record(Ebook &book1);
		void Record(Paper &book1);
		void Record(User &book1);
		void FindBook(string &bookname);
		void FindEbook(string &bookname);
		void FindPaper(string &bookname);
		void FindUser(string &bookname);
		~Manage(){};
	private:
		int Booknumber;
		int Ebooknumber;
		int Papernumber;
		int Usernumber;
		Book *book[];
		Ebook *ebook[];
		Paper *paper[];
		User *user[]; 
		string Routine;
};
