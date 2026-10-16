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
	int choice;
	double amount;
	cout<<"----MENU----"<<endl;
	cout<<"1. DEPOSIT"<<endl;
	cout<<"2. WITHDRAW"<<endl;
	cout<<"3. CHECK BALANCE"<<endl;
	cout<<"4. ACCOUNT DETAILS"<<endl;
	cout<<"5. EXIT"<<endl;
	cout<<"Enter a choice :";
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Enter amount to deposit :";
			cin>>amount;
			b1.deposit(amount);
			break;
		case 2:
			cout<<"Enter amount to withdraw :";
			cin>>amount;
			b1.withdraw(amount);
			break;
		case 3:
			cout<<"Current Balance :";
			b1.bal;
			break;
		case 4:
			b1.display();
			break;
		case 5:
			cout<<"THANKIEUU ^_^"<<endl;
			break;
		default:
			cout<<"Sahi choice dee :-/" <<endl;
		
	}
	return 0;
}
