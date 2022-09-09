#include<iostream>
using namespace std;

int main4() {
	int arr[] = { 11,21,31,41,51 };
	cout << sizeof(arr) / sizeof(arr[0]) << endl;

	int* p = arr;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++) {
		cout << *p << endl;
		p++;
	}

	system("pause");
	return 0;
}