
//#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

void print_vector_v1(vector<int> v)
{
    //cout <<  __FUNCTION__ << "��ǰ�������" << endl;  
    cout << "v1��ǰ�������" << endl;    // ������Ҫʹ�÷��ͣ�
    for(int i=0; i<v.size(); i++)
    {
        cout << " " << v[i];
    }
    cout << endl;
}

void print_vector_v2(vector<int> v2)
{
    //cout <<  __FUNCTION__ << "��ǰ�������" << endl;  
    cout << "v2��ǰ���" << endl;
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
    vector<int> v1, v2;      // ������������
    v1.reserve(10);          // �ֶ�����ռ䣬��������Ԫ����Сֵ
    v2.reserve(10);
    v1 = vector<int>(8,7);

    print_vector_v1(v1);    
    
    int array[8] = {1,2,3,4,5,6,7,8};   // ��������
    v2 = vector<int>(array, array+8);   // v2��ֵ
    cout << "v2����:" << v2.capacity() << endl;
    print_vector_v2(v2);

    v1.resize(0);
    cout << "-------------------" << endl;
    cout << "v1������ͨ��resize������Ϊ0" << endl;
    if (!v1.empty())
        cout << "v1����" << v1.capacity() << endl;
    else
        cout << "v1�ǿյ�";

    cout << "��v1��������չΪ8:" << endl;
    v1.resize(8);
    print_vector_v1(v1); 

    cout << "----------------" << endl;
    v1.swap(v2);
    cout << "v1��v2 swap" << endl;
    print_vector_v1(v1);
    print_vector_v2(v2);

    cout << "-----------------" << endl;
    v1.push_back(3);
    cout << "��v1��߼�����Ԫ��3" << endl;
    cout << "v1����" << v1.capacity() << endl;   // v1��������Ϊ��16��vector���ԣ�����Ҫʱ��������������
    print_vector_v1(v1);

    v1.erase(v1.end()-2);
    cout << "ɾ��v1�����ڶ���Ԫ��" << endl;
    cout << "v1����" << v1.capacity() << endl;
    print_vector_v1(v1);

    v1.pop_back();
    cout << "v1ͨ��ջ����pop_back����������Ԫ��" << endl;
    print_vector_v1(v1);
    
    return 0;
    
    
    

    


    

}