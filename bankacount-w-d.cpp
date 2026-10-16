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
	b1.accNo = 1;
	b1.holdername = "Aaditya";
	b1.bal = 100000;
	
	cout<<"--STATIC OBJECT--"<<endl;
	b1.deposit(1000);
	b1.withdraw(6000);
	b1.display();
	
	BankAccount *b2 = new BankAccount ;
	b2->accNo=2;
	b2->holdername="AADII";
	b2->bal= 200;
	
	cout<<"  --- DYNAMIC OBJECT ---"<<endl;
	b2->deposit(300);
	b2->withdraw(500);
	b2->display(); 
	return 0;
}
