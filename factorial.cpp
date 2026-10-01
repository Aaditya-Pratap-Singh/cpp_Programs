// factorial of given number
#include<iostream>
using namespace std;
int main()
{
	int n,i,mul=1;
	cout<<"Enter the value of N";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		mul=mul*i;
	}
	cout<<"Factorial of the Number is : "<<mul<<endl;
	return 0;
}
