#include <iostream>
using namespace std;

int main(){
  int n, w, y1, y2, diff_actual, diff;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> w;
    bool res = true;
    for(int c=0; c < w; c++){
      cin >> y1 >> y2;
      if(c == 0) diff = y1 - y2;
      else{
        diff_actual = y1 - y2;
        if(diff_actual != diff && diff_actual != -diff) res = false;
      }
    }
    if(res) cout << "yes" << endl;
    else cout << "no" << endl;
    if(i != n-1) cout << endl;
  }


return 0;
}
