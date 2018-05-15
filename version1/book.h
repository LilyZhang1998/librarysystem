#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;


class Book{
    public:
        Book(char *Name,char *Number,char *ISBN1 , char *Authur,char *Establishinfo,
            char *Statememt,char *Keeper ,char *Saveplace);
        Book(Book &b);
        void Showinfo(char *p);
        void Changeinfo(char *p ,char *newinfo);
        char *Get(char *p);
        ~Book(){}
    private:
        char name[20];
        char number[20];
        char ISBN[20];
        char authur[20];
        char establishinfo[20];
        char statement[20];
        char  keeper[20];
        char saveplace[20];
};

#endif // BOOK_H
