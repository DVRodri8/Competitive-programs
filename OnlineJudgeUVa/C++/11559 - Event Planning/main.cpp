#include <iostream>
#include <climits>
using namespace std;

int main(){
  long personas, presupuesto, hoteles, opciones, camas, precio, mejor_precio = INT_MAX , mas_camas = 0;
  while(cin >> personas >> presupuesto >> hoteles >> opciones){
    bool res = false;
    mejor_precio = INT_MAX;
    for(int i = 0; i < hoteles; i++){
      cin >> precio;
      mas_camas = 0;
      for(int c = 0; c < opciones; c++){
        cin >> camas;
        mas_camas = max(mas_camas, camas);

        if(precio*personas <= presupuesto && mas_camas >= personas){
           res = true;
           mejor_precio = min(precio, mejor_precio);
         }
      }
    }
    if(res) cout << mejor_precio * personas << endl;
    else cout << "stay home" << endl;
  }
return 0;
}
