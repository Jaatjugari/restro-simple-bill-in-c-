#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int menu();
void showbill();
int sum;
	int t=0,c=0,p=0,q=0,s=0;
int main(){
	int x;
	x=menu();
	do{ if(x==1){ sum=sum+10;
		t++;
	}else if(x==2){int j;
		cout<<"which type of coffee you took ?"<<endl;
		cout<<"1 for regular"<<endl<<"2 for cold coffee"<<endl;
		c++;
		cin>>j; 
		if(j==1){ sum=sum+20;
		}else if(j==2){ sum=sum+60;
		}
	}else if(x==4){
		int k;
		cout<<"which type of pizza you buy "<<endl;
		cout<<"1 for simple"<<endl<<"2 for cheese pizza "<<endl<<"3 for veg mix"<<endl;
		cin>>k;
		p++;
		if(k==1){sum=sum+100;
		}else if(k==2){
			sum=sum+140;
		}else if(k==3){
			sum=sum+160;
		}
	}else if(x==3){
		int l;
		cout<<"1 for mayo patties"<<endl<<"2 for simple patties"<<endl;
		cin>>l;
		q++;
		if(l==1){
			sum=sum+10;
		}else if(l==2){
			sum=sum+30;
		}
	}else if(x==5){
		int n;
		cout<<"1 for cold drink"<<endl<<"2 for banana shake"<<endl<<"3 for papaya shake"<<endl;
		cin>>n;
		s++;
		if(n==1){
			sum=sum+30;
		}else if(n==2){
			sum=sum+50;
		}else if(n==3){
			sum=sum+80;
		}
	}
		x=menu();
	}while(x!=6);
	 showbill();
}
void showbill(){
	cout<<"\t\t\t\t\t\t----------------\t\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t YOUR TOTAL BILL\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t----------------\t\t\t\t\t\t\t"<<endl;
	while(t!=0){ cout<<"\t\t\t\t\t\t simple tea : "<<" 10 "<<"\t\t\t\t\t\t"<<endl;
	        --t;     
	}
	while(c!=0){
		cout<<"\t\t\t\t\t\t coffee : "<<" 20 / 60"<<"\t\t\t\t\t\t"<<endl;;
		--c;
	}while(q!=0){
		cout<<"\t\t\t\t\t\t patties : "<<" 10 / 30 "<<"\t\t\t\t\t\t"<<endl;
		--q;
	} while(p!=0){
		cout<<"\t\t\t\t\t\t pizza : "<<"  100 / 140 /160 "<<"\t\t\t\t\t\t"<<endl;
		--p;
	}while(s!=0){
		cout<<"\t\t\t\t\t\t shake : "<<"  30 / 50 / 80   "<<"\t\t\t\t\t\t"<<endl;
		--s;
	}
	cout<<"\t\t\t\t\t\t-------------------\t\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t\t TOTAL BILL :  "<< sum<<" \t\t\t\t\t\t\t"<<endl;
}


int menu(){
	int a;
	
	cout<<"\t\t\t\t\t |  SYOURS CAFE  |"<<endl;
	cout<<"\t\t\t\t\t | piprali road |"<<endl;
	cout<<"\t\t\t\t\t |--------------|"<<endl;
	cout<<"\t\t\t\t\t |  [1]   tea   |"<<endl;
	cout<<"\t\t\t\t\t |--------------|"<<endl;
	cout<<"\t\t\t\t\t |  [2]  coffee |"<<endl;
	cout<<"\t\t\t\t\t |--------------|"<<endl;
	cout<<"\t\t\t\t\t |  [3] patties |"<<endl;
	cout<<"\t\t\t\t\t |--------------|"<<endl;
	cout<<"\t\t\t\t\t |  [4] pizza   |"<<endl;
	cout<<"\t\t\t\t\t |--------------|"<<endl;
	cout<<"\t\t\t\t\t |  [5] shake   |"<<endl;
	cout<<"\t\t\t\t\t |--------------|"<<endl;
	cout<<"\t\t\t\t\t |  [6]  DONE   |"<<endl;
	cin>>a;
	system("cls");
	return a;
}
