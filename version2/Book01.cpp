#include"Book01.h"   
/*Book::Book(string &Name,string &Number,string &ISBN1 , string &Authur,string &Establishinfo,
			string &Statememt,string &Keeper ,string &Saveplace){
	name=Name;
	number=Number;
	ISBN=ISBN1;
	authur=Authur;
	establishinfo=Establishinfo;
	statement=Statememt;
	keeper=Keeper;
	saveplace=Saveplace;
}*/
Book::Book(Book &b){
	number=b.number;  
	ISBN=b.ISBN; 
	name=b.name;
    authur=b.authur;   
    establishinfo=b.establishinfo;   
	statement=b.statement;
	keeper=b.keeper;   
    saveplace=b.saveplace;   
}   
void Book::Showinfo(string &s){
	if(s=="name") 
		cout<<name; 
	else if(s=="number")
		cout<<number;
	else if(s=="ISBN") 
		cout<<ISBN;
    else if(s=="authur")   
        cout<<authur;   
    else if(s==establishinfo)   
        cout<<establishinfo;    
    else if(s=="statement")   
        cout<<statement; 
	else if(s=="keeper") 
		cout<<keeper;
    else if(s=="saveplace")    
        cout<<saveplace;   
    else if(s=="all"){
    	cout<<ISBN<<endl;
    	cout<<name<<endl;
    	cout<<authur<<endl;
    	cout<<establishinfo<<endl;
    	cout<<statement<<endl;
    	cout<<saveplace<<endl;
	}
    else	
        cout<<"No related infomation!"<<endl;   
}         
void Book::Changeinfo(string &s,string &newinfo)     
{   
	if(s=="number") 
		number=newinfo; 
   	else if(s=="ISBN") 
		ISBN=newinfo;
	else if(s=="name") 
		name=newinfo;  
    else if(s=="authur")   
        authur=newinfo;   
    else if(s=="establishinfo")   
        establishinfo=newinfo;    
    else if(s=="statement")   
        statement=newinfo; 
	else if(s=="keeper") 
		keeper=newinfo;
    else if(s=="saveplace")    
    	saveplace=newinfo;   
    else	
        cout<<"error!"<<endl;         
}
string Book::Get(string &p){
	 if(p=="name") 
		return name;
	else if(p=="number") 
		return number; 
   	else if(p=="ISBN") 
	 	return ISBN;
    else if(p=="authur")   
        return authur;   
    else if(p=="establishinfo")   
        return  establishinfo;   
    else if(p=="statement")   
        return statement; 
	else if(p=="keeper") 
		return keeper;
    else if(p=="saveplace")    
        return saveplace ; 
} 
/*int main()
{
	string name="hello";
	string number="01";
	string NSBN="h01";
	string authur="lily";
	string establishinfo="2001";
	string statement="in";
	string keeper="tim";
	string saveplace="b01";
	Book book(name,number,NSBN,authur,establishinfo,statement,keeper,saveplace);
	string all="all";
	book.Showinfo(all) ;
	return 0;
}*/
