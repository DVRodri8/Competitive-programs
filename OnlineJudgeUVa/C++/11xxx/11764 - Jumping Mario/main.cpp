#include <iostream>
using namespace std;

int main(){
  short high, low, cases, walls ,actual_h, next_h;
  cin >> cases;
  for(int i=1; i <= cases; i++){
    cin >> walls;
    high = 0;
    low = 0;
    cin >> actual_h;
    for(int c=1; c < walls; c++){
      cin >> next_h;
      if(actual_h - next_h > 0) low++;
      else if(actual_h - next_h < 0) high++;
      actual_h = next_h;
    }
    cout << "Case " << i << ": " << high << ' ' << low << endl;;
  }



return 0;
}
