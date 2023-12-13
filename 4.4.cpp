#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int t;
	for (int i = 0;i < size1;i++) list3[i] = list1[i];
	for (int i = 0;i < size2;i++) list3[size1 + i] = list2[i];
	cout << "The merged list is :";
	for (int j = 0;j < (size1 + size2) - 1;j++) {
		for (int k = 0;k < (size1 + size2) - 1;k++) {
			if (list3[k] > list3[k + 1]) {
				t = list3[k];
				list3[k] = list3[k + 1];
				list3[k + 1] = t;
			}
		}
	}
	for (int m = 0;m < (size1 + size2);m++)
		cout << list3[m] << '\t';
}
int main() {
	int size1, size2, size3;
	cout << "Enter size1:";
	cin >> size1;
	cout << "Enter list1:";
	int* list1 = new int[size1];
	for (int i = 0;i < size1;i++)
		cin >> list1[i];
	cout << "Enter size2:";
	cin >> size2;
	cout << "Enter list2:";
	int* list2 = new int[size2];
	for (int i = 0;i < size2;i++)
		cin >> list2[i];
	size3 = size1 + size2;
	int* list3 = new int[size3];
	merge(list1, size1, list2, size2, list3);
	delete[]list1;list1 = NULL;
	delete[]list2;list2 = NULL;
	delete[]list3;list3 = NULL;
	cout << endl;
	return 0;
}