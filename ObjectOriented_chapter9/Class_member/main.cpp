#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    CPerson p;
    p.public_iIndex = 100;
    cout << "public iIndex is:" << p.getIndex() << endl;
}

// C++ 正常返回的值，不一定是正确的值