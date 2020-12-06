
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

void ShowStuctMessage(struct PersonInfo *pInfo)
{
    /* data */
    cout << pInfo->index << endl;
    cout << pInfo->name <<endl;
    cout << pInfo->age << endl;

};

int main()
{
    PersonInfo pInfo;
    pInfo.index = 1;
    strcpy(pInfo.name, "????");
    pInfo.age = 20;
    ShowStuctMessage(&pInfo);
    return 0;
}

