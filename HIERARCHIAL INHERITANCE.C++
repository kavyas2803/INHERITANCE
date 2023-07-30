#include<iostream>
using namespace std;

class department
{
protected:
    int roll,age;
   

public:
    void getdata()
    {
        cout << "Enter roll no and age: ";
        cin >>roll>>age;
    }
    void display()
    {
        cout<<roll<<age;
    }
};

class IT:public department
{
public:
    void getitdata()
    {
        cout<<"\n IT DEPARTMENT:";
        getdata();
    }
};
class AIDS:public department
{
    
public:
     void getaidsdata()
    {
        cout << "AIDS DEPARTMENT"; 
        getdata();
    }
};

int main()
{
    IT ob1;
    AIDS ob2;
    ob1.getitdata();
    ob2.getaidsdata();
    ob1.display();
    ob2.display();
    return 0;
}
