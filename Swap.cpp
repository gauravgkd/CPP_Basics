#include <iostream>
using namespace std;

int main()
{
  cout << "\nThis is Simple Swapping of Two Numbers !!";
  cout << "\nEnter a first Number : ";
  int first;
  cin >> first;

  cout << "Enter a second Number : ";
  int second;
  cin >> second;

  cout << "The Numbers Before Swapping :" << first << " & " << second;

  int temp;
  temp = first;
  first = second;
  second = temp;

  cout << "\nThe Numbers After Swapping :" << first << " & " << second;

  return 0;
}
