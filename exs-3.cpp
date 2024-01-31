#include<iostream>
using namespace std;

int main(){
	char psw[20];
	
	cout<<"Enter password : ";
	cin>>psw;
	
	int l;
	l=strlen(psw);
	int upr =0;
	
		try	{
			for(int i=0;i<=l;i++)
			{
			if(psw[i]>=65 && psw[i]<=90){
				upr++;
			}
		}
			if(upr>0){
						throw psw;
					}else{
						cout<<"password is invalid "<<endl;
					}
					
				}
				catch(char s[])
				{
					cout<<"password is valid" << endl;
				}				
}