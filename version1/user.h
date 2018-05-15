#ifndef USER_H
#define USER_H
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class User{
    public:
        User(char *Name,char *Account,char *Code,char *Role,char *Right);
        User(User &b);
        void Showinfo(char *p);
        char *Get(char *p);
    //	void Borrow(char *number);
    //	void Return(char *number);
        ~User(){}
    private:
        char name[10];
        char account[10];
        char code[10];
        char role[10];
        char right[10];
};

#endif // USER_H
