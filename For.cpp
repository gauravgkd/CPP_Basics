#include <iostream>
using namespace std;
int main(){

  cout << "Enter a Number to Print its Table : ";
  int a;
  cin >> a;

  for (int i = 1; i <= 10; i++){
    cout << "The Table : "<< a << " * " << i <<" = " << a * i;
  }
  cout <<"\n";

return 0;
}


// For Loop Demonstration