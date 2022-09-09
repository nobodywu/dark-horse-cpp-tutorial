#include<iostream>
using namespace std;

// 构造函数两种分类：
// 按参数分为：有参构造和无参构造
// 按类型分为：普通构造和拷贝构造

class Person22 {
public:

	Person22() {
		m_age = 10;
		cout << "Person21 无参构造函数" << endl;
	}

	Person22(int age) {
		m_age = age;
		cout << "Person22 有参构造函数" << endl;
	}

	Person22(const Person22& p) {
		m_age = p.m_age;
		cout << "Person22 拷贝构造函数" << endl;
	}

	~Person22() {
		cout << "Person22 析构函数" << endl;
	}

	int getAge() {
		return m_age;
	}

private:
	int m_age;
};

void test02() {
	// 初始化方法1
	// 创建对象时调用有参构造函数
	Person22 p1(11);
	cout << "p1 age: " << p1.getAge() << endl;
	// 创建对象时调用无参构造函数
	// 注意1：不能加括号Person22 p2()错误，编译器认为是函数声明
	Person22 p2;
	cout << "p2 age: " << p2.getAge() << endl;

	// 初始化方法2 显示调用
	Person22 p3 = Person22(13);
	cout << "p3 age: " << p3.getAge() << endl;
	Person22 p4 = Person22(p1);
	cout << "p4 age: " << p4.getAge() << endl;

	// 初始化方法3 隐式转换法
	Person22 p5 = 15;
	cout << "p5 age: " << p5.getAge() << endl;
	Person22 p6 = p1;
	cout << "p6 age: " << p6.getAge() << endl;

	// 注意2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明 ？不太懂
	// Person22 p7(p1);
}

int main22() {
	test02();
	system("pause");
	return 0;
}