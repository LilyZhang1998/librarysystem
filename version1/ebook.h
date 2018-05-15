#ifndef EBOOK_H
#define EBOOK_H
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Ebook{
    public:
        Ebook(char *Name,char *Number,char *ISBN1 , char *Authur,char *Establishinfo,
            char *Routine);
        Ebook(Ebook &b);
        void Showinfo(char *p);
        void Changeinfo(char *p ,char *newinfo);
        void Readonline();
        void Download(char *p);
        char *Get(char *p);
        ~Ebook(){}
    private:
        char name[20];
        char number[20];
        char ISBN[20];
        char authur[20];
        char establishinfo[20];
        char routine[70];
};

#endif // EBOOK_H
