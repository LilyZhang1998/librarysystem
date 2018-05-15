#include "Manage01.h" 
Manage::Manage(string &routine,int booknumber,int ebooknumber,int papernumber,int usernumber){
	Booknumber=booknumber;
	Ebooknumber=ebooknumber;
	Papernumber=papernumber;
	Usernumber=usernumber;
	Routine=routine;
/*	book=(Book *)calloc(Booknumber,sizeof(Book));
	ebook=calloc(Ebooknumber,sizeof(Ebook));
	paper(Papernumbe,sizeof(Paper));
	user=(Usernumber,sizeof(User));*/
}
Manage::Manage(Manage &m){
	Booknumber=m.Booknumber;
	Ebooknumber=m.Ebooknumber;
	Papernumber=m.Papernumber;
	Usernumber=m.Usernumber;
	Routine=m.Routine;
/*	book=calloc(Booknumber,sizeof(Book));
	ebook=calloc(Ebooknumber,sizeof(Ebook));
	paper(Papernumbe,sizeof(Paper));
	user=(Usernumber,sizeof(User));*/
}
void Manage::Start(){
	string name="name",number="number",ISBN="ISBN",authur="authur",establishinfo="establishinfo";
	string statement="statement",keeper="keeper",saveplace="saveplace",routine="routine",title="title";
	string writer="writer",account="account", code="code", role="role", _right="right";
	string magzine="magazine", publishTime="publishTime" ,type="type", elseinfo="elseinfo",all="all";
	for(int i=0;i<Booknumber;i++){
		char *filename;
		string str;
		str=Routine+"\\book\\book";
		sprintf(filename,"%s%d%s",str.c_str(),i+1,".txt");
		ifstream fin(filename);
		if(fin.bad()){
			cout<<"Cannot open the file!"<<endl;
			exit(0)	;
		}
		getline(fin,name);
		getline(fin,number);
		getline(fin,ISBN);
		getline(fin,authur);
		getline(fin,establishinfo);
		getline(fin,statement);
		getline(fin,keeper);
		getline(fin,saveplace);
		book[i]=new Book(name,number,ISBN,authur,establishinfo,statement,keeper,saveplace);
		fin.close();
	}
	for(int i=0;i<Ebooknumber;i++){
		char *filename;
		string str;
		str=Routine+"\\ebook\\list\\ebook";
		sprintf(filename,"%s%d%s",str.c_str(),i+1,".txt");
		ifstream fin(filename);
		if(fin.bad()){
			cout<<"Cannot open the file!"<<endl;
			exit(0)	;
		}
		getline(fin,name);
		getline(fin,number);
		getline(fin,ISBN);
		getline(fin,authur);
		getline(fin,establishinfo);
		getline(fin,routine);
		ebook[i]=new Ebook(name,number,ISBN,authur,establishinfo,routine);
		fin.close();
	}
	for(int i=0;i<Papernumber;i++){
	    char *filename;
		string str;
		str=Routine+"\\paper\\list\\paper";
		sprintf(filename,"%s%d%s",str.c_str(),i+1,".txt");
		ifstream fin(filename);
		if(fin.bad()){
			cout<<"Cannot open the file!"<<endl;
			exit(0)	;
		}
		getline(fin,title);
		getline(fin,number);
		getline(fin,writer);
		getline(fin,magzine);
		getline(fin,publishTime);
		getline(fin,routine);
		getline(fin,type);
		getline(fin,elseinfo);
		paper[i]=new Paper(title,number,writer,magzine,publishTime,routine,type,elseinfo);
		fin.close();
	}
	for(int i=0;i<Usernumber;i++){
		char *filename;
		string str;
		str=Routine+"\\user\\user";
		sprintf(filename,"%s%d%s",str.c_str(),i+1,".txt");
		ifstream fin(filename);
		if(fin.bad()){
			cout<<"Cannot open the file!"<<endl;
			exit(0)	;
		}
		getline(fin,name);
		getline(fin,account);
		getline(fin,code);
		getline(fin,role);
		getline(fin,_right);
		user[i]=new User(name,account,code,role,_right);
		fin.close();
	}	
}

void Manage::Record(Book &book1) 
{
	string name="name",number="number",ISBN="ISBN",authur="authur",establishinfo="establishinfo";
	string statement="statement",keeper="keeper",saveplace="saveplace";
 	char *filename;
	sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\程设作业\\LibrarySystem\\book\\book",++Booknumber,".txt");
	ofstream fout(filename);
	if(fout.bad()){
		cout<<"Cannot open the file!"<<endl;
		exit(0)	;
	}
	fout<<book1.Get(name)<<endl;
	fout<<book1.Get(number)<<endl;
	fout<<book1.Get(ISBN)<<endl;
	fout<<book1.Get(authur)<<endl;
	fout<<book1.Get(establishinfo)<<endl;
	fout<<book1.Get(statement)<<endl;
	fout<<book1.Get(keeper)<<endl;
	fout<<book1.Get(saveplace)<<endl;	
	cout<<"OK"<<endl;
	fout.close();
}
////////////////////////////////////Ebook类信息录入 
void Manage::Record(Ebook &book1) 
{
	string name="name",number="number",ISBN="ISBN",authur="authur",establishinfo="establishinfo",routine="routine";
	char *filename;
	sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\程设作业\\LibrarySystem\\ebook\\list\\ebook",++Ebooknumber,".txt");
	ofstream fout(filename);
	if(fout.bad()){
		cout<<"Cannot open the file!"<<endl;
		exit(0)	;
	}
	fout<<book1.Get(number)<<endl;
	fout<<book1.Get(name)<<endl;	
	fout<<book1.Get(ISBN)<<endl;
	fout<<book1.Get(authur)<<endl;
	fout<<book1.Get(establishinfo)<<endl;
	fout<<book1.Get(routine)<<endl;	
	cout<<"OK"<<endl;
	fout.close();
}
/////////////////////////////////////////////////////paper类对象录入	
void Manage::Record(Paper &book1) 
{
	string number="number",routine="routine",title="title",writer="writer";
	string magzine="magazine", publishTime="publishTime" ,type="type", elseinfo="elseinfo";
	char *filename;
	sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\程设作业\\LibrarySystem\\paper\\list\\paper",++Papernumber,".txt");
	ofstream fout(filename);
	if(fout.bad()){
		cout<<"Cannot open the file!"<<endl;
		exit(0)	;
	}
	fout<<book1.Get(title)<<endl;
	fout<<book1.Get(number)<<endl;
	fout<<book1.Get(writer)<<endl;
	fout<<book1.Get(magzine)<<endl;
	fout<<book1.Get(publishTime)<<endl;
	fout<<book1.Get(routine)<<endl;
	fout<<book1.Get(type)<<endl;
	fout<<book1.Get(elseinfo)<<endl;	
	cout<<"OK"<<endl;
	fout.close();
}   
////////////////////////////////////user类信息记录
Manage::Manage(string &routine,int booknumber=2,int ebooknumber=2,int papernumber=2,int usernumber=2){
	Booknumber=booknumber;
	Ebooknumber=ebooknumber;
	Papernumber=papernumber;
	Usernumber=usernumber;
	Routine=routine;
	book=new Book[Booknumber];
	ebook=new Ebook[Ebooknumber];
	paper=new Paper[Papernumbe];
	user=new User[Usernumber];
}
Manage::Manage(Manage &m){
	Booknumber=m.Booknumber;
	Ebooknumber=m.Ebooknumber;
	Papernumber=m.Papernumber;
	Usernumber=m.Usernumber;
	Routine=m.Routine;
	book=new Book[Booknumber];
	ebook=new Ebook[Ebooknumber];
	paper=new Paper[Papernumbe];
	user=new User[Usernumber];
}
void Manage::Start(){
	string name="name",number="number",ISBN="ISBN",authur="authur",establishinfo="establishinfo";
	string statement="statement",keeper="keeper",saveplace="saveplace",routine="routine",title="title";
	string writer="writer",account="account", code="code", role="role", _right="right";
	string magzine="magazine", publishTime="publishTime" ,type="type", elseinfo="elseinfo",all="all";
	for(int i=0;i<Booknumber;i++){
		char *filename;
		string str;
		str=Routine+"\\book\\book";
		sprintf(filename,"%s%d%s",str.c_str(),i+1,".txt");
		ifstream fin(filename);
		if(fin.bad()){
			cout<<"Cannot open the file!"<<endl;
			exit(0)	;
		}
		getline(fin,name);
		getline(fin,number);
		getline(fin,ISBN);
		getline(fin,authur);
		getline(fin,establishinfo);
		getline(fin,statement);
		getline(fin,keeper);
		getline(fin,saveplace);
		Book _book(name,number,ISBN,authur,establishinfo,statement,keeper,saveplace);
		book[i]=&_book;
		fin.close();
	}
	for(int i=0;i<Ebooknumber;i++){
		char *filename;
		string str;
		str=Routine+"\\ebook\\list\\ebook";
		sprintf(filename,"%s%d%s",str.c_str(),i+1,".txt");
		ifstream fin(filename);
		if(fin.bad()){
			cout<<"Cannot open the file!"<<endl;
			exit(0)	;
		}
		getline(fin,name);
		getline(fin,number);
		getline(fin,ISBN);
		getline(fin,authur);
		getline(fin,establishinfo);
		getline(fin,routine);
		Ebook _ebook(name,number,ISBN,authur,establishinfo,routine);
		ebook[i]=&_ebook; 
		fin.close();
	}
	for(int i=0;i<Papernumber;i++){
	    char *filename;
		string str;
		str=Routine+"\\paper\\list\\paper";
		sprintf(filename,"%s%d%s",str.c_str(),i+1,".txt");
		ifstream fin(filename);
		if(fin.bad()){
			cout<<"Cannot open the file!"<<endl;
			exit(0)	;
		}
		getline(fin,title);
		getline(fin,number);
		getline(fin,writer);
		getline(fin,magzine);
		getline(fin,publishTime);
		getline(fin,routine);
		getline(fin,type);
		getline(fin,elseinfo);
		Paper _paper(title,number,writer,magzine,publishTime,routine,type,elseinfo);
		paper[i]=&_paper
		fin.close();
	}
	for(int i=0;i<Usernumber;i++){
		char *filename;
		string str;
		str=Routine+"\\user\\user";
		sprintf(filename,"%s%d%s",str.c_str(),i+1,".txt");
		ifstream fin(filename);
		if(fin.bad()){
			cout<<"Cannot open the file!"<<endl;
			exit(0)	;
		}
		getline(fin,name);
		getline(fin,account);
		getline(fin,code);
		getline(fin,role);
		getline(fin,_right);
		User _user(name,account,code,role,_right);
		user[i]=_user;
		fin.close();
	}	
}

void Manage::Record(Book &book1) 
{
	string name="name",number="number",ISBN="ISBN",authur="authur",establishinfo="establishinfo";
	string statement="statement",keeper="keeper",saveplace="saveplace";
 	char *filename;
	sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\程设作业\\LibrarySystem\\book\\book",++Booknumber,".txt");
	ofstream fout(filename);
	if(fout.bad()){
		cout<<"Cannot open the file!"<<endl;
		exit(0)	;
	}
	fout<<book1.Get(name)<<endl;
	fout<<book1.Get(number)<<endl;
	fout<<book1.Get(ISBN)<<endl;
	fout<<book1.Get(authur)<<endl;
	fout<<book1.Get(establishinfo)<<endl;
	fout<<book1.Get(statement)<<endl;
	fout<<book1.Get(keeper)<<endl;
	fout<<book1.Get(saveplace)<<endl;	
	cout<<"OK"<<endl;
	fout.close();
}
////////////////////////////////////Ebook类信息录入 
void Manage::Record(Ebook &book1) 
{
	string name="name",number="number",ISBN="ISBN",authur="authur",establishinfo="establishinfo",routine="routine";
	char *filename;
	sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\程设作业\\LibrarySystem\\ebook\\list\\ebook",++Ebooknumber,".txt");
	ofstream fout(filename);
	if(fout.bad()){
		cout<<"Cannot open the file!"<<endl;
		exit(0)	;
	}
	fout<<book1.Get(number)<<endl;
	fout<<book1.Get(name)<<endl;	
	fout<<book1.Get(ISBN)<<endl;
	fout<<book1.Get(authur)<<endl;
	fout<<book1.Get(establishinfo)<<endl;
	fout<<book1.Get(routine)<<endl;	
	cout<<"OK"<<endl;
	fout.close();
}
/////////////////////////////////////////////////////paper类对象录入	
void Manage::Record(Paper &book1) 
{
	string number="number",routine="routine",title="title",writer="writer";
	string magzine="magazine", publishTime="publishTime" ,type="type", elseinfo="elseinfo";
	char *filename;
	sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\程设作业\\LibrarySystem\\paper\\list\\paper",++Papernumber,".txt");
	ofstream fout(filename);
	if(fout.bad()){
		cout<<"Cannot open the file!"<<endl;
		exit(0)	;
	}
	fout<<book1.Get(title)<<endl;
	fout<<book1.Get(number)<<endl;
	fout<<book1.Get(writer)<<endl;
	fout<<book1.Get(magzine)<<endl;
	fout<<book1.Get(publishTime)<<endl;
	fout<<book1.Get(routine)<<endl;
	fout<<book1.Get(type)<<endl;
	fout<<book1.Get(elseinfo)<<endl;	
	cout<<"OK"<<endl;
	fout.close();
}   
////////////////////////////////////user类信息记录
void Manage::Record(User &book1)
{
	string name="name",account="account", code="code", role="role", _right="right";
 	char *filename;
	sprintf(filename,"%s%d%s","C:\\Users\\LilyZhang\\Desktop\\程设作业\\LibrarySystem\\user\\user",++Usernumber,".txt");
	ofstream fout(filename);
	if(fout.bad()){
		cout<<"Cannot open the file!"<<endl;
		exit(0)	;
	}
	fout<<book1.Get(name)<<endl;
	fout<<book1.Get(account)<<endl;
	fout<<book1.Get(code)<<endl;
	fout<<book1.Get(role)<<endl;
	fout<<book1.Get(_right)<<endl;	
	cout<<"OK"<<endl;
	fout.close();
}
void Manage::FindBook(string &bookname){
	string name="name",all="all";
	int i=0;
	for(;i<Booknumber;i++)
	{
		if(bookname==book[i]->Get(name)){
			
			book[i]->Showinfo(all);
			break;
		}
			
	}
	if(i==Booknumber)
		cout<<"Can't find related infomation"<<endl;
}
void Manage::FindEbook(string &bookname){
	string name="name",all="all";
	int i=0;
	for(;i<Ebooknumber;i++)
	{
		if(bookname==ebook[i]->Get(name)){
			
			ebook[i]->Showinfo(all);
			break;
		}
			
	}
	if(i==Ebooknumber)
		cout<<"Can't find related infomation"<<endl;
}
void Manage::FindPaper(string &bookname){
	string title="title",all="all";
	int i=0;
	for(;i<Papernumber;i++)
	{
		if(bookname==paper[i]->Get(title)){
			paper[i]->Showinfo(all);
			break;
		}
			
	}
	if(i==Papernumber)
		cout<<"Can't find related infomation"<<endl;
}
void Manage::FindUser(string &bookname){
	string name="name",all="all";
	int i=0;
	for(;i<Usernumber;i++)
	{
		if(bookname==user[i]->Get(name)){
			
			book[i]->Showinfo(all);
			break;
		}
			
	}
	if(i==Usernumber)
		cout<<"Can't find related infomation"<<endl;
}

