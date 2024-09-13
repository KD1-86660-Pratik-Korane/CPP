#include <iostream>
using namespace std;

class Time{
    int h;
    int m;
    int s;

public:
    Time(int h,int m,int s){
        this->h=h;
        this->m=m;
        this->s=s;
    }
    Time(){
        
    }

    int getHour(){
        return h;
    }
    int getMinute(){
        return m;
    }
    int getSeconds(){

    }
    void setHour(int hrs){
        this->h=hrs;
    }
    void setMinute(int min){
         this->m=min;
    }
    void setSecond(int sec){
          this->s=sec;
    }
    void printTime(){
        cout<<h<<":"<<m<<":"<<s<<endl;
    }

    void acceptData(){
        cout<<"Enter hours, minutes and seconds : "<<endl;
        cin>>h>>m>>s;
        
        // cout<<"Enter minutes : "<<endl;
        // cin>>m;
        // cout<<"Enter seconds : "<<endl;
        // cin>>s;
    }

    void displaydata(){
        cout<<"Time = "<<h<<":"<<m<<":"<<s<<endl;
        // cout<<"Minutes : "<<m<<endl;
        // cout<<"Seconds : "<<s<<endl;
    }


};
int main(){
    
    Time **t1= new Time *[5];
    
    // t1[0]=new Time(2,3,4);
    // t1[1]=new Time(4,2,5);
    // t1[2]=new Time(1,3,2);
    for(int i=0; i<5; i++){
        t1[i]=new Time();
        t1[i]->acceptData();
    }
    
    // cout<<sizeof(**t1);

    
     for(int i=0; i<5; i++){
        t1[i]->displaydata();
     }

     

    
}