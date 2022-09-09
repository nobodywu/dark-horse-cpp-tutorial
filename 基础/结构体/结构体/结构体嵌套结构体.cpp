#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

struct teacher {
	int id;
	string name;
	int age;
	struct student stu; // struct 可以省略
};

int main4() {
	// 结构体数组，数组成员是结构体，struct可以省略
	struct teacher t1;
	t1.id = 1111;
	t1.name = "janny";
	t1.age = 45;
	t1.stu.name = "tom";
	t1.stu.age = 17;
	t1.stu.score = 99;

	cout << "教师 职工编号： " << t1.id << " 姓名： " << t1.name << " 年龄： " << t1.age << endl;
	cout << "辅导学员 姓名： " << t1.stu.name << " 年龄：" << t1.stu.age << " 考试分数： " << t1.stu.score << endl;

	system("pause");
	return 0;
}