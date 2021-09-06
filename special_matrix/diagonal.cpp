#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of square matrix :";
    cin>> size;
    int arr[size][size];

    for(int i=0 ;i<size;i++){
        for(int j=0;j<size;j++){

            if(i==j){
                cout<<"Enter element at index {[" << i+1 << "],[" << j+1 << "]} :";
                cin>> arr[i][j];
            }
            else{
                arr[i][j] =0;
            }

        }

    }


    for(int i=0 ;i<size;i++){
        for(int j=0 ;j<size;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
