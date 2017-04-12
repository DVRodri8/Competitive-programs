#include <iostream>
#include <string>
using namespace std;

string position(string bend, string next_bend){
  string res;
  char bend_sign = bend[0];
  char next_bend_sign = next_bend[0];
  char bend_direction = bend[1];
  char next_bend_direction = next_bend[1];
  if(next_bend == "No") return bend;
  if(bend == "+x") return next_bend;
  if(bend == "-x"){
    if(next_bend_sign == '-') res = "+";
    else res= "-";
    return res+next_bend_direction;
  }
  if(bend == next_bend) return "-x";
  if(next_bend_direction == bend_direction) return "+x";
  return bend;
}

int main(){
  string bend, next_bend;
  int n;
  while(cin >> n && n!= 0){
    cin >> bend;
    if(bend == "No") bend = "+x";
    for(n; n>2; n--){
      cin >> next_bend;
      bend = position(bend, next_bend);
    }
    cout << bend << endl;
  }


return 0;
}
