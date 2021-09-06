	#include<iostream>

	using namespace std;

	template<typename T>
	void bubbleSort(T arr[], int n)
	{
		int counter=1;
		cout<<"Before Sorting : "<<endl;
		for (int l=0;l<n;l++){cout << arr[l] << " ";}
		cout << endl << endl;

		// Main logic
		for(int i=0;i<n-1;++i){
			for(int j=0;j<n-i-1;++j){
				if(arr[j]>arr[j+1]){
					// Swapping of the elements
					T temp = arr[j+1];
					arr[j+1] = arr[j];
					arr[j] = temp;
				}
			}

			cout<<"Pass " << counter <<endl;
			for (int l=0;l<n;l++){cout << arr[l] << " ";}
			counter++;
			cout << endl;
		}

		cout<<"\n\nAfter Sorting : "<<endl;
		for (int l=0;l<n;l++){cout << arr[l] << " ";}
		cout << endl;
	}

	int main()
	{
			int n;
			cout << "Enter the size of Array : ";
			cin >> n;

			int arr[n];
			cout << "Enter the elements of Array : ";
			for (int k=0;k<n;k++){
				cin >> arr[k];
			}
			cout << endl;

			bubbleSort<int>(arr, n);

			return 0;
	}
