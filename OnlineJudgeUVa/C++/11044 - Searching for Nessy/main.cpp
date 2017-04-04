#include <iostream>
#include <math.h>

using namespace std;

int main() {

  int t, m, n;
  cin >> t;
  for(t; t > 0; t--){
    cin >> m >> n;
    m += -2;
    n += -2;
    m = (int) ceil(m/3.0);
    n = (int) ceil(n/3.0);
    cout << m*n << endl;
  }
    return 0;
}
