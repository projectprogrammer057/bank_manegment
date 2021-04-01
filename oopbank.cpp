#include<iostream>
#include<string.h>
using namespace std;
class Bank{
	private:
		char name[40],bankname[40],branchname[40],actype[40],ifsc[20];
		long int bal,acno,mobno,adhar;
	public:
		Bank(){
			cout<<"*******HELLO CUSTOMER,WELCOME TO THE INDIAN BANKING SYSTEM*******"<<endl;
			cout<<"@@@@@@@THIS IS OUR BANKING MANEGMENT SYSTEM WHERE YOU CAN CONNECT ANY TYPE OF BANK IN ALL OVER INDIA@@@@@@@"<<endl;
			cout<<"%%%%%%%OUR SYSTEM HAVE CONFIRMED YOU ABOUT YOUR BANKING CYBER SEQURITY%%%%%%%"<<endl;
			cout<<"PLEASE ENTER THE ACCOUNT HOLDER NAME:";
			cin.getline(name,40);
			cout<<"PLEASE ENTER THE NAME OF YOUR BANK:";
			cin.getline(bankname,40);
			cout<<"PLEASE ENTER THE NAME OF BRANCH OF YOUR BANK:";
			cin.getline(branchname,40);
			cout<<"PLEASE ENTER THE TYPE OF YOUR BANKING ACCOUNT:";
			cin.getline(actype,40);
			cout<<"PLEASE ENTER THE IFSC CODE OF YOUR BANK:";
			cin.getline(ifsc,20);
			cout<<"PLEASE ENTER THE ACCOUNT NUMBER OF YOUR BANK:";
			cin>>acno;
			cout<<"PLEASE ENTER THE MOBILE NUMBER WHICH LINKED TO YOUR BANKING ACCOUNT:";
			cin>>mobno;
			cout<<"PLEASE ENTER THE ADHAAR CARD NUMBER THAT IS LINKED TO YOUR ACCOUNT:";
			cin>>adhar;
			cout<<"PLEASE ENTER YOUR OPENING BALANCE OR LAST AMOUNT IN YOUR BANKING ACCOUNT(INR):";
			cin>>bal;
		}
		void deposit(int amt){
			bal=bal+amt;
			cout<<"BALANCE AFTER DEPOSIT IS(INR):"<<bal<<endl;
			cout<<"***THANKING FOR YOU FOR TRANSCTION WITH MY SYSTEM***";
			system("pause");
		}
		void withdraw(int amt){
			if(amt>bal)
			cout<<"*****-------SORRY,YOU CANNOT WITHDRAW MONEY BECAUSE YOU HAVE NOT SUFFICIENT MONEY IN YOUR BANKING ACCOUNT-------*****"<<endl;
			else
			bal=bal-amt;
			cout<<"BALANCE AFTER WITHDRAWL IS(INR):"<<bal<<endl;
			system("pause");
		}
		void display(){
			cout<<"##########-------ACCOUNT DETAILS OF THE CUSTOMER-------#########"<<endl;
			cout<<"ACCOUNT HOLDER NAME IS:"<<name<<endl;
			cout<<"ACCOUNT NUMBER IS:"<<acno<<endl;
			cout<<"NAME OF THE BANK OF THE ACCOUNT HOLDER IS:"<<bankname<<endl;
			cout<<"NAME OF THE BRANCH OF THE BANK OF THE ACCONT HOLDER IS:"<<branchname<<endl;
			cout<<"TYPE OF THE BANK ACCOUNT IS:"<<actype<<endl;
			cout<<"IFSC CODE OF THE BANK ACCOUNT IS:"<<ifsc<<endl;
			cout<<"MOBILE NUMBER OF THE ACCOUNT HOLDER IS:"<<mobno<<endl;
			cout<<"ADHAAR CARD NUMBER IF THE ACCOUNT HOLDER IS:"<<adhar<<endl;
			cout<<"TOTAL BALACE OF YOUR ACOOUNT IS(INR):"<<bal<<endl;
			cout<<"~~~~~~~~~~~THANKING FOR YOU IN INDIAN BANKING MANEGMENT SYSTEM~~~~~~~~~~~"<<endl;
			system("pause");
		}
};
main(){
	Bank objBank;
	int amount,choice;
	do{
		system("cls");
		cout<<"$$$$$$$$$$$INDIAN BANKING MANEGMENT SYSTEM$$$$$$$$$$"<<endl;
		cout<<"PRESS 1:----------DEPOSIT MONEY IN YOUR ACCOUNT---------"<<endl;
		cout<<"PRESS 2:----------WITHDRAW MONEY FROM YOUR ACCOUNT---------"<<endl;
		cout<<"PRESS 3:----------FOR SHOWING OF YOUR ACCOUNT---------"<<endl;
		cout<<"PRESS 4:----------QUIT FROM THE INDIAN BANKING MANEGMENT SYSTEM---------"<<endl;
		cout<<"PLEASE ENTER YOUR CHOICE FOR INDIAN BANKING MANEGMENT SYSTEM:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"PLEASE ENTER AMOUNT FOR DEPOSINT IN YOUR BANK ACCOUNT(INR):";
				cin>>amount;
				objBank.deposit(amount);
				break;
			case 2:
				cout<<"PLEASE ENTER AMOUNT FOR WITHDRAW FROM YOUR BANK ACCOUNT(INR):";
				cin>>amount;
				objBank.withdraw(amount);
				break;
			case 3:
				objBank.display();
				break;
			case 4:
				exit(1);
				break;
			default:
				cout<<"SORRY,YOUR CHOICE IS INVALID,PLEASE TRY AGAIN!!!!";
				
		}
		
	}while(1);
}
