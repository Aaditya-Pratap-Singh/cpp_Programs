//claculate the area and perimeter of rectangle
#include<iostream>
using namespace std;
int main(){
	int l,b,area,peri;
	cout<<"Enter the value of l and b"<<endl;
	cin>>l>>b;
	area=l*b;
	peri=2*(l+b);
	cout<<"The area of rectangle is"<<area<<endl;
	cout<<"The perimeter of rectangle is"<<peri<<endl;
	return 0;
}
