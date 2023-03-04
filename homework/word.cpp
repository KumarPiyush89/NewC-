/*write a c++ program to accept a wordby input then check and display how many letters the word contain*/

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string word;
  cout << "Enter a word: ";
  cin >> word;

  cout << "The word '" << word << "' has " << word.length() << " letters." << endl;
  return 0;
}
