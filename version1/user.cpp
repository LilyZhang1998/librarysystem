#include "user.h"

User::User(char *Name,char *Account,char *Code,char *Role,char *Right){
    strcpy(name,Name);
    strcpy(account,Account);
    strcpy(code,Code);
    strcpy(role,Role);
    strcpy(right,Right);
}
User::User(User &b){
    strcpy(name,b.name);
    strcpy(account,b.account);
    strcpy(code,b.code);
    strcpy(role,b.role);
    strcpy(right,b.right);
}
char *User::Get(char *p){
    if(strcmp("name",p)==0)
        return name;
    else if(strcmp("account",p)==0)
        return account;
    else if(strcmp("code",p)==0)
        return code;
    else if(strcmp("role",p)==0)
        return role;
    else if(strcmp("right",p)==0)
        return  right;
}
void User::Showinfo(char *p){
    if(strcmp("name",p)==0)
        cout<<name;
    else if(strcmp("account",p)==0)
        cout<<account;
    else if(strcmp("code",p)==0)
        cout<<code;
    else if(strcmp("role",p)==0)
        cout<<role;
    else if(strcmp("right",p)==0)
        cout<<right;
    else if(strcmp("all",p)==0){
        cout<<name;
        cout<<account;
        cout<<code;
        cout<<role;
        cout<<right;
    }
    else
        cout<<"No related infomation!"<<endl;
}
/*void Borrow(char *number){
}
void Return(char *number){
}*/

