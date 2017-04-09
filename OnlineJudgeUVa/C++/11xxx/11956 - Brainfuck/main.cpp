#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
  short cases;
  string line;
  char command;

  cin >> cases;
  cin.ignore();
  for(int i=1; i <= cases; i++){
    array<int, 100> memory;
    for(int c=0; c < 100; c++){
      memory[c] = 0;
    }
    int position = 0;
    getline(cin,line);
    // cout << "line size = " << line.size() << endl;
    for(int c = 0; c < line.size(); c++){
      command = line.at(c);
      // cout << "comando: " <<command << endl;
      switch (command) {
        case '>':
          if(position == 99) position = 0;
          else position++;
          break;
        case '<':
          if(position == 0) position = 99;
          else position--;
          break;
        case '+':
          if(memory[position] == 255) memory[position] = 0;
          else memory[position] ++;
          break;
        case '-':
          if(memory[position] == 0) memory[position] = 255;
          else memory[position]--;
          break;
        case '.':
          cases = cases;
      }
    }
    // cout << "memoria " << memory[0] << endl;
    printf("%s %d: ", "Case",i);
    for(short c = 0; c < 99; c++){
      printf("%02X ", memory[c]);
    }
    printf("%02X", memory[99]);
    cout << endl;
  }

return 0;
}
