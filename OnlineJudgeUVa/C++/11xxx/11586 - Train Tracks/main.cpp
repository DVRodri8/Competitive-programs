#include <iostream>
#include <string>
using namespace std;

int main(){
  int cases, f_counter, m_counter;
  string line;
  cin >> cases;
  cin.ignore();
  for(;cases > 0; cases--){
    f_counter = 0;
    m_counter = 0;
    getline(cin, line);
    for(int i = 0; i< line.size(); i++){
      if(line[i] == 'M') m_counter++;
      else if(line[i] == 'F') f_counter++;
      // cout << line[i] << ' ' << m_counter << ' ' << f_counter << endl;
    }
    if(f_counter == m_counter && f_counter > 1) cout << "LOOP" << endl;
    else cout << "NO LOOP" << endl;
  }


return 0;
}
