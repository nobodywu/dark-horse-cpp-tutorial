#include<iostream>
using namespace std;

int* func() {
	int* p = new int(11);
	return p;
}

int main() {

	int* a;
	a = func();

	cout << *a << endl;

	delete a;
	// �����������ѱ��ͷţ��ڴ治�ɷ��ʣ����ᱨ��������ֹ
	// cout << *a << endl;

	// ������������
	// ʹ��new[]Ϊ��������ڴ��ַ
	int* arr = new int[10];

	for (int i = 0; i < 10; i++) {
		arr[i] = i + 100;
	};

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	};

	// �ͷ����飬delete��Ҫ��[]
	delete[] arr;

	system("pause");
	return 0;

}