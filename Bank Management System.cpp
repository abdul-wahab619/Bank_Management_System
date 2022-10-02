//bank management system

#include<string>
#include<iostream>
using namespace std;

//func where we find get the details of the customer
void account_status(string name,long long int NIC,string address,int amount_to_deposit,int amount_to_withdraw,int new_bal)
{
	
	int rem_bal = new_bal - amount_to_withdraw;
	cout<<"Name = "<<name<<endl;
	cout<<"NIC = "<<NIC<<endl;
	cout<<"Address = "<<address<<endl;
	cout<<"Amount Deposited: "<<amount_to_deposit<<endl;
	cout<<"Amount Withdraw: "<<amount_to_withdraw<<endl;
	cout<<"Your remainnig Balanace is: "<<rem_bal<<endl;
	
}

//here create the struct to declares the variables
// about the customer requirement
struct bank
{
	
	string name;
	int NIC;
	string address;
	int amount_to_deposit;
	int amount_to_withdraw;
	
};

//main function/driver code
int main()
{
	int c_bal = 20000;
	bank b;
	string s;
	cout<<"*** Bank Management System ***\n\n";
	
	cout<<"Enter your name: ";
	getline(cin,b.name);
	
	cout<<"Enter your Address: ";
	getline(cin,b.address);
	
	cout<<"Enter your NIC: ";
	cin>>b.NIC;
	
	
		
	cout<<"Enter the amount you want to deposit: ";
	cin>>b.amount_to_deposit;    
	
	int new_bal = c_bal + b.amount_to_deposit;
	
	cout<<"Enter the amount you want to withdraw: ";
	cin>>b.amount_to_withdraw;
	
	cout<<"\n\n";
	cout<<"Your Account Status is given below:- \n\n";
	
	account_status(b.name,b.NIC,b.address,b.amount_to_deposit,b.amount_to_withdraw,new_bal);
	
	return(0);
}
