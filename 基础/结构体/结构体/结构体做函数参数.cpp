#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

void printStu1(student stu) {
	stu.age = 28;
	cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
}

void printStu2(student* stu) {
	stu->age = 29;
	cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;
}

int main() {
	// 结构体数组，数组成员是结构体，struct可以省略
	struct student stu = {"张三", 19, 67};
	printStu1(stu);
	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;

	printStu2(&stu);
	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;

	system("pause");
	return 0;

}