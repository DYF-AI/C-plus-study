
// 输出迭代器只用于写一个序列，可以递增和提取操作
#include <iostream>
#include <vector>
using namespace std;

// 应用输出迭代器
int test1()
{
    vector<int> intVect;
    for (int i = 0; i < 10; i++)
        intVect.push_back(i);

    cout << "Vect:" << endl;
    vector<int>::iterator it = intVect.begin();
    while (it!=intVect.end())
        cout << *it++ << endl;
    return 0; 
}

// 输入迭代器，只用于读取一个序列，可以进行递增、提取和比较操作
int test2()
{
    vector<int> intVect(5);   // 容器大小为5
    vector<int>::iterator out = intVect.begin();
    *out++ = 1;
    *out++ = 3;
    *out++ = 5;
    *out++ = 7;
    *out = 9;

    cout << "Vect:";
    vector<int>::iterator it = intVect.begin();
    while (it!=intVect.end())
    {
        cout << *it++ << " ";
    }
    cout << endl;
    return 0;
}


int main()
{
    test1();
    test2();
}
