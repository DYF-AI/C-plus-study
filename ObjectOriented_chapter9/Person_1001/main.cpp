
#include <iostream>
#include <string.h>
#include <string>
#include "Person.h"

using namespace std;

int main()
{
    int iResult = -1;
    CPerson p;
    iResult = p.setAge(25);
    if(iResult >= 0)
        cout << "m_shAge is:" << p.getAge() << endl;
    
    iResult = p.setIndex(0);
    if (iResult >= 0)
        cout << "m_iIndex is:" << p.getIndex() << endl;
    
    char bufTemp[] = "Mary";
    iResult = p.setName(bufTemp);
    if (iResult >= 0)
        cout << "m_cName is:" << p.getName() << endl;
    
    iResult = p.setSalary(1700.25);
    if(iResult >= 0)
        cout << "m_dSalary is:" << p.getSalary()<<endl;
    
    return 0;

}