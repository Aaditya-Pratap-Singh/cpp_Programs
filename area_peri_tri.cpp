//claculate the area and perimeter of triangle
#include<iostream>
using namespace std;
int main(){
	float l,b,area,peri,h;
	cout<<"Enter the value of l,b and h"<<endl;
	cin>>l>>b>>h;
	area=0.5*(h*b);
	peri=l+b+h;
	cout<<"The area of triangle is"<<area<<endl;
	cout<<"The perimeter of triangle  is"<<peri<<endl;
	return 0;
}
