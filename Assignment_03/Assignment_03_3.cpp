#include <iostream>
using namespace std;

class Address{

    string building;
    string street;
    string city;
    int pin;

public:
    
    Address(){
        
    }
    Address(string a,string b,string c,int d){
        this->building=a;
        this->street=b;
        this->city=c;
        this->pin=d;
    }
    void setBuilding(string buildname){
         this->building=buildname;
    }
    void setStreet(string streetname){
        this->street=streetname;
    }
    void setCity(string cityname){
        this->city=cityname;
    }
    void setPin(int pincode){
        this->pin=pincode;
    }

    string getBuilding(){
        return building;
    }
    string getStreet(){
        return street;
    }
    string getcity(){
        return city;
    }
    int getpin(){
        return pin;
    }

    void acceptData(){
        cout<<"Enter your Building name : "<<endl;
        getline(cin,this->building);
        cout<<"Enter street name : "<<endl;
        getline(cin,this->street);
        cout<<"Enter city name: "<<endl;
        getline(cin,this->city);
        cout<<"Enter your Pincode : "<<endl;
        cin>>this->pin;
    }

    void displayData(){
        cout<<"Building name : "<<building<<endl;
        cout<<"Street : "<<street<<endl;
        cout<<"City : "<<city<<endl;
        cout<<"Pincode : "<<pin<<endl;
    }
};
int main(){

Address a1;
 
a1.setBuilding("IT-Park_karad");
a1.setStreet("shanivarpeth");
a1.setCity("Karad");
a1.setPin(416007);

cout<<"Building name : "<<a1.getBuilding()<<endl;
cout<<"Street : "<<a1.getStreet()<<endl;
cout<<"City : "<<a1.getcity()<<endl;
cout<<"Pincode : "<<a1.getpin()<<endl;

Address a2;
a2.acceptData();
a2.displayData();



 
 

}