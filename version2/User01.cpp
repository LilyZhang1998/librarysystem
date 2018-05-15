#include "User01.h"

User::User(string &Name,string &Account,string &Code,string &Role,string &Right){
	name=Name;
	account=Account;
	code=Code;
	role=Role;
	right=Right;
}
User::User(User &b){
	name=b.name;
	account=b.account;
	code=b.code;
	role=b.role;
	right=b.right;
}
string User::Get(string &p){
	if(p=="name") 
		return name;
	else if(p=="account") 
		return account; 
   	else if(p=="code") 
	 	return code;
    else if(p=="role")   
        return role;   
    else if(p=="right")   
        return  right;   
}
void User::Showinfo(string &p){
	if(p=="name") 
		cout<<name; 
	else if(p=="account")
		cout<<account;
	else if(p=="code") 
		cout<<code;
    else if(p=="role")   
        cout<<role;   
    else if(p=="right")   
        cout<<right;       
    else if(p=="all"){
    	cout<<name<<endl;
    	cout<<account<<endl;
    	cout<<code<<endl;
    	cout<<role<<endl;
    	cout<<right<<endl;
	}
    else	
        cout<<"No related infomation!"<<endl;   
}//ÔÝÊ±Î´ÊµÏÖ 
/*void Borrow(char *number){	
}
void Return(char *number){	
}*/
/*int main()
{
	return 0;
 } */
