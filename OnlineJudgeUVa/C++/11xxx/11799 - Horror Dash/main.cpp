#include <iostream>
using namespace std;

int main(){
  short casos, n, siguiente, mayor;
  cin >> casos;
  for(short i = 1; i <= casos; i++){
    cin >> n;
    cin >> mayor;
    for(short c=1; c < n; c++){
      cin >> siguiente;
      mayor = max(mayor, siguiente);
    }
    cout << "Case " << i << ": " << mayor << endl;
  }


return 0;
}
