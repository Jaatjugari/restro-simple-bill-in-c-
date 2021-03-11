#include<iostream>
#include<windows.h>
using namespace std;
int menu();
int k=0;

int main(){
	string name[100];
	string num[10];
	int x=0,y=0;	
	do{
		if(x==1){
			cout<<"\t\t_NAME : ";
			cin>>name[k];
			cout<<"\t\t_PHONE NO : ";
			cin>>num[k];
			system("cls");
			k++;
		}else if(x==2){ 
			for(int i=0;i<100;i++){
				if(name[i]!= "\0"){
				cout<<"\t\t NAME : "<<    name[i] <<"\n"<<"\t\t PHONE NO : "<<    num[i]<<endl;
			}}
		} else if(x==3){ string temp,newname,newnum;
		
		cout<<"eneter the name who's number you want to update"<<endl;
		cin>>temp;
	
		for(int i=0;i<100;i++){
			if(temp==name[i]){	cout<<"enter the new name : "<<endl;
			cin>>newname;
		cout<<"enter the new num : "<<endl;
				cin>>newnum;
				name[i]=newname;
				num[i]=newnum;
				y++;
				cout<<"updated sucessfully--- "<<endl;
			}			}if(y=0){
					cout<<"this contact not found in phonebook"<<endl;
				} system("cls");	
		}else if(x==4){
			string temp;
			cout<<"eneter the name who's number you want to delete : "<<endl;
			cin>>temp;
			for(int i=0;i<100;i++){
				if(temp==name[i]){
					name[i]="\0";
					num[i]="\0";
					y++;
					cout<<"deleted sucessfully--"<<endl;
				} 
				}if(y=0){
					cout<<"this contact not found in phonebook"<<endl;			}
		}
		x=menu();
	
		
	}while(x!=5);
	
}
int menu(){
	int a;
	cout<<"\t\t\t\t\t\t|--------------------------------|"<<"\n";
	cout<<"\t\t\t\t\t\t|      PHONE BOOK APPLICATION    |"<<"\n";
	cout<<"\t\t\t\t\t\t|--------------------------------|"<<"\n";
	cout<<"\t\t\t\t\t\t| [1]  ADD A NUMBER              |"<<"\n";
	cout<<"\t\t\t\t\t\t| [2]  DISPLAY ALL NUMBERS       |"<<"\n";
	cout<<"\t\t\t\t\t\t| [3]  UPDATE A NUMBER AND NAME  |"<<"\n";
	cout<<"\t\t\t\t\t\t| [4]  DELETE A NUMBER           |"<<"\n";
	cout<<"\t\t\t\t\t\t|--------------------------------|"<<"\n";
	cout<<"\t\t\t\t\t\t| [5]       exit                 |"<<"\n";
	cin>>a;
	system("cls");
	return a;
}
