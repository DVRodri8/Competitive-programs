#include <iostream>
#include <string>
using namespace std;

string lower(string s){
  string res;
  for (int i = 0; i < s.size(); i++){
    if((int)s[i] <= (int)'Z' && (int)s[i] >= (int)'A') res += (char)((int)(s[i])+32);
    else res+= s[i];
  }
  return res;
}

int simplify(int counter){
  if(counter < 10) return counter;
  int res = 0;
  while(counter > 0){
    res += counter%10;
    counter /= 10;
  }
  return simplify(res);
}

int rate_counter(string s){
  int counter = 0;
  for (int i = 0; i < s.size(); i++){
    if((int)s[i] <= (int)'z' && (int)s[i] >= (int)'a') counter += (int)s[i] - 96;
  }
  return simplify(counter);
}

int main(){

  string name, lover;
  int c_name, c_lover;
  double res1, res2;
  while(getline(cin, name) && getline(cin, lover)){
    c_name = rate_counter(lower(name));
    c_lover = rate_counter(lower(lover));
    if(c_name == 0 && c_lover == 0) cout << endl;
    else{
      res1 = (double)(c_name) / c_lover;
      res2 = (double)(c_lover) / c_name;
      if(max(res1, res2) > 1)  printf("%4.2f ",min(res1, res2)*100);
      else printf("%4.2f ",max(res1, res2)*100);
      cout << '%' << endl;
    }
  }

return 0;
}
