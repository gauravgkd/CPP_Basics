#include <iostream>
using namespace std;

bool isPrime(int num){
  if (num <= 1) return false;                // Condition 1
  for (int i=2; i*i <= num; i++){            // Condition 2
    if (num % i == 0) return false;
  }
  return true;                              // True Condition
}
int main(){
  cout <<"Enter a Number : ";
  int num;
  cin >> num;

  if (isPrime(num)) cout << num <<" is a Prime Number.";
  else cout << num << " is not a Prime Number.";


  return 0;
}