#include <iostream>
#include <string>
using namespace std;

int main(){
int t;
cin >> t;
int l,w,h;
for(int c=1; c<=t; c++){
  string output = "good";
  cin >> l >> w >> h;
  if(l > 20 || w > 20 || h > 20) output = "bad";
  cout << "Case " << c << ": " << output << '\n';
}
std::cout << '\n';


return 0;
}
