#include<iostream>
using namespace std;

class C1 {
	int m_A; // 默认私有权限
};

struct C2 {
	int m_B; // 默认公共权限
};

int main2() {

	C1 c1;
	C2 c2;

	// c1.m_A = 10; // 错误，访问权限是私有的
	c2.m_B = 20; // 正确，访问权限是公共的

	cout << c2.m_B << endl;

	system("pause");
	return 0;

}