#include <iostream>
using namespace std;

int main(){
  short a, b, rute1, rute2, maxim, minim;
  while(cin >> a >> b && a != -1){
    maxim = max(a,b);
    minim = min(a,b);
    rute1 = maxim - minim;
    rute2 = (99-maxim) + minim + 1;
    cout << min(rute1 , rute2) << endl;
  }
return 0;
}
