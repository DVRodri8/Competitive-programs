#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

long fibo[] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, 2971215073};
vector<long> fibonacci(fibo, fibo + sizeof(fibo)/ sizeof(long));

long fibo_position(long number){
  for(long i = 0; i < fibonacci.size() ; i++){
    if(number == fibonacci[i]) return i;
  }
  return -1;
}

string alphabetics(string tex){
  string res = "";
  for(int i = 0; i < tex.size(); i++){
    if((int)tex[i] >= (int)'A' && (int)tex[i] <= (int)'Z') res += tex[i];
  }
  return res;
}

long sequence_position(long num, vector<long> sequence){
  for(long i = 0; i < sequence.size(); i++){
    if(sequence[i] == num) return i;
  }
  return -1;
}

int main(){

  cout << fibo[1] << endl;
  long maxim, decimal, n, cases;
  string text, data, res = "";
  vector<long> sequence;

  cin >> cases;
  for(;cases>0; cases--){
    maxim = 0;
    res = "";
    sequence.clear();
    cin >> n;
    cin.ignore();
    getline(cin, data);
    istringstream iss (data);
    getline(cin, text);
    text = alphabetics(text);
    // cout << text << endl
    for(;n>0; n--){
      long i;
      iss >> i;
      maxim =  max(maxim, i);
      sequence.push_back(i);
    }

    maxim = fibo_position(maxim);
    for(long i = 0; i <= maxim; i++){
      decimal = sequence_position(fibonacci[i], sequence);
      if(decimal == -1) res+= " ";
      else{
        res += text[decimal];
      }
    }
    cout << res << endl;
  }


return 0;
}
