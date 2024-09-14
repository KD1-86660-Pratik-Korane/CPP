#include <iostream>
using namespace std;

class Date{
    
    int day;
    int month;
    int year;

public:
    Date(){
        day=0;
        month=0;
        year=0;
    }
    Date(int d,int m,int y){
        this->day=d;
        this->month=m;
        this->year=y;
    }
    void setday(int day){
        this->day=day;
    }
    void setmonth(int month){
        this->month=month;
    }
    void setyear(int year){
        this->year=year;
    }
    void acceptDate(){
        cout<<"Enter Date : "<<endl;
        cin>>day>>month>>year;
    }
    void displayData(){
        cout<<"Date : "<<day<<"-"<<month<<"-"<<year<<endl;
    }
};

class Person{

    string name;
    string address;
    Date dob;

public:
    Person(){
        name="";
        address="";
        dob.setday(0);
        dob.setmonth(0);
        dob.setyear(0);
    }

    Person(string name,string address,int day,int month,int year){
        this->name=name;
        this->address=address;
        this->dob.setday(day);
        this->dob.setmonth(month);
        this->dob.setyear(year);
    }
    void acceptData(){
        cout<<"Enter name : "<<endl;
        cin>>name;
        cout<<"Enter address : "<<endl;
        cin>>address;
        dob.acceptDate();
    }


    void displayData(){
        cout<<"name : "<<name<<endl;
        cout<<"address : "<<address<<endl;
        dob.displayData();
    }
};
int main(){
    
     Person p1;
     p1.acceptData();
     p1.displayData();
        

}