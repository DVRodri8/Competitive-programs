#include <iostream>
#include <string>

using namespace std;

int main(){

  int n, x, res, c = 1;
  cin >> n;
  while(n!=0){
    res = 0;
    for(n; n>0 ; n--){
      cin >> x;
      if(x == 0) res--;
      else res++;
    }
    cout << "Case " << c << ": " << res << endl;
    c++;
    cin >> n;
  }
    cout << endl;

  return 0;
}
