#include<iostream>
using namespace std;

class A
{
protected:
    int x;

public:
    void getx()
    {
        cout << "Enter x: ";
        cin >>x;
    }

    void displayx()
    {
        cout << "x= " << x; 
    }
};

class B 
{
    protected:
    int y;

public:
    void gety()
    {
        cout<<"\n Enter y:";
        cin>>y;
    }
     void displayy()
    {
        cout << "y= " <<y; 
    }
};
class C
{
    protected:
    int z;

public:
    void getz()
    {
        cout<<"\n Enter z:";
        cin>>z;
    }
     void displayz()
    {
        cout << "z= " <<z; 
    }
};
class D:public A,public B,public C
{
    int mul;
    public:
      void multiply()
      {
          getx();
          gety();
          getz();
          mul=x*y*z;
      }
      void display()
      {
          displayx();
          displayy();
          displayz();
          cout<<"\n mul="<<mul;
      }
};
int main()
{
    D ob;
    ob.multiply();
    ob.display();
   

    return 0;
}
