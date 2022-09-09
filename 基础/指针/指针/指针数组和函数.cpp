#include<iostream>
using namespace std;

// 形参int* p也可以为int p[]
void bubbleSort(int* p, int len) {
	int temp = 0;
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (p[i] > p[j]) {
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;

			}
		}
	}
}

int main() {
	int arr[] = { 5,2,7,1,9,3,6 };
	int len = sizeof(arr) / sizeof(arr[0]);

	// 传地址arr，直接在arr内进行排序
	bubbleSort(arr, len);

	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}