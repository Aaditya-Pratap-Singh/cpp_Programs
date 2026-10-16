#include<iostream>
using namespace std;

class BankAccount {
	private :
		int accountno ;
		string name;
		double balance;
	public:
		int accNo;
		string holdername;
		double bal;
		
	void deposit(double amount)
	{
		bal += amount;
		cout<<"Amount deposit :"<<amount<<endl;
	}
	
	void withdraw(double amount)
	{
		if(amount<=bal && bal>500){
			bal-=amount;
			cout<<"Amount Withdrawn :"<<amount<<endl;
		}
		else{
			cout<<"Insufficient Balance !!"<<endl;
		}
	}
	void display()
	{
		cout<<"  --ACCOUNT DETAIL--   "<<endl;
		cout<<"Account Number :"<<accNo<<endl;
		cout<<"Name :"<<holdername<<endl;
		cout<<"Balance :"<<bal<<endl;
	}
};
int main()
{
	BankAccount b1;
	cout<< "Enter Account Number :";
	cin>>b1.accNo;
	cout<<"Enter Account Holder Name :";
	cin>>b1.holdername;
	cout<<"Enter Initial Balance :";
	cin>>b1.bal;
	double amount;
	cout<<" \nEnter amount to deposit :";
	cin>>amount;
	b1.deposit(amount);
	
	cout<<"Enter amount to withdraw :";
	cin>>amount;
	b1.withdraw(amount);
	
	b1.display();
	return 0;
}
