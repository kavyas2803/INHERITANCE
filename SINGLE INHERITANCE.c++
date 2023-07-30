#include<iostream>
using namespace std;

class A
{
protected:
    int a, b;

public:
    void getdata()
    {
        cout << "Enter a and b: ";
        cin >> a >> b;
    }

    void display()
    {
        cout << a << " " << b; 
    }
};

class B : public A 
{
    int c;

public:
    void multiply()
    {
        c = a * b;
        cout << "\n Multiplication Result: " << c << endl; 
    }
};

int main()
{
    B ob;
    ob.getdata();
    ob.display();
    ob.multiply();

    return 0;
}
