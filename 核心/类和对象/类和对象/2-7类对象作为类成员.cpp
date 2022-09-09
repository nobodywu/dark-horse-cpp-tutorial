#include<iostream>
using namespace std;

// C++类中的成员可以是另一个类的对象，该成员为对象成员

class Phone27 {
public:
	Phone27(string name) {
		m_PhoneName = name;
		cout << "Phone的有参构造函数" << endl;
	}

	~Phone27() {
		cout << "Phone的析构函数" << endl;
	}

public:
	string m_PhoneName;
};


class Person27 {
public:
	// Phone27没有无参（默认）构造函数，因此定义Person27的无参（默认）构造时会报错
	//Person27() {
	//	cout << "无参构造" << endl;
	//}

	// 初始化列表可以告诉编译器调用
	Person27(string name, string pName):m_name(name),m_phone(pName) {
		cout << "Person的有参构造" << endl;
	}

	~Person27() {
		cout << "Person的析构函数" << endl;
	}

	void playGame() {
		cout << m_name << "使用" << m_phone.m_PhoneName << "牌手机" << endl;
	}

public:
	string m_name;
	Phone27 m_phone;

};

void test271() {
	// 当类中成员是其他类对象时，我们称该成员为对象成员
	// 构造的顺序是：先调用对象成员的构造，再调用本类构造
	// 析构的顺序与构造相反
	Person27 person("张三", "小米");
	person.playGame();
}

int main27() {
	test271();
	system("pause");
	return 0;

}