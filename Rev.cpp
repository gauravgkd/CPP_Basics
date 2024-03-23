#include <iostream>
using namespace std;
int main(){
  int num;
  cout << "Enter a Number : ";
  cin >> num;

  int rev = 0;

  while (num > 0) {
    int digit = num % 10;
    rev = rev * 10 + digit;
    num = num / 10;
  }
  cout << "The Reverse of the Number Given is : "<<rev;
}