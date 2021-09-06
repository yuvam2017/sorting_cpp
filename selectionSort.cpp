// C++ program for implementation of selection sort
#include <bits/stdc++.h>
using namespace std;

template <typename T>
void selectionSort(T arr[], T n){
	int min_index,counter = 1;

	// Array before sorting
	cout << "Before Sorting : " << endl;
	for (int k=0;k<n;k++){cout << arr[k] << " ";}
	cout << endl<<endl;

	// main logic
	for (int i = 0; i < n-1; i++){
		min_index = i;
		for (int j = i+1; j < n; j++){
      if (arr[j] < arr[min_index]){
        min_index = j;
				// Swapping
      }
    }
		int temp = arr[min_index];
		arr[min_index] =  arr[i];
		arr[i] = temp;
		// Array after each Pass
    cout << "Pass " << counter << endl;
    for (int k=0;k<n;k++){cout << arr[k] << " ";}
    cout << endl;
		counter++;
	}

	// Array After sorting
	cout << "\n\nAfter Sorting : " << endl;
	for (int k=0;k<n;k++){cout << arr[k] << " ";}
	cout << endl;
}

int main() {
	int n;
	cout << "Enter the Size of Array : ";
	cin  >> n;

	int arr[n];
	cout << "Enter the elements of the array : ";
	for (int i = 0; i < n; i++) {
		cin >>arr[i];
	}
	cout << endl;

	selectionSort<int>(arr, n);

	return 0;
}
