#include<iostream>
using namespace std;

int main(){
	int a=4;
	int b=0;
	int c;
	
	try{
		if(b==0){
			throw 34;
		}else{
			c=a/b;
			cout<<c<<endl;
		}
	}
	catch(int a)
	{
		cout<<"a number cannot be divide by zero"<<endl;
	}
}