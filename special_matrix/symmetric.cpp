#include <iostream>
using namespace std;

int main()
{
	int N;
	bool check = true;

	cout << "Enter the size of square matrix : ";
	cin >> N;
	cout << endl;
	
	cout <<"\nEnter the Elements : "<<endl;
	int arr[N][N];
	for (int i=0;i< N;i++){
		for (int j=0;j< N;j++) {
			cin >> arr[i][j];
		}
	}
	
	cout<<"\nThe matrix is "<<endl;
	for (int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (arr[i][j] != arr[j][i]){
				check = false;
				cout <<"It's a Antisymmetric Matrix";
				break;
			}

		}
		if(check == false) {
			break;
		}
	}
	
	if(check == true){		
	cout << "It's a Symmetric Matrix";
	}
	
	return 0;
}
