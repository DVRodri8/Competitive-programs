#include <iostream>
using namespace std;

int main(){
int ncasos, ntiendas, t;
cin >> ncasos;
while (ncasos > 0) {
  cin >> ntiendas;
  int tmen = 100, tma = 0;
  while (ntiendas > 0){
    cin >> t;
    if (t < tmen) tmen = t;
    if (t > tma) tma = t;
    ntiendas --;
  }
  cout << 2*(tma-tmen) << endl;
  ncasos--;
}
return 0;
}
