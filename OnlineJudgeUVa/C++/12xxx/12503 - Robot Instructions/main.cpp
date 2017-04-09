#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
  short cases, n, p, traduction;
  string instruction;
  vector<int> secuence;

  cin >> cases;
  for(short i=0; i < cases; i++){
    p = 0;
    secuence.clear();
    cin >> n;
    for(short c=0; c < n; c++){
      cin >> instruction;
      if(instruction == "LEFT") secuence.push_back(-1);
      else if(instruction == "RIGHT") secuence.push_back(1);
      else{
        cin >> instruction >> traduction;
        secuence.push_back(secuence[traduction-1]);
      }
    }
    for(short c=0; c < n; c++){
      p += secuence[c];
    }
    cout << p << endl;
  }
return 0;
}
