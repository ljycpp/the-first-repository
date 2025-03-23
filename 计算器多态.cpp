//设置两个数的运算
#include<iostream>
using namespace std;
class AbstractCalculator
{
public:
	virtual int getRestult()//设置抽象的基类
	{
		return 0;
	}
private:
	int m_a;
	int m_b;
};
class addCalculator :public  AbstractCalculator
{
public:
	int getRestult()//设置抽象的基类
	{
		return m_a + m_b;
	}

};
int main()
{
	AbstractCalculator* a = new addCalculator;
	a->m_a = 10;
	a->m_b = 20;
	cout << "m_a" << "+" << "m_b =" << a->getRestult();
}