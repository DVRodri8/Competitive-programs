#include <iostream>
#include <vector>
using namespace std;

bool is_in(vector<int> choosen, int n){
  bool res = false;
  for(int i=0; i < choosen.size(); i++){
    if(choosen[i] == n) res = true;
  }
  return res;
}

int main(){
  int n_curses, n_categories, curse, number_following_curses, requisite, lenght;
  vector<int> choosen;
  bool res;
  while(cin >> n_curses >> n_categories){
    choosen.clear();
    res = true;
    for(int i=0; i < n_curses; i++){
      cin >> curse;
      choosen.push_back(curse);
      lenght++;
    }
    for(int i=0; i<n_categories; i++){
      int acepted = 0;
      cin >> number_following_curses >> requisite;
      if(requisite > lenght){
        res = false;
        break;
      }
      for(int c=0; c < number_following_curses; c++){
        cin >> curse;
        if(is_in(choosen, curse)) acepted++;
      }
      if(acepted < requisite) res = false;
    }
    if(res) cout << "yes" << endl;
    else cout << "no" << endl;
  }


return 0;
}
