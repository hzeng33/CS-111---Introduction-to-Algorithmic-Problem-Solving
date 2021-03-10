#include <iostream>
using namespace std;

int max3 (int x, int y, int z){
int largestNum;
if (z>y && z>x){
  largestNum = z;
} else if (y>x && y>z){
  largestNum = y;
} else if (x>y && x>z){
  largestNum =x;
} 
  return (largestNum);
}

int main (){
int x, y, z;
cout << "Please enter 3 numbers:" << endl;
cin >> x >> y>>z;

cout << max3 (x, y, z) << endl;
 return 0;

}
