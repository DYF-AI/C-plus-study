
// 8.5.1 结构体作为函数参数的输入

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
    strcpy(pInfo.name, "董永飞");
    pInfo.age = 25;
    ShowStructMessage(pInfo);    // ?????????????
    return 0;
}
