### C++标准模板库
#### 一、序列容器
STL提供了很多容器，每个容器提供一组操作行为。序列容器（sequence）只提供插入功能，其中的元素都是有序的，但并未排序。序列容器包括vector向量、deque双端队列和list双向串行。

##### 1、vector模板
vector是一种随机访问的数组类型，提供了对数组的快速、随机访问，以及在序列尾部快速、随机的插入和删除操作。
大小可变，在需要是可以改变其大小。
 ```c++
std::vector<type> name;
 ```    
 (1) 初始化具有size元素个数的vector对象
 ```C++
 std::vector<type> name(size);
 ```
 (2) 初始化具有size元素个数的vector对象，并将对象的初始值设置为value;
 ```C++
std::vector<type> name(size, value);
 ```
 (3) 使用复制构造函数，用现有的向量myvector创建一个vector对象；
 ```C++
 std::vector<type> name(myvector);
 ```
 (4) 创建元素早指定范围内的向量，first代表起始范围,last代表结束范围;
 ```C++
 std::vector<type> name(first, last);
 ```
 (5) vector对象主要成员函数及说明
 ```C++   
 \\ vector.  需要加括号 看需求
 assign(first, last);    \\ 用迭代器first和last范围内的元素替换向量元素
 assign(num.val);        \\ 用val的num个副本替换向量元素
 at(n);                  \\ 返回向量中第n个位置元素的值
 back;                   \\ 返回对向量末尾元素的引用
 begin;                  \\ 返回指向向量的第一元素的迭代器
 capcity;                \\ 返回当前向量最多可以容纳的元素个数
 clear;                  \\ 删除向量的所有元素
 empty;                  \\ 如果向量为空，则返回true值
 end;                    \\ 返回指向向量中最后一个元素的迭代器
 erase(start, end);      \\ 删除迭代器start到end范围内的向量元素
 erase(i);               \\ 删除迭代器i指向的向量元素
 front;                  \\ 返回对向量其实元素的引用
 insert(i, x);           \\ 把向量插入向量中由迭代器i所指明的位置
 insert(i, start, end);  \\ 把迭代器start到end范围内的元素插入到向量中由迭代器i所指明的位置
 insert(i, n, x);        \\ 把x的n个副本插入到向量中由迭代器i所指明的位置
 max_size;               \\ 返回向量的最大容量(最多可容纳的元素个数
 pop_back;               \\ 删除向量最后一个元素
 push_back;              \\ 把x值放在向量末尾
 rbegin;                 \\ 返回一个反向迭代器,指向向量末尾元素之后
 rend;                   \\ 返回一个反向迭代器,指向向量起始袁术
 reverse;                \\ 颠倒元素的排序
 resize(n,x);            \\ 重新设置向量的大小n，新元素的值初始化为x
 size;                   \\ 返回向量的大小（元素个数）
 swap(vector);           \\ 交换两个向量的内容
 ```