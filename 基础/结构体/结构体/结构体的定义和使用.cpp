#include<iostream>
#include<string>
using namespace std;

struct student {
	string name;
	int age;
	int score;
}stu3; // 结构体变量创建方法3

int main1() {
	// 定义结构体变量时，使用关键字struct
	// 创建结构体变量时，关键字struct可以省略
	// 结构体变量创建方法1，可以省略struct
	struct student stu1;
	stu1.name = "tom";
	stu1.age = 17;
	stu1.score = 89;
	cout << "姓名：" << stu1.name << " 年龄：" << stu1.age << " 分数：" << stu1.score << endl;

	// 结构体变量创建方法2，可以省略struct
	struct student stu2 = {"whale", 19, 79};
	cout << "姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << endl;

	// 结构体变量创建方法3，在定义结构体时创建了stu3
	stu3 = { "cat", 21, 99 };
	cout << "姓名：" << stu3.name << " 年龄：" << stu3.age << " 分数：" << stu3.score << endl;

	system("pause");
	return 0;

}