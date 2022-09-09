#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

int main3() {
	// 结构体数组，数组成员是结构体，struct可以省略
	struct student stu = {"张三", 19, 67};
	struct student* p = &stu;

	// 通过 -> 操作符访问结构体成员
    cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;

	system("pause");
	return 0;
}