#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

int main3() {
	// �ṹ�����飬�����Ա�ǽṹ�壬struct����ʡ��
	struct student stu = {"����", 19, 67};
	struct student* p = &stu;

	// ͨ�� -> ���������ʽṹ���Ա
    cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;

	system("pause");
	return 0;
}