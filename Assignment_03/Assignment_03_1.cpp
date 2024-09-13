#include <iostream>
using namespace std;

class CalculateArea{
    
    double l;
    double b;
    double h;

public:
    CalculateArea(){
        
        l=1;
        b=1;
        h=1;
    }
     CalculateArea(double i){
        cout<<"Enter side : ";
        cin>>i;
        
        this->l=i;
        this->b=i;
        this->h=i;
         
    }
    CalculateArea(int i,int j,int k){
         
        this->l=i;
        this->b=j;
        this->h=k;
    }
  
    void acceptData(){
        cout<<"Enter length, breadth and height : "<<endl;
        cin>>this->l>>this->b>>this->h;
    }
    void calculateVolume(){
        cout<<"Volume : "<<l*b*h<<endl;
    }
};

int menu(){
    int choice;
    cout<<"Enter your choice : "<<endl;
    cin>>choice;
    return choice;
}
int main(){
       
        CalculateArea c1;
        int choice;
        double n;
         

        while((choice=menu())!=0){

            switch(choice){
                case 1:{ 
                         CalculateArea c2;
                        c2.calculateVolume();
                }
                break;
                case 2:{
                        CalculateArea c2(n);
                       c2.calculateVolume();
                }
                break;
                case 3: {
                      c1.acceptData();   
                       c1.calculateVolume();                  
                }
                break;
                default : cout<<"wrong choice...";
                break;
            }
        }
    
       

}