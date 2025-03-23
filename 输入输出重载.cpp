#include<iostream>
using namespace std;
class A
{
	friend ostream& operator<<(ostream& op, A& a);
	friend istream& operator>>(istream& ip, A& a);
public:
	A(int a,int b):m_a(a),m_b(b){}
private:
	int m_a;
	int m_b;

};
ostream & operator<<(ostream& op, A& a)
{
	cout << a.m_a << " " << a.m_b << endl;
	return op;
}
istream& operator>>(istream& ip, A& a)
{
	cin >> a.m_a;
	cin >> a.m_b;
	return ip;
}
int main()
{
	A a(1, 2);
	cout << "��ʼa��ֵΪ:" << a << endl;
	cout << "��a��ֵ" << endl;
	cin >> a;
	cout << "��ֵ��a��ֵΪ��" << a << endl;
}