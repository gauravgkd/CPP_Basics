#include <iostream>
using namespace std;
int main(){
  cout << "Enter A String : ";
  string S1;
  cin >> S1;

  string S2 = " ";

  for (int i = S1.length()-1; i >=0; i--){
    S2 = S2 + S1[i];
  }
  cout << "The Reversed String is : " <<S2;
  return 0;
}