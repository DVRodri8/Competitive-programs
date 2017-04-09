#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int main(){
  short cases, maxim, actual;
  string web;
  queue<pair<string,short>> data;

  cin >> cases;
  for(short i=1; i <= cases; i++){
    maxim = 0;
    cout << "Case #" << i << ":\n";
    for(short c=0; c < 10; c++){
      cin >> web >> actual;
      maxim = max(maxim, actual);
      data.push(make_pair(web, actual));
    }
    for(short j=0; j < 10; j++){
      pair<string,short> ele = data.front();
      data.pop();
      if(ele.second == maxim) cout << ele.first << endl;
    }

  }

return 0;
}
