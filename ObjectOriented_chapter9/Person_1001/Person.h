
// 头文件

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

class CPerson
{
public:
    // 数据成员
    int m_iIndex;
    char m_cName[25];
    short m_shAge;
    double m_dSalary;

    // 成员函数
    short getAge();
    int setAge(short sAge);
    int getIndex();
    int setIndex(int iIndex);
    char* getName();
    int setName(char cName[25]);
    double getSalary();
    int setSalary(double dSalary);

};


// 定义类成员的实现部分, 放在Person.cpp 出现问题
short CPerson::getAge()
{
    return m_shAge;
}

int CPerson::setAge(short sAge)
{
    m_shAge = sAge;
    return 0;
}

int CPerson::getIndex()
{
    return m_iIndex;
}

int CPerson::setIndex(int iIndex)
{
    m_iIndex = iIndex;
    return 0;
}

char* CPerson::getName()
{
    return m_cName;
}

int CPerson::setName(char cName[25])
{
    strcpy(m_cName, cName);
    return 0;
}

double CPerson::getSalary()
{
    return m_dSalary;
}

int CPerson::setSalary(double dSalary)
{
    m_dSalary = dSalary;
    return 0;
}
