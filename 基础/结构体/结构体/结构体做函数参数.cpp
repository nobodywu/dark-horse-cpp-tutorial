#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

void printStu1(student stu) {
	stu.age = 28;
	cout << "�Ӻ����� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
}

void printStu2(student* stu) {
	stu->age = 29;
	cout << "�Ӻ����� ������" << stu->name << " ���䣺 " << stu->age << " ������" << stu->score << endl;
}

int main() {
	// �ṹ�����飬�����Ա�ǽṹ�壬struct����ʡ��
	struct student stu = {"����", 19, 67};
	printStu1(stu);
	cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;

	printStu2(&stu);
	cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;

	system("pause");
	return 0;

}