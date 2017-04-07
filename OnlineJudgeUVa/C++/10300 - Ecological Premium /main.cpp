#include <iostream>
using namespace std;

int main(){
  unsigned long n, farmers, area, animals, eco_friendly;
  cin >> n;
  for(int i = 0; i < n; i++){
    unsigned long res = 0;
    cin >> farmers;
    for(int c = 0; c < farmers; c++){
      cin >> area >> animals >> eco_friendly;
      res += area*eco_friendly;
    }
    cout << res << endl;
  }
return 0;
}
