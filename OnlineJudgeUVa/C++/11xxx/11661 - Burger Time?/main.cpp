#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main(){
  string highway;
  int lenght, better, memory_D, memory_R;
  while(cin >> lenght && lenght != 0){
    cin.ignore();
    better = INT_MAX;
    memory_D = -1;
    memory_R = -1;
    getline(cin, highway);
    for(int i = 0; i < lenght; i++){
      if(highway[i] == 'Z') better = 0;
      if(highway[i] == 'R') memory_R = i;
      if(highway[i] == 'D') memory_D = i;
      if(memory_D != -1 && memory_R!=-1) better = min(better, max(memory_D,memory_R)-min(memory_D,memory_R));
    }
    cout << better << endl;
  }


return 0;
}
