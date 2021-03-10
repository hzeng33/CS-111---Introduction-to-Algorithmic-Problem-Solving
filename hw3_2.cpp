#include <iostream>
using namespace std;

int main()
{
  int row = 0;
  cout << "Input a number of row (must be an odd number):";
  cin >> row;

  int a, b, s;
  for ( a = 1; a <= row; a++) {
    for (b = row-a; b >= 1; b--) {
	cout << " ";
  }
    for (s = 1; s <= 2 * a - 1; s++) {
	cout << "*";
  }
 cout << endl;
}

for (a = row-1; a >=1; a--) {
    for (b = 1; b <= row - a; b++) {
	cout << " ";
     }
   for (s = 1; s <= 2 * a - 1; s++) {
	cout << "*";
     } 
 cout << endl;
}
   
 return 0;
}

