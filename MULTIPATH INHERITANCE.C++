/*virtual base class inheritance*/

#include<iostream>
using namespace std;

class student
{
protected:
    int roll;
public:
    void getrollno()
    {
        cout << "Enter roll no: ";
        cin >> roll;
    }
};

class test :virtual public student
{
protected:
    int marks[5];
public:
    void getmarks()
    {
        cout << "\n Enter the marks: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
};

class score:virtual public student
{
protected:
    int scoreValue;
public:
    void getscore()
    {
        cout << "Enter score: ";
        cin >> scoreValue;
    }
};

class result : public test, public score
{
    int total;
public:
    void getresults()
    {
        getmarks(); 
        total = 0;
        for (int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }
        total = total + scoreValue;
    }

    void display()
    {
        cout << "Roll No: " << roll << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total: " << total << endl;
        cout << "Score: " << scoreValue << endl;
    }
};

int main()
{
    result ob;
    ob.getrollno();
    ob.getmarks();
    ob.getscore();
    ob.getresults();
    ob.display();
    return 0;
}
