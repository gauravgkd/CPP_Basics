#include <iostream>
using namespace std;
int main()
{
  double r;
  double l, b;
  double a;
  int Choice;
  double area;

  cout << "Enter Choice 1 for Area of Circle." << endl;
  cout << "Enter Choice 2 for Area of Rectangle." << endl;
  cout << "Enter Choice 3 for Area of Square." << endl;
  cout << "Enter Choice : ";
  cin >> Choice;

  switch (Choice)
  {
  case 1:
    cout << "Enter Radius of Circle : ";
    cin >> r;
    area = 3.142 * r * r;
    cout << "Area of the Circle is : " << area;
    break;

  case 2:
    cout << "Enter Length of Rectangle : ";
    cin >> l;
    cout << "Enter Breadth of Rectangle : ";
    cin >> b;
    area = l * b;
    cout << "Area of the Rectangle is : " << area;
    break;

  case 3:
    cout << "Enter Side of Square : ";
    cin >> a;
    area = a * a;
    cout << "Area of the Square is : " << area;
    break;

  default:
    cout << "Invalid Choice ";
    break;
  }
}