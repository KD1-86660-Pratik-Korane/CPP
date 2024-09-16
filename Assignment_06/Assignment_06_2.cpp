 #include <iostream>
using namespace std;
class Employee
{
    int id;
    double salary;

public:
    Employee()
    {  
      id=0;
      salary=0;
    }
    Employee(int id, double salary)
    {
         
    }

    virtual void accept()
    {
        
    }

    virtual void display()
    {
         
    }
};

class Manager : virtual public Employee
{
    double bonus;

protected:
    void acceptManager()
    {
        
    }
    void displayManager()
    {
        
    }

public:
    Manager()
    {
    }
    Manager(int id, double salary, double bonus) : Employee(id, salary)
    {
        this->bonus = bonus;
    }
    void accept()
    {
        
    }

    void display()
    {
        
    }
};

class Salesman : virtual public Employee
{
    double commission;

protected:
    void acceptSalesman()
    {
         
    }
    void displaySalesman()
    {
        
    }

public:
    Salesman()
    {
    }
    Salesman(int id, double salary, double commission) : Employee(id, salary)
    {
        this->commission = commission;
    }
    void accept()
    { 
    }

    void display()
    {
         
    }
};

class Salesmanager : public Manager, public Salesman
{
public:
    Salesmanager()
    {
    }
    Salesmanager(int id, double salary, double bonus, double commission) : Employee(id, salary)
    {
        
    }

    void accept()
    {
        
    }
    void display()
    {
        
    }
};
int main()
{
    Employee *e = new Salesmanager;
     



    return 0;
}