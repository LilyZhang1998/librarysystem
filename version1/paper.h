#ifndef PAPER_H
#define PAPER_H
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Paper{
    public:
        Paper(char *Title ,char *Number,char *Writer,
         char *Magzine,char *PublishTime,char *Routine,
         char *Type,char *Elseinfo);
        Paper(Paper &b);
        void Showinfo(char *p);
        void Changeinfo(char *p ,char *newinfo);
        void Showtext();
        char *Get(char *p);
        ~Paper(){}
    private:
        char title[20];
        char number[20];
        char writer[20];
        char magzine[20];
        char publishTime[20];
        char routine[70];
        char type[20];
        char elseinfo[20];
};

#endif // PAPER_H
