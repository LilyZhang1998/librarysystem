#include "Manage01.h"
int main()
{
	string _routine="C:\\Users\\Lily��\\Desktop\\������ҵ\\LibrarySystem";
	string _name="frog";
	Manage manage(_routine);
	manage.Start();	
	manage.FindBook(_name);
 	///////////////////////////////�����¶���book1,�����ַ��ŵ�ָ������book�У�����������Ϣ��¼���ļ��� 
 	_name="say  hello!";
	string _number="0001",_ISBN="G0101",_authur="Tim",_establishinfo="China 2003-01-11",_statement="out",_keeper="Annie",_saveplace="B1";
	Book book1(_name, _number, _ISBN, _authur, _establishinfo, _statement, _keeper, _saveplace);
	manage.Record(book1); 
	return 0 ;
}
