#include <iostream>

using namespace std;

int main(){

  int k,n,m,x,y;
  cin >> k;
  while(k > 0){
    cin >> n >> m;
    for(k; k > 0; k--){
      cin >> x >> y;
      if(x == n || y == m) cout << "divisa" << endl;
      else{
        if(y > m) cout << "N";
        else cout << "S";
        if(x > n) cout << "E" << endl;
        else cout << "O" << endl;
      }
    }
    cin >> k;
  }
  return 0;
}
