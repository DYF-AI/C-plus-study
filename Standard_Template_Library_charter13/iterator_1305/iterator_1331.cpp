
// ���������ֻ����дһ�����У����Ե�������ȡ����
#include <iostream>
#include <vector>
using namespace std;

// Ӧ�����������
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

// �����������ֻ���ڶ�ȡһ�����У����Խ��е�������ȡ�ͱȽϲ���
int test2()
{
    vector<int> intVect(5);   // ������СΪ5
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
