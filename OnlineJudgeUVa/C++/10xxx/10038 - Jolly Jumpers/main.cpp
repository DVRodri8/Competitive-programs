#include <iostream>
#include <set>

using namespace std;

int main(){

  int n, actual, next;
  set<int> myset;
  while(cin >> n){
    myset.clear();
    cin >> actual;
    for(int i=1; i < n; i++){
      cin >> next;
      myset.insert(max(actual, next)-min(actual, next));
      // cout << max(actual, next)-min(actual, next) << endl;
      actual = next;
    }
    bool res = true;
    for(int i=1; i<n; i++){
      if(myset.find(i) == myset.end()){
         res = false;
         break;
      }
    }
    if(res) cout << "Jolly\n";
    else cout << "Not jolly\n";
  }

  return 0;
}
