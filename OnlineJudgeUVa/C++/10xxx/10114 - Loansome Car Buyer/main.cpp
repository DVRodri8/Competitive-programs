#include <iostream>
using namespace std;

int main(){
  int meses, casos, mes1, mes2, mesA = 0;
  double prestamo, base, porcentage, valor, cada_mes;
  while(cin >> meses >> base >> prestamo >> casos && meses > 0){
    // cout << meses << ' ' << base << ' ' << prestamo << ' ' << casos << endl;
    valor = prestamo + base;
    cada_mes = prestamo / meses;
    bool bandera = true;
    mesA = 0;
    cin >> mes1 >> porcentage;
    for(casos = casos;casos > 0; casos--){
      if(casos!=1) cin >> mes2;
      else mes2 = meses;
      if(bandera){
        while(mesA < mes2){
          valor = valor * (1-porcentage);
          // cout << valor << ' ' << prestamo << endl;
          if(valor > prestamo){
            cout << mesA << " month";
            if(mesA == 1) cout << endl;
            else cout << "s\n";
            bandera = false;
            break;
          }
          // cout << mesA << endl;
          prestamo -= cada_mes;
          mesA ++;
        }
      }
      if(casos != 1)cin >> porcentage;
    }
    if(bandera) cout << meses << " months\n";
  }
  // cout << meses << ' ' << base << ' ' << prestamo << ' ' << casos << endl;


return 0;
}
