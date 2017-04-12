#include <iostream>
#include <string>
using namespace std;

int main(){
  string number;
  while(getline(cin, number) && number != "END"){
    int i = 0;
    while(number != "1"){
      number = to_string(number.size());
      i++;
    }
    cout << i+1 << endl;
  }


return 0;
}
