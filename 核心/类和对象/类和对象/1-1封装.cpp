#include<iostream>
#include<string>
using namespace std;

// C++面向对象三大特点：封装，集成，多态
// 对象有属性和行为（方法）

// 封装
// 语法： class 类名 { 权限:  属性 / 行为 };


// 封装意义一：设计类的时候，属性和行为一起，表现事物

// 示例1：封装一个圆类，属性：半径，行为：计算周长和面积
const double PI = 3.24;

class Circle {
public:

	// 属性：半径
	int m_r; // 半径

	// 行为：计算周长
	double calcPeri() {
		return 2 * PI * m_r;
	}

	// 行为：计算面积
	double calcArea() {
		return PI * m_r * m_r;
	}
};

// 示例2：封装一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

class Student {
public:
	string m_name;
	int m_id;

	void setName(string name) {
		m_name = name;
	}

	void setID(int id) {
		m_id = id;
	}

	void showStudent() {
		cout << "name = " << m_name << endl;
		cout << "id = " << m_id << endl;
	}
};

int main1() {

	Circle c1;
	c1.m_r = 9;

	cout << c1.calcPeri() << endl;
	cout << c1.calcArea() << endl;

	Student stu1;
	stu1.setName("张三");
	stu1.setID(21);
	stu1.showStudent();

	system("pause");
	return 0;
}