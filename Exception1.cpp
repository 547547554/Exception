
#include<iostream>
using namespace std;

class  Customer
{
 string name;
 int account_no, balance;

 public:
Customer(string name , int account_no, int balance)
 {
    this->name=name;
    this->account_no= account_no;
    this->balance=balance;
 };

 //deposit amount
 void deposit(int amount)
 {
    if ( amount > 0)
    {
        balance+=amount;
     cout<<amount<<" rs credited successfully "<<endl;
    }
 }

// withdraw
 void withdraw( int amount)
 {
    if (amount>0 && amount<balance )
    {
        balance-=amount;
        cout<<amount<<" rs is withdraw successfully "<<endl;
    }
 }

};

int main()
{
    Customer c("Rakesh",1221,1000);
    c.deposit(100);
    c.withdraw(1100);
}
