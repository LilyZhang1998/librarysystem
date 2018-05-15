#include "Manage01.h"
int main()
{
	string _routine="C:\\Users\\Lily张\\Desktop\\程设作业\\LibrarySystem";
	string _name="frog";
	Manage manage(_routine);
	manage.Start();	
	manage.FindBook(_name);
 	///////////////////////////////建立新对象book1,将其地址存放到指针数组book中，并将对象信息记录到文件中 
 	_name="say  hello!";
	string _number="0001",_ISBN="G0101",_authur="Tim",_establishinfo="China 2003-01-11",_statement="out",_keeper="Annie",_saveplace="B1";
	Book book1(_name, _number, _ISBN, _authur, _establishinfo, _statement, _keeper, _saveplace);
	manage.Record(book1); 
	return 0 ;
}
