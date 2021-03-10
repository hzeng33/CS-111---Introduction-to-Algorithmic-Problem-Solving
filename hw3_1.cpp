#include <iostream>
using namespace std;

int main ()
{
  int firstNum =0, secondNum = 0;
  cout<< "Enter two numbers and press ENTER:";
  cin >> firstNum >> secondNum;

  while(firstNum <= 0 || secondNum <= 0){
   cout << "Enter another two bigger numbers:";
   cin >> firstNum >> secondNum;
}

   int gcd;
  for (int d= 1; d <= firstNum && d <= secondNum; d++)
   if (firstNum % d == 0 && secondNum % d == 0){
      gcd = d;
  }
   cout << gcd << endl;
 

  return 0;
 }
