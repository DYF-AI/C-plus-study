
/* 
10.3析构函数 
构造函数：用来在创建对象的同时，给对象中的一些数据成员赋值，主要目的是来初始化对象；
析构函数：用来释放一个对象，在对象删除前，用来做一些清理的工作，与构造函数的功能相反。
*/
#include <iostream>
#include <string.h>
using namespace std;

class CPerson
{
    public:
        CPerson();
        ~CPerson();   // 析构函数
        char* m_pMessage;
        void ShowStartMessage();
        void ShowFrameMessage();
};
CPerson::CPerson()
{
    m_pMessage = new char[2048];
}

void CPerson::ShowStartMessage()
{
    strcpy(m_pMessage, "Welcome to MR");
    cout << m_pMessage << endl;
}

void CPerson::ShowFrameMessage()
{
    strcpy(m_pMessage, "************");
    cout << m_pMessage << endl;
}


CPerson::~CPerson()
{
    delete[] m_pMessage;
}
