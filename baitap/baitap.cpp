#include<iostream>
using namespace std;

void NHAP(int* arr, int n) {
	// nhap cac phan mang arr
	for (size_t i = 0; i < n; i++)
	{
		cout << "Nhap phan tu arr[" << i << "] = ";
		cin >> arr[i];
	}
}

int TIMMAX(int* arr, int n) {
	int max = arr[0];
	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int TIMMIN(int* arr, int n) {
	int min = arr[0];
	for (size_t i = 1; i < n; i++)
	{
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int main() {
	int n; // so phan tu cua mang
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	int* arr = new int[n]; // su dung mang dong
	NHAP(arr, n);
	int min = TIMMIN(arr, n); // goi ham tim gia tri min
	int max = TIMMAX(arr, n); // goi ham tim gia tri max
	cout << "\nMIN = " << min << "\n" << "MAX = " << max << endl;
	return 0;
}