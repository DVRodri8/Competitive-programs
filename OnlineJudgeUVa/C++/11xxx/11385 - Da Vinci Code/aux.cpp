#include <iostream>
using namespace std;

int main(){

  long fib=2, last_fib=1;
  cout << last_fib << ", " << fib << ", ";
  while(fib < 2147483648){
    fib += last_fib;
    last_fib = fib - last_fib;
    cout << fib << ", ";
  }

return 0;
}
