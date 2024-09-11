#include <iostream>
using namespace std;

struct Date{

    int day;
    int month;
    int year;
     

    void initDate(){
        
        day=1;
        month=1;
        year=1900;

    }  
    void acceptDateOnConsole(){
        cout<<"Enter day, month and year"<<endl;
        cin>>day>>month>>year;
    }

    void printDateFromConsole(){
        cout<<day<<"-"<<month<<"-"<<year<<endl;
    }

     bool check(){
    if ((year % 4 == 0 &&  year% 100 != 0)|| (year%400==0)) {
        return true;
    } else {
        return false;
    }
     }

    
};

int menu(){
    int choice;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    return choice;
}

class date{
     int day;
     int month;
     int year;
     
public:  
      void acceptDateOnConsole(){
        cout<<"Enter day, month and year"<<endl;
        cin>>day>>month>>year;
    }

    void printDateFromConsole(){
        cout<<day<<"-"<<month<<"-"<<year<<endl;
    }

     bool check(){
    if ((year % 4 == 0 &&  year% 100 != 0)|| (year%400==0)) {
        return true;
    } else {
        return false;
    }
     }

};
int main(){
    
   struct Date d1;
   int choice;
   d1.initDate();
    bool status;
    
    
   while((choice=menu())!=0){
         switch(choice){  
           case 1: 
            d1.acceptDateOnConsole();
            status=d1.check();
            break;
           case 2:
           d1.printDateFromConsole();
           
        
           
           if(status){
                   cout<<d1.year<<" is a Leap year"<<endl;
                   }else{
                   cout<<d1.year<<" is not a Leap year"<<endl;
                   }
            break;
            case 0:
                  exit;
            
         }
    
   }
    
  

}