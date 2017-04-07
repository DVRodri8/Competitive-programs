#include <iostream>
#include <string>
using namespace std;

int main(){
  string palabra, word;
  bool esta;
  while(cin >> palabra >> word){
    esta = true;
    int ind = 0;
    int tam = palabra.size();
    int len = word.size();
    for(int i = 0; i < tam && esta; i++){
      char caracter = palabra[i];
      for(int c = ind; c<len && esta; c++){
        if(caracter == word[c]){
          if(c+1 <= len){
              ind = c+1;
          }
          break;
        }
        if(c==len-1 && caracter != word[c]) esta = false;
      }
    }
    if(esta) cout << "Yes" << '\n';
    else cout << "No" << endl;
  }


return 0;
}
