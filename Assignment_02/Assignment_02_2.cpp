#include <iostream>
using namespace std;

class student{

    int roll_no;
    string name;
    float marks;
  
public :
    void initStudent(){
        roll_no=0;
        name="";
        marks=0;
    }
   
  
    void acceptStudentFromConsole(){
        cout<<"Enter roll_no :"<<endl;
        cin>>this->roll_no;
        cout<<"Enter name : "<<endl;
        cin>>this->name;
        cout<<"marks : "<<endl;
        cin>>this->marks;
    }

    void printStudentOnConsole(){
        cout<<roll_no<<"-"<<name<<"-"<<marks<<endl;
    }  
   
};

int menu(){
    int choice;
    cout<<"0 : Exit"<<endl;
    cout<<"1 : Add"<<endl;
    cout<<"2 : Display"<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>choice;

    return choice;
}
int main(){
   
   student s1;
    int choice;
   while((choice=menu())!=0){
      
    switch(choice){
        case 1: 
                s1.acceptStudentFromConsole();
                break;
        case 2: 
                s1.printStudentOnConsole();
                break;
        default: 
                cout<<"wrong choice..."<<endl;
                break;         
            
    }
   }


}