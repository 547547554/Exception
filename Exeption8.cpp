#include <iostream>
#include <exception>

using namespace std;

//self create class (kaha or kis exception me error aya hai usko janne ke liye self make class banate hai)

class InvalidAmountError : public runtime_error
{
    public:
    InvalidAmountError(const string &msg):runtime_error(msg)
    {

    };

};

class InsufficientBalanceError :public runtime_error
{
   public:
   InsufficientBalanceError(const string &msg):runtime_error(msg)
    {

    };
};

class Customer
{
    string name;
    int acc_no, balance;

public:
    Customer(string name, int acc_no, int balance)
    {
        this->name = name;
        this->balance = balance;
        this->acc_no = acc_no;
    }

    // diposit
    void diposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " rs is credited successfully \n";
        }
        else
        {
            throw InvalidAmountError("amount should be greater than 0 ");
        }
    }

    // withdraw
    void withdraw(int amount)
    {
        if (amount < 0 && amount >= balance)
        {
            balance -= amount;
            cout << amount << "rs is widthraw successfully ";
        }
        if (amount < 0)
        {
            throw InvalidAmountError(" amount should be a 0");
        }
        else
        {
            throw InsufficientBalanceError (" your balance is low ");
        }
    }
};

int main()
{
    Customer C1("Rakesh", 5000, 10);
    try
    {
        C1.diposit(100);
        C1.withdraw(6000);
        C1.diposit(100);
    }
    catch (const InvalidAmountError &e)
    {
        cout << "Exeption occured : " << e.what() << endl;
    }

    catch (const InsufficientBalanceError &e)
    {
        cout << "Exeption occured : " << e.what() << endl;
    }
    catch(...)
    {
        cout<<"Exception occured"<<endl;
    }
}