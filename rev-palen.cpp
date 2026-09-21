#include<iostream>
using namespace std; 
int main()
{
	int n,digit,rev=0;
	cout<<"Enter the value of n: ";
	cin>>n;
	int temp=n;
	while(n>0){ 
		digit=n%10;
		rev=(rev*10)+digit;
		n=n/10;
	}
	if(rev==temp){
		cout<<"NUMBER IS PALENDROM"<<endl;
	}
	else{
		cout<<"NUMBER IS NOT PALENDROM"<<endl;
	}
	return 0;
}
