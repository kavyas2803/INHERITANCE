#include<iostream>
using namespace std;

class student
{
protected:
    int roll,age;

public:
    void getdata()
    {
        cout << "Enter roll no and age: ";
        cin >>roll>>age;
    }
};

class marks:public student
{
    protected:
    int m1,m2,m3,m4;

public:
    void getmarks()
    {
        cout<<"\n Enter marks:";
        cin>>m1>>m2>>m3>>m4;
    }
};
class result:public marks
{
    protected:
    int total;

public:
     void display()
    {
        cout << "roll num= " <<roll; 
        cout<<"age ="<<age;
        total=m1+m2+m3+m4;
        int avg=(total/5);
        if(avg>=50)
        {
            cout<<"\n Pass";
        }
        else
        {
            cout<<"\n Fail";
        }
    }
};

int main()
{
    result ob;
    ob.getdata();
    ob.getmarks();
    ob.display();
   
    return 0;
}
