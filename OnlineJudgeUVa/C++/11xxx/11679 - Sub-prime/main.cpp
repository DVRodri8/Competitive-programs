#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n_banks, deventures, operation , operB , number;
  vector<int> banks;
  while(cin >> n_banks >> deventures && n_banks != 0 && deventures != 0){
    bool res = true;
    banks.clear();
    for(int i = 0; i < n_banks; i++){
      cin >> operation;
      banks.push_back(operation);
    }
    for(int i = 0; i < deventures; i++){
      cin >> operation >> operB >> number;
      banks[operation-1] -= number;
      banks[operB-1] += number;
      // cout << operation << ' ' << banks[operation-1] << ' ' << operB << ' ' << banks[operB-1] << endl;
    }
    for(int i = 0; i < n_banks; i++){
      if(banks[i] < 0) res = false;
    }
    if(res) cout << "S" << endl;
    else cout << "N" << endl;
  }


return 0;
}
