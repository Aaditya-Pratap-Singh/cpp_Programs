// to find HCF
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,i,min,HCF;
	cout<<"Enter the value of n1 and n2 :";
	cin>>n1>>n2;
	min=(n1>n2)?n1:n2;
	for(i=1;i<=min;i++)
	{
		if(n1%i==0&&n2%i==0)
		{
			HCF=i;
		}
	}
	cout<<"HCF=  "<<HCF<<endl;
	return 0;
}
