#include<iostream>
using namespace std;

class student 
{
	private :
		int marks;
	public :
		string name;
		int rollnumber;
	
	void setdata(){
		cout<<"enter Students name:";
		cin>>name;
		
		cout<<"Enter Roll Number : ";
		cin>>rollnumber;
		
		cout<<"Enter marks :";
		cin>>marks;
	}
	void getdata(){
		cout<<"\n STUDENTS DETAIL"<<endl;
		cout<<"Name : "<<name<<endl;
		cout<<"Roll Number : "<<rollnumber<< endl;
		cout<<"Marks :"<<marks<<endl;
	}
};
int main()
{
	student s;
	s.setdata();
	s.getdata();
	return 0;
}
