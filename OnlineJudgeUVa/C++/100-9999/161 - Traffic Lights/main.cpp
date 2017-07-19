#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersectionOf(vector<int> a, vector<int> b){

  vector<int> result;

  for(int i = 0; i < a.size(); i++){
    for(int c = 0; c < b.size(); c++){
      if(a[i] == b[c]){
        result.push_back(a[i]);
        break;
      }
    }
  }
  return result;
}

void imp(vector<int> a){
  for(int i = 0; i < a.size(); i++){
    cout << a[i] << ' ';
  }
  cout << endl;
}

int main(){
  vector<int> cycles;
  int cycle;
  vector<int> intersect;
  vector<int> green_time;

  while(cin >> cycle){
    if(cycle != 0){
      cycles.push_back(cycle);
      int aux = cycle - 5;
      int min = 0;
      while(min+aux <= 18000+aux){
        for(int i = 0; i < aux; i++){
          green_time.push_back(min);
          min++;
        }
        min+=5+cycle;
      }
      if(cycles.size() == 1) intersect = green_time;
      intersect = intersectionOf(intersect, green_time);
      green_time.clear();
    }else{
      if(cycles.empty()){
        cin >> cycle;
        break;
      }
      else{
        cycles.clear();

        int h,m, s, first, sol = 0;
        first = intersect[0];
        for(int i = 1; i < intersect.size(); i++){
          if(intersect[i]-first != 1){
            sol = intersect[i];
            break;
          }
          first = intersect[i];
        }
        if(sol == 0) cout << "Signals fail to synchronise in 5 hours\n";
        else{
          m = sol / 60;
          h = m/60;
          m %= 60;
          s = sol % 60;
          printf("%02d:%02d:%02d\n",h, m, s);
        }
        intersect.clear();
      }
    }
  }
return 0;
}
