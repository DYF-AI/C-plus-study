
//8.6 结构体数组

/*8.6.1 结构体声明与引用*/

#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{

    struct PersonInfo
    {
        int index;
        char name[30];
        short age;
    }Person[3]={{1,"张三", 20},
                {2,"宋桥",21},
                {3,"kebo",40}};   // 直接声明,并进行初始化
    //PersonInfo Person[5]  // 使用结构体变量声明

    // 指针访问结构体数组
    struct PersonInfo *pPersonInfo;
    pPersonInfo = Person;
    for(int i=0; i<3; i++, pPersonInfo++)
    {
        cout << pPersonInfo->index << endl;
        cout << pPersonInfo->name << endl;
        cout << pPersonInfo->age << endl;
    }
}


/*
    notebook：
    pPersonInfo指针开始指向数组的首元素，结构指针自加1，其结果使pPersonInfo指针指向数组的下一个元素
*/