#include <iostream>
using namespace std;

int main(){

  int t, n;
  cin >> t;
  for(t; t>0; t--){
    cin >> n;
    if(n >= 0){
      n = 315*n + 62;
      n = n/10;
      n = abs(n%10);
    }else{
      n = 315*n + 36962;
      n = n/10;
      n = abs(n%10);
    }
    cout << n << endl;

  }

  return 0;
}
