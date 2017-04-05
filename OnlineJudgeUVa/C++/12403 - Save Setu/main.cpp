#include <iostream>
#include <string>

using namespace std;

int main(){
int account = 0, new_money = 0, cases;
string command;
cin >> cases;
for(int i=0; i<cases; i++){
  cin >> command;
  if(command == "donate"){
    cin >> new_money;
    account += new_money;
  }else{
    cout << account << endl;
  }
}

return 0;
}
