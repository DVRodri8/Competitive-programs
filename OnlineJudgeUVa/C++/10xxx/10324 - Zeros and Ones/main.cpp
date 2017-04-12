#include <iostream>
#include <string>
using namespace std;

int main(){

  string word;
  int pos_i,pos_j, cases, maxi, n_counter=1;
  while(cin >> word >> cases){
    cout << "Case " << n_counter << ':' << endl;
    for(int i = 0; i < cases; i++){
      cin >> pos_i >> pos_j;
      bool res = true;
      maxi = max(pos_i, pos_j);
      for(int c = min(pos_i, pos_j); c < maxi; c++) if(word[c] != word[maxi]) res = false;
      if(res) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
    n_counter++;
  }

return 0;
}
