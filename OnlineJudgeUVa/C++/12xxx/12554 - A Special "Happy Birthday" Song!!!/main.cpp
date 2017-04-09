#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

int main(){

  short n;
  string name;
  queue<string> names;
  queue<string> reserve;
  vector<string> letter;
  cin >> n;
  for(short i=0; i < n; i++){
    cin >> name;
    names.push(name);
  }
  letter.push_back("Happy");
  letter.push_back("birthday");
  letter.push_back("to");
  letter.push_back("you");
  letter.push_back("Happy");
  letter.push_back("birthday");
  letter.push_back("to");
  letter.push_back("you");
  letter.push_back("Happy");
  letter.push_back("birthday");
  letter.push_back("to");
  letter.push_back("Rujia");
  letter.push_back("Happy");
  letter.push_back("birthday");
  letter.push_back("to");
  letter.push_back("you");
  short indice = 0;
  while(!names.empty()){
    cout << names.front() << ": " << letter[indice] << endl;
    reserve.push(names.front());
    names.pop();
    indice++;
    if(indice == 16) indice = 0;
  }
  while(indice < 16){
    cout << reserve.front() << ": " << letter[indice] << endl;
    reserve.push(reserve.front());
    reserve.pop();
    indice++;
  }


return 0;
}
