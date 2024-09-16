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

    void acceptDate(){
        cout<<"Enter Day : "<<endl;
        cin>>day;
        cout<<"Enter Month : "<<endl;
        cin>>month;
        cout<<"Enter Year : "<<endl;
        cin>>year;

    }
    void diplayDate1(){
        cout<<"birthDate : "<<day<<"-"<<month<<"-"<<year<<endl;
    }
     void diplayDate2(){
        cout<<"JoiningDate  : "<<day<<"-"<<month<<"-"<<year<<endl;
    }
};
class Person{

protected:

    string name;
    string address;
    Date birthdate;

public:
    Person(){
        name="";
        address="";
    }
    void acceptData(){
        cout<<"Enter name : "<<endl;
        getline(cin,name);
        cout<<"Enter adress : "<<endl;
        getline(cin,address);
        birthdate.acceptDate();      
    }
    void displayData(){
        cout<<"name : "<<name<<endl;
        cout<<"address : "<<address<<endl;
        birthdate.diplayDate1();
    }

};

class Employee: protected Person{
    int id;
    int sal;
    string dept;
    Date joindate;
public:
    Employee(){
        id=0;
        sal=0;
        dept="";
    }

    // Employee(int id, int sal,string dept,Date joindate,string name,string address,Date birthdate){
    //     this->id=id;
    //     this->sal=sal;
    //     this->dept=dept;
    //     this->joindate=joindate;
    //     this->name=name;
    //     this->address=address;
    //     this->birthdate=birthdate;
    // }

    void acceptData(){
        Person::acceptData();
        cout<<"Enter id : "<<endl;
        cin>>id;
        cout<<"Enter sal : "<<endl;
        cin>>sal;
        cout<<"Enter dept name : "<<endl;
        cin>>dept;
        joindate.acceptDate();
    }
    void displayData(){
        Person::displayData();
        cout<<"id : "<<id<<endl;
        cout<<"sal : "<<sal<<endl;
        cout<<"dept : "<<dept<<endl;
        joindate.diplayDate2();
    }
};
int main(){
     
     Employee e1;
     e1.acceptData();
     e1.displayData();

}