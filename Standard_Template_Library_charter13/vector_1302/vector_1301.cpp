
//#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

void print_vector_v1(vector<int> v)
{
    //cout <<  __FUNCTION__ << "当前的所有项：" << endl;  
    cout << "v1当前的所有项：" << endl;    // 不灵活，需要使用泛型？
    for(int i=0; i<v.size(); i++)
    {
        cout << " " << v[i];
    }
    cout << endl;
}

void print_vector_v2(vector<int> v2)
{
    //cout <<  __FUNCTION__ << "当前的所有项：" << endl;  
    cout << "v2当前各项：" << endl;
    //for (decltype(v2.size()) i = 0; i < v2.size(); i++)
    //for (int i = 0; i < v2.size(); i++)
    for (vector<int>::size_type i = 0; i < v2.size(); i++)
    {
        cout << " " << v2[i];
    }
    cout << endl;
}

//int main(int argc, _TCHAR* argv[])
int main()
{
    vector<int> v1, v2;      // 定义两个容器
    v1.reserve(10);          // 手动分配空间，设置容器元素最小值
    v2.reserve(10);
    v1 = vector<int>(8,7);

    print_vector_v1(v1);    
    
    int array[8] = {1,2,3,4,5,6,7,8};   // 定义数组
    v2 = vector<int>(array, array+8);   // v2赋值
    cout << "v2容量:" << v2.capacity() << endl;
    print_vector_v2(v2);

    v1.resize(0);
    cout << "-------------------" << endl;
    cout << "v1的容量通过resize函数变为0" << endl;
    if (!v1.empty())
        cout << "v1容量" << v1.capacity() << endl;
    else
        cout << "v1是空的";

    cout << "将v1的容量扩展为8:" << endl;
    v1.resize(8);
    print_vector_v1(v1); 

    cout << "----------------" << endl;
    v1.swap(v2);
    cout << "v1与v2 swap" << endl;
    print_vector_v1(v1);
    print_vector_v2(v2);

    cout << "-----------------" << endl;
    v1.push_back(3);
    cout << "从v1后边加入了元素3" << endl;
    cout << "v1容量" << v1.capacity() << endl;   // v1的容量变为了16，vector特性，在需要时，扩大自身容量
    print_vector_v1(v1);

    v1.erase(v1.end()-2);
    cout << "删除v1倒数第二个元素" << endl;
    cout << "v1容量" << v1.capacity() << endl;
    print_vector_v1(v1);

    v1.pop_back();
    cout << "v1通过栈操作pop_back放走了最后的元素" << endl;
    print_vector_v1(v1);
    
    return 0;
    
    
    

    


    

}