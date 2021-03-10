#include<iostream>
using namespace std;

double median(int array[], int capacity) {
  while (true) {
    int swapped = 0;
	  
    for (int i = 0; i < capacity - 1; i++) {
        if (array[i] > array[i + 1]) {
	int temp = array[i];
	array[i] = array[i + 1];
	array[i + 1] = temp;
	swapped = 1;
      }
    }

  if (swapped == 0)
      break;
}

if (capacity % 2 == 1) {	
return (array[capacity/ 2]);
}   else 
return (((double)(array[capacity/2] + array[capacity /2 - 1])) / 2);

}

int main()
{
int x[7] = { 3,23,31,11,7,40,29 };
int y[8] = { 5,20,1,44,31,27,55,37 };
cout << median(y, 8) << endl;
cout << median(x, 7) << endl;
	
return 0;
}
