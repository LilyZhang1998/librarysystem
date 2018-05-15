#include "book.h"

Book::Book(char *Name,char *Number,char *ISBN1,  char *Authur,char *Establishinfo,
            char *Statememt,char *Keeper ,char *Saveplace){
    strcpy(name,Name);
    strcpy(number,Number);
    strcpy(ISBN,ISBN1);
    strcpy(authur,Authur);
    strcpy(establishinfo,Establishinfo);
    strcpy(statement,Statememt);
    strcpy(keeper,Keeper);
    strcpy(saveplace,Saveplace);
}
Book::Book(Book &b){
    strcpy(number,b.number);
    strcpy(ISBN,b.ISBN);
    strcpy(name,b.name);
    strcpy(authur,b.authur);
    strcpy(establishinfo,b.establishinfo);
    strcpy(statement,b.statement);
    strcpy(keeper,b.keeper);
    strcpy(saveplace,b.saveplace);
}
void Book::Showinfo(char *p){
    if(strcmp("name",p)==0)
        cout<<name;
    else if(strcmp("number",p)==0)
        cout<<number;
    else if(strcmp("ISBN",p)==0)
        cout<<ISBN;
    else if(strcmp("authur",p)==0)
        cout<<authur;
    else if(strcmp("establishinfo",p)==0)
        cout<<establishinfo;
    else if(strcmp("statement",p)==0)
        cout<<statement;
    else if(strcmp("keeper",p)==0)
        cout<<keeper;
    else if(strcmp("saveplace",p)==0)
        cout<<saveplace;
    else if(strcmp("all",p)==0){
        cout<<ISBN;
        cout<<name;
        cout<<authur;
        cout<<establishinfo;
        cout<<statement;
        cout<<saveplace;
    }
    else
        cout<<"No related infomation!"<<endl;
}
void Book::Changeinfo(char *p,char *newinfo)
{
    if(strcmp("number",p)==0)
        strcpy(number,newinfo);
    else if(strcmp("ISBN",p)==0)
        strcpy(ISBN,newinfo);
    else if(strcmp("name",p)==0)
        strcpy(name,newinfo);
    else if(strcmp("authur",p)==0)
        strcpy(authur,newinfo);
    else if(strcmp("establishinfo",p)==0)
        strcpy(establishinfo,newinfo);
    else if(strcmp("statement",p)==0)
        strcpy(statement,newinfo);
    else if(strcmp("keeper",p)==0)
        strcpy(keeper,newinfo);
    else if(strcmp("saveplace",p)==0)
        strcpy(saveplace,newinfo);
    else
        cout<<"error!"<<endl;
}
char *Book::Get(char *p){
     if(strcmp("name",p)==0)
        return name;
    else if(strcmp("number",p)==0)
        return number;
    else if(strcmp("ISBN",p)==0)
        return ISBN;
    else if(strcmp("authur",p)==0)
        return authur;
    else if(strcmp("establishinfo",p)==0)
        return  establishinfo;
    else if(strcmp("statement",p)==0)
        return statement;
    else if(strcmp("keeper",p)==0)
        return keeper;
    else if(strcmp("saveplace",p)==0)
        return saveplace ;
}
