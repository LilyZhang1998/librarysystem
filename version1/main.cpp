#include <iostream>
#include <book.h>
#include <ebook.h>
#include <paper.h>
#include <user.h>

using namespace std;
int Booknumber=2;
int Ebooknumber=2;
int Papernumber=2;
int Usernumber=2;
Book *book[10];
Ebook *ebook[10];
Paper *paper[10];
User *user[10];
void Start(){
    for(int i=0;i<Booknumber;i++){
        book[i]=new Book("0","0","0","0","0","0","0","0");
        FILE *fp;
        char filename[70];
        sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\program\\LibrarySystem\\book\\book0",i+1,".txt");
        if((fp=fopen(filename,"r"))==NULL){
            cout<<"Cannot open the file!"<<endl;
            exit(0)	;
        }
        fgets(book[i]->Get("name"),20,fp);
        fgets(book[i]->Get("number"),20,fp);
        fgets(book[i]->Get("ISBN"),20,fp);
        fgets(book[i]->Get("authur"),20,fp);
        fgets(book[i]->Get("establishinfo"),20,fp);
        fgets(book[i]->Get("statement"),20,fp);
        fgets(book[i]->Get("keeper"),20,fp);
        fgets(book[i]->Get("saveplace"),20,fp);
        fclose(fp);
    }
    for(int i=0;i<Ebooknumber;i++){
        ebook[i]=new Ebook("0","0","0","0","0","0");
        FILE *fp;
        char filename[70];
        sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\program\\LibrarySystem\\ebook\\list\\ebook0",i+1,".txt");
        if((fp=fopen(filename,"r"))==NULL){
            cout<<"Cannot open the file!"<<endl;
            exit(0)	;
        }
        fgets(ebook[i]->Get("name"),20,fp);
        fgets(ebook[i]->Get("number"),20,fp);
        fgets(ebook[i]->Get("ISBN"),20,fp);
        fgets(ebook[i]->Get("authur"),20,fp);
        fgets(ebook[i]->Get("establishinfo"),20,fp);
        fgets(ebook[i]->Get("routine"),70,fp);
        fclose(fp);
    }
    for(int i=0;i<Papernumber;i++){
        paper[i]=new Paper("0","0","0","0","0","0","0","0");
        FILE *fp;
        char filename[70];
        sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\program\\LibrarySystem\\paper\\list\\paper0",i+1,".txt");
        if((fp=fopen(filename,"r"))==NULL){
            cout<<"Cannot open the file!"<<endl;
            exit(0)	;
        }
        fgets(paper[i]->Get("title"),20,fp);
        fgets(paper[i]->Get("number"),20,fp);
        fgets(paper[i]->Get("writer"),20,fp);
        fgets(paper[i]->Get("magzine"),20,fp);
        fgets(paper[i]->Get("publishTime"),20,fp);
        fgets(paper[i]->Get("routine"),70,fp);
        fgets(paper[i]->Get("type"),20,fp);
        fgets(paper[i]->Get("elseinfo"),20,fp);
        fclose(fp);
    }
    for(int i=0;i<Usernumber;i++){
        user[i]=new User("0","0","0","0","0");
        FILE *fp;
        char filename[70];
        sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\program\\LibrarySystem\\user\\user0",i+1,".txt");
        if((fp=fopen(filename,"r"))==NULL){
            cout<<"Cannot open the file!"<<endl;
            exit(0)	;
        }
        fgets(user[i]->Get("name"),20,fp);
        fgets(user[i]->Get("account"),20,fp);
        fgets(user[i]->Get("code"),20,fp);
        fgets(user[i]->Get("role"),20,fp);
        fgets(user[i]->Get("right"),20,fp);
        fclose(fp);
    }
}


void RecordBook(Book book1)
{

    FILE *fp;
    char filename[70];
    sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\program\\LibrarySystem\\book\\book0",Booknumber,".txt");
    if((fp=fopen(filename,"w"))==NULL){
        cout<<"Cannot open the file!"<<endl;
        exit(0)	;
    }
    fputs(book1.Get("name"),fp);fputs("\n",fp);
    fputs(book1.Get("number"),fp);fputs("\n",fp);
    fputs(book1.Get("ISBN"),fp);fputs("\n",fp);
    fputs(book1.Get("authur"),fp);fputs("\n",fp);
    fputs(book1.Get("establishinfo"),fp);fputs("\n",fp);
    fputs(book1.Get("statement"),fp);fputs("\n",fp);
    fputs(book1.Get("keeper"),fp);fputs("\n",fp);
    fputs(book1.Get("saveplace"),fp);fputs("\n",fp);
    cout<<"OK"<<endl;
    fclose(fp);
}

void RecordEbook(Ebook book1)
{
    FILE *fp;
    char filename[70];
    sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\program\\LibrarySystem\\ebook\\list\\ebook0",Ebooknumber,".txt");
    if((fp=fopen(filename,"w"))==NULL){
        cout<<"Cannot open the file!"<<endl;
        exit(0)	;
    }
    fputs(book1.Get("name"),fp);fputs("\n",fp);		fputs(book1.Get("number"),fp);fputs("\n",fp);
    fputs(book1.Get("ISBN"),fp);fputs("\n",fp);
    fputs(book1.Get("authur"),fp);fputs("\n",fp);
    fputs(book1.Get("establishinfo"),fp);fputs("\n",fp);
    fputs(book1.Get("routine"),fp);fputs("\n",fp);
    cout<<"ok"<<endl;
    fclose(fp);
}
void RecordPaper(Paper book1)
{

    FILE *fp;
    char filename[70];
    sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\program\\LibrarySystem\\paper\\list\\paper0",Papernumber,".txt");
    if((fp=fopen(filename,"w"))==NULL){
        cout<<"Cannot open the file!"<<endl;
        exit(0)	;
    }
    fputs(book1.Get("title"),fp);fputs("\n",fp);
    fputs(book1.Get("number"),fp);fputs("\n",fp);
    fputs(book1.Get("writer"),fp);fputs("\n",fp);
    fputs(book1.Get("magzine"),fp);fputs("\n",fp);
    fputs(book1.Get("publishTime"),fp);fputs("\n",fp);
    fputs(book1.Get("routine"),fp);fputs("\n",fp);
    fputs(book1.Get("type"),fp);fputs("\n",fp);
    fputs(book1.Get("elseinfo"),fp);fputs("\n",fp);
    cout<<"OK"<<endl;
    fclose(fp);
}
////////////////////////////////////user
void RecordUser(User book1)
{

    FILE *fp;
    char filename[70];
    sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\program\\LibrarySystem\\user\\user0",Usernumber,".txt");
    if((fp=fopen(filename,"w"))==NULL){
        cout<<"Cannot open the file!"<<endl;
        exit(0)	;
    }
    fputs(book1.Get("name"),fp);fputs("\n",fp);
    fputs(book1.Get("account"),fp);fputs("\n",fp);
    fputs(book1.Get("code"),fp);fputs("\n",fp);
    fputs(book1.Get("role"),fp);fputs("\n",fp);
    fputs(book1.Get("right"),fp);fputs("\n",fp);
    cout<<"OK"<<endl;
    fclose(fp);
}

int main(int argc, char *argv[])
{
    Start();
    book[0]->Showinfo("all");
    ebook[0]->Showinfo("all");
    paper[0]->Showinfo("all");
    user[0]->Showinfo("all");

    Book book1("say hello!","0001","G0101","Tim","China 2013-01-11","out","Annie","B1");
    book[Booknumber]=&book1;
    Booknumber++;
    RecordBook(book1);

    Ebook ebook1("say hello!","0001","G0101","Tim","China 2013-01-11",
    "C:\\Users\\LilyZhang\\Desktop\\program\\LibrarySystem\\ebook\\text\\ebook02.txt");
    ebook[Ebooknumber]=&ebook1;
    Ebooknumber++;
    RecordEbook(ebook1);

    Paper paper1("say hello!","0001","Tim","TIME",
    "2017-01-01","C:\\Users\\LilyZhang\\Desktop\\program\\LibrarySystem\\paper\\text\\paper01",
    "Published","original");
    paper[Papernumber]=&paper1;
    Papernumber++;
    RecordPaper(paper1);

    User user1("Annie","201703","133442","user","VIP");
    user[Usernumber]=&user1;
    Usernumber++;
    RecordUser(user1);

    ebook1.Readonline();
    ebook1.Download("C:\\Users\\LilyZhang\\Desktop\\program\\LibrarySystem\\ebook\\text\\ebook02");
    ebook1.Changeinfo("authur","Li");
    ebook1.Showinfo("authur");
    ebook1.Changeinfo("establishinfo","America publishment 2017-02-01");
    ebook1.Showinfo("establishinfo");
    ebook1.Changeinfo("statement","in");
    ebook1.Showinfo("statement");
    ebook1.Changeinfo("routine","A3");
    ebook1.Showinfo("routine");
    return 0;
}
