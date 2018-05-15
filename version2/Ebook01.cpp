#include "Ebook01.h"    
Ebook::Ebook(Ebook &b){
	number=b.number;  
	ISBN=b.ISBN; 
	name=b.name;
    authur=b.authur;   
    establishinfo=b.establishinfo;      
    routine=b.routine;   
}   
void Ebook::Showinfo(string &p){
 	if(p=="number")
 		cout<<number;
	else if(p=="ISBN") 
		cout<<ISBN;
	else if(p=="name") 
		cout<<name;  
    else if(p=="authur")   
        cout<<authur;   
    else if(p=="establishinfo")   
        cout<<establishinfo;    
    else if(p=="routine")    
        cout<<routine;   
    else if(p=="all"){
    	cout<<name<<endl;
    	cout<<ISBN<<endl;
    	cout<<authur<<endl;
    	cout<<establishinfo<<endl;
    	cout<<routine<<endl<<endl;
	}
    else	
        cout<<"No related infomation!"<<endl;   
}         
void Ebook::Changeinfo(string &p,string &newinfo)     
{    
 	if(p=="number")
		number=newinfo;
   	else if(p=="ISBN") 
		ISBN=newinfo;
	else if(p=="name") 
		name=newinfo;  
    else if(p=="authur")   
    	authur=newinfo;   
    else if(p=="establishinfo")   
        establishinfo=newinfo;    
    else if(p=="routine")    
        routine=newinfo;   
    else	
        cout<<"error!"<<endl;         
} 
void Ebook::Readonline(){
	ifstream fin(routine.c_str());
	string str;
	if(fin.good()&&!fin.eof()){
		do{
			getline(fin,str);
			cout<<str<<endl;
		}
		while(!fin.eof());
	}
	else{
		cout<<"Can't open the file!";
		exit(0);
	}
	fin.close();
}
	
void Ebook::Download(string &p){
	ifstream fin(routine.c_str());
	ofstream fout(p.c_str());
	string str;
	if(fin.bad()){
		cout<<"Can't open the file!"<<endl;
		exit(0);
	}
	if(fout.bad()){
		cout<<"Can't open the file!"<<endl;
		exit(0);
	}
	while(!fin.eof())
	{
		getline(fin,str);
		fout<<str<<endl;
	}
	cout<<"Download Successfully!"<<endl;
	fin.close(),fout.close();
	return;
} 
string Ebook::Get(string &p){
	if(p=="name") 
		return name;
	else if(p=="number") 
		return number; 
   	else if(p=="ISBN") 
	 	return ISBN;
    else if(p=="authur")   
        return authur;   
    else if(p=="establishinfo")   
        return  establishinfo;   
    else if(p=="routine")   
        return routine;
}
/*int main()
{
	string name="say hello!";
	string number="0001";
	string ISBN="G0101";
	string authur="Tim";
	string establishinfo="China 2013-01-11";
	string routine="C:\\Users\\LilyZhang\\Desktop\\程设作业\\test2.txt";
	Ebook ebook (name,number,ISBN,authur,establishinfo,routine);
	ebook.Readonline();
	string _routine="C:\\Users\\LilyZhang\\Desktop\\程设作业\\test1.txt";
	ebook.Download(_routine);
	return 0;
}*/
