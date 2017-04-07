#include <iostream>
using namespace std;

unsigned int ciclo(unsigned int n){
  if(n == 1) return 1;
  if(n & 1) return 1+ciclo(3*n+1);
  else return 1+ciclo(n/2);
}

int main(){
  unsigned int i, j;
  while(cin >> i >> j){
    unsigned int mayor = max(i, j), menor = min(i, j);
    cout << i << ' ' << j << ' ';
    unsigned int res = 0;
    while(menor <= mayor){
      // cout << res << ' ' << ciclo(menor) << endl;
      res = max(res, ciclo(menor));
      menor++;
    }
    cout << res << endl;
  }

return 0;
}
