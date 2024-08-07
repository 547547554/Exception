#include<iostream>
using namespace std;

class Customer
{
  string name;
  int acc_no,balance;

public:
Customer (string name , int acc_no , int balance)
 {
  this->name = name ;
  this->acc_no=acc_no;
  this->balance=balance;
 }
//diposite
void diposite(int amount)
{
  if (amount > 0)
  {
      amount+=balance;
      cout<<amount<<"rs is diposite successfully "<<endl;
  }

  else
  {
      cout<<" amount should be greather than  0 \n";
  }
}

//withdraw
void withdraw(int amount)
{
    if ( amount>0 && amount <= balance )
    {
        amount-=balance;
        cout<<amount <<"rs is successfully withdraw "<<endl;
    }
  else if (amount < 0)
  {
    cout<<"amount should be greater than 0 \n";
  }
    else
  {
    cout<<"your balance is low \n";
  }
 }
};

int main()
{
    Customer c("Rakesh",243,1000);
    c.diposite(100);
    c.withdraw(6000);
}