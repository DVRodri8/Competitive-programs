#include <iostream>
#include <string>
using namespace std;

int main(){
int counter = 1;
string s;
bool flag = true;
while(flag){
  cin >> s;
  if(s != "*"){
    if (s == "Hajj"){
      cout <<"Case "<<counter << ": " <<"Hajj-e-Akbar" << endl;
    }else{
      cout <<"Case "<<counter << ": " <<"Hajj-e-Asghar" << endl;
    }
    counter++;
  }else{
    flag = false;
  }
}


return 0;
}
