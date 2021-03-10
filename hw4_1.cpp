#include <iostream>
#include <cmath>
using namespace std;

int fib(int n){
   if (n == 1 || n==2 )
      return (1);
  
  return (fib(n-1)+fib(n-2));
}

bool isPrime (int n){
  if (n==1)
    return (false);
  
  for (int j=2;j<=sqrt(n);j++){
     if (n % j ==0)
        return (false);
  }

  return (true);
}

int main(){
int n=1;
int count =0;
while (count <= 5){
   if (isPrime(fib(n))){
    cout << fib(n)<<endl;
    count++;
}
n++;
}

return 0;
}
