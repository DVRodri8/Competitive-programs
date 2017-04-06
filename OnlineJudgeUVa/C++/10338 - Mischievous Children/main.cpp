#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
int n;
string palabra;
cin >> n;
for (int i = 1; i <= n; i++){
  map<char, int> dic;
  dic.insert(pair<char, int> ('A',0));
  dic.insert(pair<char, int> ('B',0));
  dic.insert(pair<char, int> ('C',0));
  dic.insert(pair<char, int> ('D',0));
  dic.insert(pair<char, int> ('E',0));
  dic.insert(pair<char, int> ('F',0));
  dic.insert(pair<char, int> ('G',0));
  dic.insert(pair<char, int> ('H',0));
  dic.insert(pair<char, int> ('I',0));
  dic.insert(pair<char, int> ('J',0));
  dic.insert(pair<char, int> ('K',0));
  dic.insert(pair<char, int> ('L',0));
  dic.insert(pair<char, int> ('M',0));
  dic.insert(pair<char, int> ('N',0));
  dic.insert(pair<char, int> ('O',0));
  dic.insert(pair<char, int> ('P',0));
  dic.insert(pair<char, int> ('Q',0));
  dic.insert(pair<char, int> ('R',0));
  dic.insert(pair<char, int> ('S',0));
  dic.insert(pair<char, int> ('T',0));
  dic.insert(pair<char, int> ('U',0));
  dic.insert(pair<char, int> ('V',0));
  dic.insert(pair<char, int> ('W',0));
  dic.insert(pair<char, int> ('X',0));
  dic.insert(pair<char, int> ('Y',0));
  dic.insert(pair<char, int> ('Z',0));
  cin >> palabra;
  unsigned long total = 1;
  int lon = 0;
  for(int c = 0; c < palabra.size(); c++){
    dic[palabra[c]]++;
    lon++;
    total = (total*lon)/dic[palabra[c]];
  }
  cout <<"Data set "<<i <<": " <<total << endl;
}
return 0;
}
