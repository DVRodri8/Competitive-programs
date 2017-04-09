#include <iostream>
using namespace std;

int main(){
  short cases, calls, duration, J, M;
  cin >> cases;
  for(short i = 1; i <= cases; i++){
    J = 0;
    M = 0;
    cin >> calls;
    for(short c = 0; c < calls; c++){
      cin >> duration;
      M += (duration/30) * 10 + 10;
      J += (duration/60) * 15 + 15;
    }
    if(M < J) cout << "Case " << i << ": Mile " << M << endl;
    else if(M > J) cout << "Case " << i << ": Juice " << J << endl;
    else cout << "Case " << i << ": Mile Juice " << M << endl;
  }


return 0;
}
