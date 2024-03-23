#include<iostream>
using namespace std;
int main(){
  int a,b,c,d;

  cout<<"Enter Four Numbers to find out the Average : ";
  cin>>a>>b>>c>>d;

  int avg = (a+b+c+d)/4;

  cout<<"The Avg of Four Numbers is : "<<avg;

  return 0;
}