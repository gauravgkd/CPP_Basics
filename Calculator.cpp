#include <iostream>
using namespace std;
int main(){
  int num1,num2,op;
  cout << "Enter first Number : ";
  cin >> num1;

  cout << "Enter 1 for sum, 2 for sub, 3 for multiplication, 4 for division : ";
  cin >> op;

  cout << "Enter Second Number : ";
  cin >>num2;

  switch (op)
  {
  case 1:
    cout << "Sum of "<< num1 << " and " << num2 << " is " << num1 + num2;
    break;
  case 2:
    cout << "Sum of "<< num1 << " and " << num2 << " is " << num1 - num2;
    break;
  case 3:
    cout << "Sum of "<< num1 << " and " << num2 << " is " << num1 * num2;
    break;
  case 4:
    if (num2 != 0){cout << "Sum of "<< num1 << " and " << num2 << " is " << num1 / num2;}
    else {cout << "Division by zero is Infinite";}
    break;
  default:
    cout << "Invalid Choice !!!";
    break;
  }
}