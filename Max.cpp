#include <iostream>
using namespace std;
int main(){
  int a,b,c;
  cout << "Enter Three Numbers : ";
  cin >>a>>b>>c;

  if (a > b && a > c){cout<<"The Largest Number is : "<<a;}
  else if(b > a && b > c){cout<<"The Largest Number is : "<<b;}
  else {cout<<"The Largest Number is : "<<c;}

  return 0;
}