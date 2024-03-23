#include <iostream>
using namespace std;
int main(){
  int num;
  cout<<"Enter a Number : ";
  cin>>num;

  if (num > 0){cout<<"The Number is Positive.";}
  else if (num < 0){cout<<"The Number is Negative.";}
  else {cout<<"The Number is Equal to Zero.";}

  return 0;
}