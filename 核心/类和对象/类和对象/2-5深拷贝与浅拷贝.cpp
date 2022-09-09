#include<iostream>
using namespace std;

// 浅拷贝：简单的赋值拷贝操作
// 深拷贝：在堆区重新申请空间，进行拷贝操作

class Person25{
public:
	// 无参（默认）构造函数
	Person25() {
		cout << "无参构造函数" << endl;
	}

	// 有参构造函数
	Person25(int age, int height) {
		m_age = age;
		m_height = new int(height); // new的返回值是同类型的指针变量
		cout << "有参构造函数" << endl;
	}

	// 拷贝构造函数
	Person25(const Person25& p) {
		m_age = p.m_age;
		m_height = new int(*p.m_height); // 可以理解为：为*p.m_height（m_height是指针变量）这个值创建一个地址（申请一块内存）
		cout << "拷贝构造函数" << endl;
	}

	// 析构函数
	~Person25() {
		cout << "析构函数" << endl;
		if (m_height != NULL) {
			delete m_height;
		}
	}

public:
	int m_age;
	int* m_height;
};

void test251() {
	Person25 p1(18, 180);
	Person25 p2(p1);
	cout << "p1年龄：" << p1.m_age << "身高：" << *p1.m_height << endl;
	cout << "p2年龄：" << p2.m_age << "身高：" << *p2.m_height << endl; // p2.m_height是指针变量，是一个地址
}

int main25() {
	test251();
	system("pause");
	return 0;
}