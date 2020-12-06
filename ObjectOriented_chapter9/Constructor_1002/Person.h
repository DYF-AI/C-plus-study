
class CPerson
{
    public:
        CPerson(int iIndex, short shAge, double dSalary);  // 构造函数
        CPerson(CPerson & copyPerson);                     // 复制构造函数

        // 成员变量
        int m_iIndex;
        short m_shAge;
        double m_dSalary;
        // 成员函数
        int getIndex();
        short getAge();
        double getSalary();
};

int CPerson::getIndex()
{
    return m_iIndex;
}

short CPerson::getAge()
{
    return m_shAge;
}

double CPerson::getSalary()
{
    return m_dSalary;
}

// 构造函数
CPerson::CPerson(int iIndex, short shAge, double dSalary)
{
    m_iIndex = iIndex;
    m_shAge = shAge;
    m_dSalary = dSalary; 
}

// 复制构造函数
CPerson::CPerson(CPerson & copyPerson)
{
    m_iIndex = copyPerson.m_iIndex;
    m_shAge = copyPerson.m_shAge;
    m_dSalary = copyPerson.m_dSalary;
}