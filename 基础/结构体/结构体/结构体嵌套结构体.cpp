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
	struct student stu; // struct ����ʡ��
};

int main4() {
	// �ṹ�����飬�����Ա�ǽṹ�壬struct����ʡ��
	struct teacher t1;
	t1.id = 1111;
	t1.name = "janny";
	t1.age = 45;
	t1.stu.name = "tom";
	t1.stu.age = 17;
	t1.stu.score = 99;

	cout << "��ʦ ְ����ţ� " << t1.id << " ������ " << t1.name << " ���䣺 " << t1.age << endl;
	cout << "����ѧԱ ������ " << t1.stu.name << " ���䣺" << t1.stu.age << " ���Է����� " << t1.stu.score << endl;

	system("pause");
	return 0;
}