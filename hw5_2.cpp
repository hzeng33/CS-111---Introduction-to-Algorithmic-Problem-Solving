#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
 srand(time(0));

 int array[10][10];
 int r, c;
 int sum[10];

 cout << "The following are the random 3 digit integers" << endl;
 for (r = 0; r < 10; r++) {
   for (c = 0; c < 10; c++) {
     int randNum = rand() % 899 + 100;
     array[r][c] = randNum;
     cout << array[r][c] << " ";
   }
   cout << endl;
}

 for (c = 0; c < 10; c++) {
     sum[c] = 0;
}
 for (r = 0; r < 10; r++) {
   for (c = 0; c < 10; c++) 
     sum[c] += array[r][c];
   }
 cout << endl;

for (c = 0; c < 10; c++) {
  cout << "Column:" << c << "with sum of" << sum[c] << endl;
}
 cout << endl;

int highestsum = 0, max = 0;
	
for (c = 0; c < 10; c++) {
  if (sum[c] > highestsum) {
     highestsum = sum[c];
     max = c;
    }
 }
cout << "Column:" << max << "has the largest sum of" << highestsum << endl;
for (c = 0; c < 10; c++) {
 cout << array[c][max] << endl;
}
	
  return 0;
}
