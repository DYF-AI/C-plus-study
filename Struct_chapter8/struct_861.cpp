
//8.6 �ṹ������

/*8.6.1 �ṹ������������*/

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
    }Person[3]={{1,"����", 20},
                {2,"����",21},
                {3,"kebo",40}};   // ֱ������,�����г�ʼ��
    //PersonInfo Person[5]  // ʹ�ýṹ���������

    // ָ����ʽṹ������
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
    notebook��
    pPersonInfoָ�뿪ʼָ���������Ԫ�أ��ṹָ���Լ�1������ʹpPersonInfoָ��ָ���������һ��Ԫ��
*/