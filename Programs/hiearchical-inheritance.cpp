#include <iostream>
#include <string.h>
using namespace std;

class member {
    char gender[10];
    int age;

public:
    void get()
    {
        cout << "Age: "; cin >> age;
        cout << "Gender: "; cin >> gender;
    }
    void disp()
    {
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};
class stud : public member {
    char level[20];

public:
    void getdata()
    {
        member::get();
        cout << "Class: "; cin >> level;
    }
    void disp2()
    {
        member::disp();
        cout << "Level: " << level << endl;
    }
};
class staff : public member {
    float salary;

public:
    void getdata()
    {
        member::get();
        cout << "Salary: Rs."; cin >> salary;
    }
    void disp3()
    {
        member::disp();
        cout << "Salary: Rs." << salary << endl;
    }
};
int main()
{   cout<<"\nProgram by Himanshu beniwal \n";
    member M;
    staff S;
    stud s;
    cout << "Student" << endl;
    cout << "Enter data" << endl;
    s.getdata();
    cout << endl
         << "Displaying data" << endl;
    s.disp();
    cout << endl
         << "Staff Data" << endl;
    cout << "Enter data" << endl;
    S.getdata();
    cout << endl
         << "Displaying data" << endl;
    S.disp();
}
