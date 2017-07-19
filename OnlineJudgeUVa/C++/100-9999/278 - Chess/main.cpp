#include <iostream>
#include <math.h>

using namespace std;

int main(){

  char select;
  int cases, x, y;
  cin >> cases;
  for(;cases>0;cases--){
    cin >> select >> x >> y;
    if(select == 'r' || select == 'Q') cout << min(x,y) << endl;
    else if(select == 'K') cout << ceil(x/2.0) * ceil(y/2.0) << endl;
    else cout << ceil((x*y)/2.0) << endl;

  }


return 0;
}
