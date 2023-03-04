/*16 matrix*/
#include <iostream>
using namespace std;
int main() {
  int arr[4][4];

  cout << "Enter 16 integers: " << endl;
  for (int i = 0; i < 4; i++) 
  {
    for (int j = 0; j < 4; j++) 
    {
      cin >> arr[i][j];
    }
  }

  cout << "The matrix is: " << endl;
  for (int i = 0; i < 4; i++) 
  {
    for (int j = 0; j < 4; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

