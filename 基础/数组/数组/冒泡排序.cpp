#include<iostream>
using namespace std;

int main3() {
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	int arr_length = sizeof(arr) / sizeof(arr[0]);
	int temp = 0;

	for (int i = 0; i < arr_length; i++) {
		for (int j = i + 1; j < arr_length; j++) {
			// arr[i] > arr[j], 依次将最小的元素放在最左边
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < arr_length; i++) {
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;

}