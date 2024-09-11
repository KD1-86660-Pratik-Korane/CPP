#include <iostream>
using  namespace std;

namespace NStudent{

    class student{

       int roll_no;
       string name;
       float marks;
public:
       void acceptStudentFromConsole(){
        cout<<"Enter roll_no : "<<endl;
        cin>>this->roll_no;
        cout<<"Enter name : "<<endl;
        cin>>this->name;
        cout<<"Enter marks"<<endl;
        cin>>this->marks;
       }

       void printStudentFromConsole(){
        cout<<roll_no<<"-"<<name<<"-"<<marks;
       }
    };
}
int menu(){
    int choice;
    cout<<"0 : Exit"<<endl;
    cout<<"1 : Add"<<endl;
    cout<<"2 : display"<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>choice;
    return choice;
}
int main(){
   
   int choice;
   NStudent::student s1;
   while((choice=menu())!=0){
    switch(choice){
        case 1: 
                s1.acceptStudentFromConsole();
                break;
         case 2:  
                 s1.printStudentFromConsole();
                 break;
         default : 
                  cout<<"wrong choice..."<<endl;              
    }
   }
}
