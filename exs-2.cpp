#include<iostream>
using namespace std;

int main(){
	int a;
	
	cout<<"Enter your age:";
	cin>>a;
	
	try{
		if(a<18){
			throw 34;
		}else{
			cout<<"you are able to vote"<<endl;
		}
	}
	catch(int a)
	{
		cout<<"a person cannot be able to vote"<<endl;
	}
}