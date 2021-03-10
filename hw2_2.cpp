#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many GB and MB are there in KB, and how many KB remains?" 
<< "\nNow please enter a number of KB:";
    cin >> n;
    int g,m,k; // GB, MB, KB remains.

    g = n / 1000000;
    n = n % 1000000;
    m = n / 1000;
    k = n % 1000; 

    cout << "GB:" << g << "\nMB:" << m << "\nKB remains:" << k << endl;
    
    return 0;
}
