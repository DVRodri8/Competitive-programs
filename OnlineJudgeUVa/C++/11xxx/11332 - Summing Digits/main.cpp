#include <iostream>
using namespace std;

int sum_g(unsigned int f){
  float copy = f;
  int sum = 0;
  if(f < 10) return f;
  else{
    while(copy > 0){
      sum += f % 10;
      f /= 10;
      copy /= 10;
    }
    return sum_g(sum);
  }
}

int main(){
  unsigned int n;
  while(cin >> n && n!= 0){
    cout << sum_g(n) << endl;
  }
return 0;
}
