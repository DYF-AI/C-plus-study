
class CPerson
{
    private:
        int m_iIndex;                          // 私有属性成员
    public:                                    // 公有属性成员
        int public_iIndex;
        int getIndex()
        { 
            //return m_iIndex;                 // 返回70，返回值，不一定是正确的值
            return public_iIndex;
        }      
        int setIndex(int iIndex)
        {
            //m_iIndex = iIndex;
            public_iIndex = iIndex;
            return 0;
        }

};

