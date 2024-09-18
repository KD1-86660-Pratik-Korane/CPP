#include <iostream>
#include <typeinfo>
using namespace std;

enum EAccountType
{
    SAVING,
    CURRENT,
    DMAT,
};

class InSufficientFundsException{
     int accno;
     double currentBalance;
     double withdrawAmount;
public:
     InSufficientFundsException(){

     }
     InSufficientFundsException(int accno,double currentBalance,double withdrawAmount){
        this->accno=accno;
        this->currentBalance=currentBalance;
        this->withdrawAmount;
     }
    
     void display(){
        cout<<"InvalidateException :"<<endl;
        cout<<"Message : "<<"Account number is Invalid "<<endl;
     }
     
     void print(){
        cout<<"InvalidateException :"<<endl;
        cout<<"Message : "<<"balance is not sufficient"<<endl;
     }
     

};
class Account
{
    const int accno;
    EAccountType accountType;
    double balance;

public:
    Account(int accno):accno(accno){

    }
    

    void acceptData()
    {   
        cout << "Enter balance for account " << accno << ": ";
        cin >> balance;
    }

    void depositData()
    {
        double amount;
        cout << "Enter amount to deposit in account " << accno << ": ";
        cin >> amount;
        balance += amount;
    }

    void withdrawData()
    {
        double withdrawal;
        cout << "Enter amount to withdraw from account " << accno << ": ";
        cin >> withdrawal;
       if(withdrawal>balance){
            throw InSufficientFundsException();
        } 
        balance -= withdrawal;
        
    }

    void displayData() const
    {
        cout << "Account no: " << accno << endl;
        cout << "Balance available: " << balance << endl;
    }

    
};

int findAccount(Account* arr[], int size)
{
    int accn;
    cout << "Enter your account number: ";
    
    cin >> accn;
    if(accn<=0 || accn>4){
        throw InSufficientFundsException();
    }
    for (int i = 0; i < size; ++i)
    {
        if (typeid(*arr[i])==typeid(Account))
        {
            return i;
        }
    }
    cout << "Account not found." << endl;
    return -1;
}

int main()
{
    Account* arr[5];
    int choice;
    cout<<"Enter your choice : ";
    cin>>choice;

    while (choice!=0)
    {
        cout << "Enter your choice:" << endl;
        cout << "0 : EXIT " << endl;
        cout << "1 : Add Account" << endl;
        cout << "2 : Deposit" << endl;
        cout << "3 : Withdraw" << endl;
        cout << "4 : Display All Accounts" << endl;
        cin >> choice;

        switch (choice)
        {   
        case 1:
        {
            int accNo;
            
            for (int i = 0; i < 5; ++i)
            {      
                    cout << "Enter account number: ";
                    cin >> accNo;
                    arr[i] = new Account(accNo);
                    arr[i]->acceptData();
                 
            }
        }
        break;

        case 2:
        {   
            try{
            int index = findAccount(arr, 5);
            if (index != -1)
            {
                arr[index]->depositData();
            }
            }
            catch(InSufficientFundsException e){
                e.display();
            }
        }
        break;

        case 3:
        {   
            try{
            int index = findAccount(arr, 5);
            if (index != -1)
            {
                arr[index]->withdrawData();
            }
            }
            catch(InSufficientFundsException e){
                e.print();
            }
        }
        break;

        case 4:
        {
            for (int i = 0; i < 5; ++i)
            {
                 
                    arr[i]->displayData();
                
            }
        }
        break;

        default:
            cout << "Wrong choice." << endl;
        }
    }
    
     for (int i = 0; i < 5; ++i)
            {
                delete arr[i];
                arr[i]=NULL;
            }
            

    return 0;
}
