//to check prime no.
#include <iostream>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"Enter the value of n";
	cin>>n;
	for(int i=2;i<n;i++)
	{
	    if(n%i==0)
	    count++;
    }
    if (count == 0) {
        cout << "Prime number" << endl;
    } else {
        cout << "Not a prime number" << endl;
    }

    return 0;
}
