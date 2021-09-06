#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T arr[],T n){
  int counter = 1;
  cout << "Before Sorting "<<endl;
  for (int k=0;k<n;k++){cout << arr[k]<<" ";}
  cout << endl;
  cout << endl;
  // Main logic
  // For the arr[] = {5,2,8}
  for (int i = 1; i < n; i++){
      int key = arr[i]; // key = 2
      int j = i - 1; // j = 0
      while (j >= 0 && arr[j] > key){ //arr[0] = 5 > arr[1] = 2;
          arr[j + 1] = arr[j]; // arr[1] = arr[0] ; arr[1] = 2;
          j = j - 1; // j = -1;
      }
      cout << "Pass " << counter << endl;
      for(int i=0;i<n;i++){cout << arr[i] << " ";}
      counter++;
      cout <<endl;
      arr[j + 1] = key; //arr[0] = key;
  }

  cout << "\n\nAfter Sorting" << endl;
  for(int i=0;i<n;i++){cout << arr[i] << " ";}
  cout << endl;
}

int main(){

  int n;
  cout << "Enter the size of array : ";
  cin >> n;

  int arr[n];
  cout << "Enter the Elements : ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << endl;

  insertionSort<int>(arr,n);

}
