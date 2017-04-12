#include <iostream>
using namespace std;

int main(){
  int hight, weight, n, next_n, res;
  while(cin >> hight >> weight && hight != 0){
    cin >> n;
    res = hight - n;
    for(;weight > 1; weight--){
      cin >> next_n;
      if(n > next_n) res += n - next_n;
      n = next_n;
    }
    cout << res << endl;
  }


return 0;
}
