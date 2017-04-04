#include <iostream>

using namespace std;

int main(){

  int t, a, b;
  cin >> t;
  for (t; t > 0; t--){
    cin >> a >> b;
    int c = a-b;
    if(c > 0) cout << '>' << endl;
    else if(c == 0) cout << '=' << endl;
    else cout << '<' << endl;

  }
  return 0;
}
