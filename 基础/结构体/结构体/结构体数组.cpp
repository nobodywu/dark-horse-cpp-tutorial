#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

int main2() {
	// �ṹ�����飬�����Ա�ǽṹ�壬struct����ʡ��
	struct student arr[3] = {
		{"����", 19, 67},
		{"����", 17, 88},
		{"������", 10, 45}
	};

	for (int i = 0; i < 3; i++) {
		cout << "������" << arr[i].name << " ���䣺" << arr[i].age << " ������" << arr[i].score << endl;
	}

	system("pause");
	return 0;

}