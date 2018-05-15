#include"Paper01.h"
Paper::Paper(string &Title ,string &Number,string &Writer,
		 string &Magzine,string &PublishTime,string &Routine,
		 string &Type,string &Elseinfo){
	number=Number;
	title=Title;
	writer=Writer;   
    magzine=Magzine;
    publishTime=PublishTime;   
    routine=Routine;
	type=Type;  
    elseinfo=Elseinfo;   
}    
Paper::Paper(Paper &b){
	number=b.number;  
	title=b.title; 
	writer=b.writer;
    magzine=b.magzine;   
    publishTime=b.publishTime;   
    routine=b.routine;
	type=b.type;   
    elseinfo=b.elseinfo;   
}   
void Paper::Showinfo(string &p){
	if(p=="number")
		cout<<number;
	else if(p=="title") 
		cout<<title;
	else if(p=="writer") 
		cout<<writer;  
    else if(p=="magzine")   
        cout<<magzine;   
    else if(p=="publishTime")   
        cout<<publishTime;    
    else if(p=="routine")   
        cout<<routine; 
	else if(p=="type") 
		cout<<type;
    else if(p=="elseinfo")    
        cout<<elseinfo;   
    else if(p=="all"){
    	cout<<title<<endl;
    	cout<<number<<endl;
    	cout<<writer<<endl;
    	cout<<magzine<<endl;
    	cout<<publishTime<<endl;
    	cout<<routine<<endl;
    	cout<<type<<endl;
    	cout<<elseinfo;
	}
    else	
        cout<<"No related infomation!"<<endl;   
} 
void Paper::Changeinfo(string &p,string &newinfo)     
{   
	if(p=="number") 
		number=newinfo; 
   	else if(p=="title") 
		title=newinfo;
	else if(p=="writer") 
		writer=newinfo;  
    else if(p=="magzine")   
        magzine=newinfo;   
    else if(p=="publishTime")   
        publishTime=newinfo;    
    else if(p=="routine")   
        routine=newinfo; 
	else if(p=="type") 
		type=newinfo;
    else if(p=="elseinfo")    
        elseinfo=newinfo;   
    else	
        cout<<"error!"<<endl;         
}  
void Paper::Showtext(){
	ifstream fin(routine.c_str());
	string str;
	if(fin.good()&&!fin.eof()){
		do{
			getline(fin,str);
			cout<<str<<endl;
		}while(!fin.eof());
		fin.close();
	}
	else{
		cout<<"Can't open file! "<<endl;
		exit(0);
	}
}
string Paper::Get(string &p){
	if(p=="title") 
		return title;
	else if(p=="number") 
		return number; 
    else if(p=="writer")   
        return writer;   
    else if(p=="magzine")   
        return  magzine;   
    else if(p=="publishTime")
    	return publishTime;
	else if(p=="routine")   
        return routine;
    else if(p=="type")
    	return type;
    else if(p=="elseinfo")
    	return elseinfo;
} 
/*int main()
{
	string title="say hello!";
	string number="0001";
	string writer="Tim";
	string magzine="TIME";
	string publishTime="2017-01-01";
	string routine="C:\\Users\\Lily张\\Desktop\\程设作业\\test1.txt";
	string type="Published";
	string elseinfo="original";
	Paper paper(title,number,writer,magzine,publishTime,routine,type,elseinfo);
	string all="all";
	paper.Showinfo(all);
	paper.Showtext();
	title="lalala";
	string Title="title";
	paper.Changeinfo(Title,title);
	cout<<paper.Get(Title);
	return 0;
}*/
     

