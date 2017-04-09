#include <iostream>
#include <string>
#include <map>
#include <queue>

using namespace std;

int main(){
  int cases, n;
  int rest, operation;
  map<string, short> values;
  string name, destination;
  queue<string> names;
  long i = 0;
  while(cin >> cases){
    if(i!=0) cout << endl;
    values.clear();
    while(!names.empty()) names.pop();
    for(short i=0; i < cases; i++){
      cin >> name;
      names.push(name);
      values.insert(pair<string, short> (name, 0));
    }
    for(short i=0; i < cases; i++){
      cin >> name >> operation >> n;
      if(n > 0){
        values[name] -= operation;
        rest = operation%n;
        values[name] += rest;
        operation /= n;
      }
      for(short c=0; c < n; c++){
        cin >> name;
        values[name] += operation;
        // if(c < rest) values[name] += 1;
      }
    }
    for(short i=0; i < cases; i++){
      cout << names.front() << ' ' << values[names.front()] << endl;
      names.pop();
    }
    i++;
  }


return 0;
}
