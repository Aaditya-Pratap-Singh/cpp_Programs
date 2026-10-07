//to find the sum of digits
#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,rem;
	cout<<"Enter the value od N ";
	cin>>n;
	while(n>0){
		rem=n%10; 
		sum+=rem;
		n /= 10;
	}
	cout<<"SUm of Digit of Number is : "<<sum<<endl;
	return 0;
}
