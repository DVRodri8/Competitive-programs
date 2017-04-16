#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string translate(string s, int k){
  string res = "";
  int asci, diff;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == 32) asci = 91-k;
    else{
      asci = (int)s[i] - k;
      if(asci < 65){
        diff = 65-asci;
        if(diff == 1) asci = 32;
        else asci = 92-diff;
      }
    }
    res+=asci;
  }
  return res;
}

int main(){

  string word, text, t_text, best_result, res;
  int lenght, counter, best_counter = 0;
  vector<string> dictionary;

  while(cin >> word && word != "#"){
    dictionary.push_back(word);
  }
  cin.ignore();
  getline(cin,text);

  for(int k=1; k<27; k++){
    t_text = translate(text, k);
    istringstream iss(t_text);
    counter = 0;
    while(iss >> word){
      for(int i = 0; i < dictionary.size(); i++){
        if(word == dictionary[i]){
          counter++;
          break;
        }
      }
    }

    if(best_counter < counter){
      best_result = t_text;
      best_counter = counter;
      }
    }
  istringstream iss(best_result);
  counter = 0;
  int i = 0;
  while(iss >> word){

    if (counter!=0)counter += word.size()+1;
    else counter += word.size();

    if(counter <= 60){
      if (i!=0)res+= " ";
      res+=word;

    }else{
      cout << res << endl;
      res = word;
      counter = word.size();
    }

    i++;
  }
  cout << res << endl;


return 0;
}
