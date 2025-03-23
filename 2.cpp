#include <iostream>
using namespace std;

class A
{
private:
	int x, y;
public:
	A(int x1 = 0, int y1 = 0)
	{
		x = x1;
		y = y1;
	}
	friend bool operator>(const A& a1, const A& a2);
	friend bool operator<(const A& a1, const A& a2);
	friend bool operator==(const A& a1, const A& a2);
};
bool operator>(const A& a1, const A& a2)
{
	return a1.x > a2.x;
}
bool operator<(const A& a1, const A& a2)
{
	return a1.x < a2.x;
}
bool operator==(const A& a1, const A& a2)
{
	return a1.y == a2.y;
}
int main()
{
	A a1(1, 2);
	A a2(3, 2);
	if (a1 > a2)
	{
		cout << "a1��x����a2��x" << endl;
	}
	else if (a1 < a2)
	{
		cout << "a1��xС��a2��x" << endl;
	}
	if (a1 == a2)
	{
		cout << "a1��y������a2��y" << endl;
	}
	return 0;
}