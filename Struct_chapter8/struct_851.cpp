
// 8.5.1 �ṹ����Ϊ��������������

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct PersonInfo
{
    /* data */
    int index;
    char name[30];
    short age;
};


void ShowStructMessage(struct PersonInfo MyInfo)
{
    cout << MyInfo.index << endl;
    cout << MyInfo.name << endl;
    cout << MyInfo.age << endl;
}

int main()
{
    PersonInfo pInfo;
    pInfo.index = 1;
    strcpy(pInfo.name, "������");
    pInfo.age = 25;
    ShowStructMessage(pInfo);    // ?????????????
    return 0;
}
