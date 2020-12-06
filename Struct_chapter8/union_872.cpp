
/* 8.7 共同体数据类型 （和结构体类似）
   (1) 定义：将不同数据项组织成一个整体，共用体在内存中占用首地址相同的一段存储单元
   (2) 关键字：union
   (3) 内存占用：共用体的每个成员分别占用自己的内存，共用体变量所占的内存长度等于最长的成员成员长度
       一个共用体变变量不能同时存放多个成员的值
*/

#include <iostream>
#include <string>
#include <string.h>
using namespace std;

union union_872
{
    /* data */
    int iData;
    char chData;
    float fData;
}uStruct;     // 直接声明 共用体变量

int main()
{
    /*按照不同顺序为uStruct变量的3个成员赋值*/
    uStruct.chData = 'A';
    uStruct.fData = 0.3;
    uStruct.iData = 100;
    //-------------------
    cout << uStruct.chData << endl;
    cout << uStruct.fData << endl;
    cout << uStruct.iData << endl;    // 只有这个正确输出100
    cout << "------------" << endl;

    uStruct.iData = 100;
    uStruct.fData = 0.3;
    uStruct.chData = 'A';
    cout << uStruct.chData << endl;  // 只有这个正确输出 A
    cout << uStruct.fData << endl;
    cout << uStruct.iData << endl;  
    cout << "------------" << endl;

    uStruct.iData = 100;
    uStruct.chData = 'A';
    uStruct.fData = 0.3;
    cout << uStruct.chData << endl;
    cout << uStruct.fData << endl;  // 只有这个正确输出0.3
    cout << uStruct.iData << endl;

    return 0;
}
