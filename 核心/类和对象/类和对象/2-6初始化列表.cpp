#include<iostream>
using namespace std;

// 语法：有参构造函数(参数1, 参数2, 参数3):属性1(参数1), 属性2(参数2), 属性3(参数3){}

class Person26 {
public:
	// 无参（默认）构造函数
	Person26() {
		cout << "无参构造函数" << endl;
	}

	// 有参构造函数，传统方式初始化
	//Person26(int a, int b, int c) {
	//	m_A = a;
	//	m_B = b;
	//	m_C = c;
	//	cout << "有参构造函数，传统方式初始化" << endl;
	//}

	// 有参构造函数，列表方式初始化
	Person26(int a, int b, int c):m_A(a),m_B(b),m_C(c){
		cout << "有参构造函数，列表方式初始化" << endl;
	}

public:
	int m_A;
	int m_B;
	int m_C;
};

void test261() {
	int a = 2;
	int b = 4;
	int c = 6;

	Person26 p(a, b, c);
	cout << p.m_A << endl;
	cout << p.m_B << endl;
	cout << p.m_C << endl;
}

int main26() {
	test261();
	system("pause");
	return 0;
}