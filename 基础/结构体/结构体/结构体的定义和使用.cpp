#include<iostream>
#include<string>
using namespace std;

struct student {
	string name;
	int age;
	int score;
}stu3; // �ṹ�������������3

int main1() {
	// ����ṹ�����ʱ��ʹ�ùؼ���struct
	// �����ṹ�����ʱ���ؼ���struct����ʡ��
	// �ṹ�������������1������ʡ��struct
	struct student stu1;
	stu1.name = "tom";
	stu1.age = 17;
	stu1.score = 89;
	cout << "������" << stu1.name << " ���䣺" << stu1.age << " ������" << stu1.score << endl;

	// �ṹ�������������2������ʡ��struct
	struct student stu2 = {"whale", 19, 79};
	cout << "������" << stu2.name << " ���䣺" << stu2.age << " ������" << stu2.score << endl;

	// �ṹ�������������3���ڶ���ṹ��ʱ������stu3
	stu3 = { "cat", 21, 99 };
	cout << "������" << stu3.name << " ���䣺" << stu3.age << " ������" << stu3.score << endl;

	system("pause");
	return 0;

}