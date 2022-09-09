#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

int main2() {
	// 结构体数组，数组成员是结构体，struct可以省略
	struct student arr[3] = {
		{"张三", 19, 67},
		{"李四", 17, 88},
		{"王麻子", 10, 45}
	};

	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << arr[i].name << " 年龄：" << arr[i].age << " 分数：" << arr[i].score << endl;
	}

	system("pause");
	return 0;

}