#include<iostream>
using namespace std;

class number
{
    protected:
     int val;
    public:
     number(int x)
     {
         val=x;
     }
     virtual void show()=0;
};
class decimal:public number
{
    public:
     decimal(int a):number(a)
     {
         
     }
     void show()
     {
         cout<<dec<<val;
     }
};
class octal:public number
{
    public:
    octal(int b):number(b)
    {
        
    }
    void show()
    {
        cout<<oct<<val;
    }
};
class hexadecimal:public number
{
    public:
    hexadecimal(int c):number(c)
    {
    
    }
   void show()
   {
       cout<<hex<<val;
   }
};
int main()
{
    decimal ob1(11);
    octal ob2(11);
    hexadecimal ob3(11);
    ob1.show();
    ob2.show();
    ob3.show();
    
    return 0;
}
