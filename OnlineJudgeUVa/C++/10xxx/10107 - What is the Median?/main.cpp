#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int new_number, length = 0;
  long operation;
  vector<int> sequence;

  while(cin >> new_number){
    length++;
    sequence.push_back(new_number);
    sort(sequence.begin(), sequence.end());
    if(length & 1) cout << sequence[length/2] << endl;
    else{
      long pos = sequence[length/2];
      long pos2 = sequence[length/2-1];
      cout << (pos+pos2)/2 << endl;
    }
  }


return 0;
}
