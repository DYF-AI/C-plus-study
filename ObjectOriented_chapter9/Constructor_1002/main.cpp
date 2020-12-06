
#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    CPerson p1(20, 30, 100);
    CPerson p2(p1);
    cout << "m_iIndex of p1 is:" << p1.getIndex() << endl;
    cout << "m_iIndex of p1 is:" << p1.getAge() << endl;
    cout << "m_dSalary of p1 is" << p1.getSalary() << endl;
    cout << "---------------------" << endl;
    cout << "m_iIndex of p2 is:" << p2.getIndex() << endl;
    cout << "m_iIndex of p2 is:" << p2.getAge() << endl;
    cout << "m_dSalary of p2 is" << p2.getSalary() << endl;
}