#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

  int num;
  cin >> num;
  for(num; num > 0 ; num--){
    int cont1 = 0;
    int cont2 = 0;
    vector<string> nums = {"one","two","three"};
    string palabra;
    cin >> palabra;
    int l = palabra.length();
    if(l == 5) cout << 3 << endl;
    else{
      if(palabra[0] == 'o') cont1++;
      else cont2++;
      if(palabra[1] == 'w') cont2++;
      else cont1 ++;
      if(palabra[2] == 'e') cont1++;
      else cont2++;
      if(cont1 > cont2) cout << 1 << endl;
      else cout << 2 << endl;
    }
  }

  return 0;
}
