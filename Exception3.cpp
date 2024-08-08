// Exception handling:- an exception is an enexpted problem that arises during 
//                      the execution of a program & our program terminates suddenly with some errors/issue

// Try :- IT represent a block of code of that may through a exception placed inside the try blocks

// catch :- It represent a block of code that is executed when a partiacular exception is throw from the try block

// Throw:- An exception is cpp can be a thrown using the throw keywords

#include <iostream>
using namespace std;

class Customer
{
    string name;
    int acc_no, balance;

public:
    Customer(string name, int acc_no, int balance)
    {
        this->name = name;
        this->balance = balance;
        this->acc_no=acc_no;
    }

    //diposit
    void diposit(int amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout<<amount << " rs is credited successfully \n";
        }
        else{
            throw "amount should be greater than 0 ";
        }
    }

    //withdraw
    void withdraw(int amount)
    {
        if ( amount<0  && amount>=balance )
        {
           balance -= amount;
           cout<<amount<<"rs is widthraw successfully ";
        }
         if (amount<0)
        {
            throw " amount should be a 0";
        }
        else{
             throw " your balance is low ";
        }
    }
    
};

int main()
{
   Customer C1("Rakesh",5000,10);
   try{
    C1.diposit(100);
    C1.withdraw(6000);
    C1.diposit(100);
   }
   catch(const char *e){
    cout<<"Exeption occured : "<<e<<endl;
   }
}