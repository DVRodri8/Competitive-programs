// 12250 - Language Detection

#include <iostream>
#include <string>

using namespace std;

int main(){

  string S;
  int c = 1;
  while(cin >> S){
      if(S == "#")  break;
      if(S == "HELLO"){
        cout << "Case " << c << ": " << "ENGLISH" << endl;
        c++;
      }else if(S == "HOLA"){
          cout << "Case " << c << ": " << "SPANISH" << endl;
          c++;
      }else if (S == "HALLO"){
          cout << "Case " << c << ": " << "GERMAN" << endl;
          c++;
      }else if (S == "BONJOUR"){
          cout << "Case " << c << ": " << "FRENCH" << endl;
          c++;
      }else if (S =="CIAO"){
        cout << "Case " << c << ": " << "ITALIAN" << endl;
        c++;
      }else if (S =="ZDRAVSTVUJTE"){
        cout << "Case " << c << ": " << "RUSSIAN" << endl;
        c++;
      }else{
        cout << "Case " << c << ": " << "UNKNOWN" << endl;
        c++;
      }
  }

  return 0;
}
