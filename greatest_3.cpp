//largest among 3 numbers
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter the value of a,b,c"<<endl;
	cin>>a>>b>>c;
	if(a>=b&&a>=c){
		cout<<"largest no. is a ="<< a <<endl;	
	}
	else if(a<=b&&b>=c){
		cout<<"largest no. is b ="<<  b <<endl;	
	}
	else{
		cout<<"largest no. is c ="<< c <<endl;	
	}
	return 0;
}
