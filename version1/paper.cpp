#include "paper.h"

Paper::Paper(char *Title ,char *Number,char *Writer,
         char *Magzine,char *PublishTime,char *Routine,
         char *Type,char *Elseinfo){
    strcpy(number,Number);
    strcpy(title,Title);
    strcpy(writer,Writer);
    strcpy(magzine,Magzine);
    strcpy(publishTime,PublishTime);
    strcpy(routine,Routine);
    strcpy(type,Type);
    strcpy(elseinfo,Elseinfo);
}
Paper::Paper(Paper &b){
    strcpy(number,b.number);
    strcpy(title,b.title);
    strcpy(writer,b.writer);
    strcpy(magzine,b.magzine);
    strcpy(publishTime,b.publishTime);
    strcpy(routine,b.routine);
    strcpy(type,b.type);
    strcpy(elseinfo,b.elseinfo);
}
void Paper::Showinfo(char *p){
    if(strcmp("number",p)==0)
        cout<<number;
    else if(strcmp("title",p)==0)
        cout<<title;
    else if(strcmp("writer",p)==0)
        cout<<writer;
    else if(strcmp("magzine",p)==0)
        cout<<magzine;
    else if(strcmp("publishTime",p)==0)
        cout<<publishTime;
    else if(strcmp("routine",p)==0)
        cout<<routine;
    else if(strcmp("type",p)==0)
        cout<<type;
    else if(strcmp("elseinfo",p)==0)
        cout<<elseinfo;
    else if(strcmp("all",p)==0){
        cout<<title;
        cout<<number;
        cout<<writer;
        cout<<magzine;
        cout<<publishTime;
        cout<<routine;
        cout<<type;
        cout<<elseinfo;
    }
    else
        cout<<"No related infomation!"<<endl;
}
void Paper::Changeinfo(char *p,char *newinfo)
{
    if(strcmp("number",p)==0)
        strcpy(number,newinfo);
    else if(strcmp("title",p)==0)
        strcpy(title,newinfo);
    else if(strcmp("writer",p)==0)
        strcpy(writer,newinfo);
    else if(strcmp("magzine",p)==0)
        strcpy(magzine,newinfo);
    else if(strcmp("publishTime",p)==0)
        strcpy(publishTime,newinfo);
    else if(strcmp("routine",p)==0)
        strcpy(routine,newinfo);
    else if(strcmp("type",p)==0)
        strcpy(type,newinfo);
    else if(strcmp("elseinfo",p)==0)
        strcpy(elseinfo,newinfo);
    else
        cout<<"error!"<<endl;
}
void Paper::Showtext(){
    FILE *fp;
    if((fp=fopen("routine","r"))==NULL){
        cout<<"Can't open the file!"<<endl;
        exit(0);
    }
    while(!feof(fp))
        putchar(getc(fp));
    fclose(fp);
    return;
}
char *Paper::Get(char *p){
    if(strcmp("title",p)==0)
        return title;
    else if(strcmp("number",p)==0)
        return number;
    else if(strcmp("writer",p)==0)
        return writer;
    else if(strcmp("magzine",p)==0)
        return  magzine;
    else if(strcmp("publishTime",p)==0)
        return publishTime;
    else if(strcmp("routine",p)==0)
        return routine;
    else if(strcmp("type",p)==0)
        return type;
    else if(strcmp("elseinfo",p)==0)
        return elseinfo;
}
