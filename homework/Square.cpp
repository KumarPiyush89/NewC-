/*Write a c++ program to accept sides of a square then calculate and print area and perimetere*/
#include <iostream>
using namespace std;
int main() {
  int side;
  cout << "Enter the side length of the square: ";
  cin >> side;

  int area = side * side;
  int perimeter = 4 * side;

  cout << "The area of the square is " << area << " and the perimeter is " << perimeter << "." << endl;

  return 0;
}

