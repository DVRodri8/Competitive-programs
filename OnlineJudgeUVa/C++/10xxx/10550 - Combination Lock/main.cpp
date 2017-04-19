#include <iostream>

using namespace std;

int gradosD(int ini, int fin){
  int dif = fin - ini;
  if (dif > 0){
    return (40-dif)*9;
  }else if(dif < 0){
    return (-dif)*9;
  }
  return 0;
}

int gradosI(int ini, int fin){
  int dif = fin - ini;
  if (dif > 0){
    return (dif)*9;
  }else if(dif < 0){
    return (40 + dif)*9;
  }
  return 0;
}

int main(){
  int ini, p1, p2, p3;
  while(cin >> ini >> p1 >> p2 >> p3){

    if (ini == 0 && p1 == 0 && p2 == 0 && p3 == 0) break;

    int suma = 1080;
    suma += gradosD(ini, p1);
    suma += gradosI(p1, p2);
    suma += gradosD(p2, p3);
    cout << suma << '\n';
  }
  return 0;
}
