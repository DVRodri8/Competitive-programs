#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main(){
  int requirements, cases, actual_req, better_req;
  double money, better_money;
  string req, name, winner;
  int num_case = 1;
  while(cin >> requirements >> cases && requirements != 0 && cases != 0){
    if(num_case != 1) cout << endl;
    cin.ignore();
    better_money = INT_MAX;
    better_req = 0;
    for(int i = 0; i < requirements; i++){
      getline(cin, req);
    }
    for(int i= 0; i < cases; i++){
      getline(cin, name);
      cin >> money >> actual_req;
      if(actual_req > better_req){
        winner = name;
        better_req = actual_req;
        better_money = money;
      }else if(actual_req == better_req && money < better_money){
         winner = name;
         better_money = money;
       }
      cin.ignore();
      for(int c = 0; c < actual_req; c++) getline(cin, req);
    }
    cout << "RFP #" << num_case << endl << winner << endl;
    num_case++;
  }

return 0;
}
