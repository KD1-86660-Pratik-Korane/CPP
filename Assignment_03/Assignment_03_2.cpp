#include <iostream>
using namespace std;

class tollbooth{
      unsigned int totalcars;
      double money;
      int paidcars;
      int notpaidcars;

public:
      tollbooth(){
        this->totalcars=0;
        this->money=0;
        this->paidcars=0;
        this->notpaidcars=0;
      }

      void payingCar(){
        cout<<"paid the toll of 0.50"<<endl;
         money=money+0.50;
         totalcars=totalcars+1;
         paidcars=paidcars+1;
      }
      void nopayCar(){
        cout<<"don't paid the toll"<<endl;
        totalcars=totalcars+1;
        notpaidcars=notpaidcars+1;
      }
      void printOnConsole(){
           cout<<"Total number of cars : "<<paidcars+notpaidcars<<endl;
           cout<<"Total money recieved : "<<money<<endl;
           cout<<"No of tollpaid cars : "<<paidcars<<endl;
           cout<<"No of cars (don't paid toll) : "<<notpaidcars<<endl;
           cout<<"---------------------------------------------------------------"<<endl;

      }
};
  int wantTopay(){
    int descision;
    cout<<"Enter your descision : "<<endl;
    cout<<"Enter 1 to pay the toll"<<endl;
    cout<<"Enter 2 for skip the toll"<<endl;
    cin>>descision;
    return descision;
  }

int main(){
    
    tollbooth t1;
    int descision;
     
     while((descision=wantTopay())!=0){

      switch(descision){
        case 1: t1.payingCar();
        break;
        case 2: t1.nopayCar();
        break;
        case 3: t1.printOnConsole();
        break;
      }
     }
}