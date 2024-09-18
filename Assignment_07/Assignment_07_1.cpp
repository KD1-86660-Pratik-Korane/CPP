
#include <iostream>
using namespace std;


 
class Product
{

public:
    int id;
    string title;
    float price;

   
    virtual void acceptDetails() {}
    virtual void displayDetails() {}

   
    float getPrice(){
        return price;
    }
};

 
class Books : public Product
{
    string author;
    float bookPrice;

public:
 
    void acceptDetails() override
    {
        cout << "Enter product id" << endl;
        cin >> id;
        cout << "Enter title" << endl;
        cin >> title;
        cout << "Enter author name" << endl;
        cin >> author;
        cout << "Enter books price" << endl;
        cin >> bookPrice;
        price = bookPrice*0.90;
    }


};


 
class Tape : public Product
{
    string artist;
    float tapePrice;

public:
 
    void acceptDetails() override
    {
        cout << "Enter product id" << endl;
        cin >> id;
        cout << "Enter title" << endl;
        cin >> title;
        cout << "Enter author name" << endl;
        cin >> artist;
        cout << "Enter books price" << endl;
        cin >> tapePrice;
        price = tapePrice*0.95;
    }

 
    float getPrice(){
        return price;
    }
};


 
void menu()
{
    cout << "Enter your choice" << endl;
    cout << "1. Add product" << endl;
    cout << "2. Calculate bill" << endl;
    cout << "3. EXIT" << endl;

}

int main()
{

   
    Product *arr[3];

    while (1)
    {
        int choice;
        menu();
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            for (int i = 0; i < 3; i++)
            {
                int choice;
                cout << "Enter your choice" << endl;
                cout << "1. Add Book" << endl;
                cout << "2. Add Tape" << endl;
                cin >> choice;
                 
                switch (choice)
                {
                case 1:
                {
                    arr[i] = new Books();
                    arr[i]->acceptDetails();
                    break;
                }
                case 2:
                {
                    arr[i] = new Tape();
                    arr[i]->acceptDetails();
                    break;
                }
                default:
                {
                    cout << "Wrong choice" << endl;
                }
                }
            }
            break;

            case 2:{
                float totalBill;
                for(int i=0;i<3;i++){
                    totalBill += arr[i]->getPrice();
                }
                cout<<"Total Bill: "<<totalBill<<endl;
                break;
            }

            case 3:{
                return 0;
            }

            default:{
                cout<<"wrong choice"<<endl;
            }
        }
        }
    }
}