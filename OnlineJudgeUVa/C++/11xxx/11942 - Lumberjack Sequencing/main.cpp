#include <iostream>
using namespace std;

int main(){
  cout << "Lumberjacks:\n";
  short n, actual, next;
  cin >> n;
  for(short i = 0; i < n; i++){
    bool res = true;
    cin >> actual >> next;
    if(actual < next){
      for(short c = 0; c < 8; c++){
        actual = next;
        cin >> next;
        if(actual > next) res = false;
      }
    }else{
      for(short c = 0; c < 8; c++){
        actual = next;
        cin >> next;
        if(actual < next) res = false;
      }
    }
    if(res) cout << "Ordered\n";
    else cout << "Unordered\n";
  }


return 0;
}
