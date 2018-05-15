#include "ebook.h"

Ebook::Ebook(char *Name,char *Number,char *ISBN1,  char *Authur,char *Establishinfo,
            char *Routine){
    strcpy(number,Number);
    strcpy(ISBN,ISBN1);
    strcpy(name,Name);
    strcpy(authur,Authur);
    strcpy(establishinfo,Establishinfo);
    strcpy(routine,Routine);
}
Ebook::Ebook(Ebook &b){
    strcpy(number,b.number);
    strcpy(ISBN,b.ISBN);
    strcpy(name,b.name);
    strcpy(authur,b.authur);
    strcpy(establishinfo,b.establishinfo);
    strcpy(routine,b.routine);
}
void Ebook::Showinfo(char *p){
    if(strcmp("number",p)==0)
        cout<<number;
    else if(strcmp("ISBN",p)==0)
        cout<<ISBN;
    else if(strcmp("name",p)==0)
        cout<<name;
    else if(strcmp("authur",p)==0)
        cout<<authur;
    else if(strcmp("establishinfo",p)==0)
        cout<<establishinfo;
    else if(strcmp("routine",p)==0)
        cout<<routine;
    else if(strcmp("all",p)==0){
        cout<<name;
        cout<<ISBN;
        cout<<authur;
        cout<<establishinfo;
        cout<<routine<<endl;
    }
    else
        cout<<"No related infomation!"<<endl;
}
void Ebook::Changeinfo(char *p,char *newinfo)
{
    if(strcmp("number",p)==0)
        strcpy(number,p);
    else if(strcmp("ISBN",p)==0)
        strcpy(ISBN,newinfo);
    else if(strcmp("name",p)==0)
        strcpy(name,newinfo);
    else if(strcmp("authur",p)==0)
        strcpy(authur,newinfo);
    else if(strcmp("establishinfo",p)==0)
        strcpy(establishinfo,newinfo);
    else if(strcmp("routine",p)==0)
        strcpy(routine,newinfo);
    else
        cout<<"error!"<<endl;
}
void Ebook::Readonline(){
    FILE *fp;
    if((fp=fopen(routine,"r"))==NULL){
        cout<<"Can't open the file!"<<endl;
        exit(0);
    }
    while(!feof(fp))
        putchar(getc(fp));
    fclose(fp);
    return;
}
void Ebook::Download(char *p){
    FILE *fp1,*fp2;
    char ch;
    if((fp1=fopen(routine,"r"))==NULL){
        cout<<"Can't open the file!"<<endl;
        exit(0);
    }
    if((fp2=fopen(p,"w"))==NULL){
        cout<<"Can't open the file!"<<endl;
        exit(0);
    }
    while(!feof(fp1))
    {
        ch=fgetc(fp1);
        fputc(ch,fp2);
    }
    cout<<"Doenload Successfully!"<<endl;
    fclose(fp1),fclose(fp2);
    return;
}
char *Ebook::Get(char *p){
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
    else if(strcmp("routine",p)==0)
        return routine;
}
