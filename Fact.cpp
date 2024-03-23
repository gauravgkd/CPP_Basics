#include <iostream>
using namespace std;
int main(){
  int num;
  cout << "Enter a Number : ";
  cin >> num;

  double fact = 1;

  for (int i = 1; i <= num; i++){
    fact = fact*i;
  }
  cout <<"Factorial of a Number is : "<< fact;
}