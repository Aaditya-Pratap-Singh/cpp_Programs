//Swapping of two number
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the value of A and B :"; 
	cin>>a>>b;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"value of A and B after Swapping :"<<a<<" "<<b<<endl;
	return 0;
}
