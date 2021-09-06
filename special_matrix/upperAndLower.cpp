#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,column;
    cout<<"Enter the row : ";
  cin>>row;
  cout <<"\nEnter the coulmn : ";
  cin >> column;
  int matrix[row][column];
  cout<<"\nEnter matrix elements:\n";
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<column;j++)
    {
      cin>>matrix[i][j];
    }
  }
  cout<<endl;
  
  
  // Lower Matrix
  cout << "Lower triangular matrix is: \n";
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      if (i < j)
      {
        cout << "0" << " ";
      }
      else
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  // Upper Triangular Matrix
  cout << "Upper Triangular matrix is: \n";
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < column; j++)
    {
      if (i > j)
      {
        cout << "0" << " ";
      }
      else
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
