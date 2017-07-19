#include <iostream>
using namespace std;

int main(){

  int a, b, c, x, y, option;
  while(cin >> a >> b >> c >> x >> y && a){
    if(max(x, max(c, max(a,b))) == x || max(y, max(c, max(a,b))) == y){
      int grande = max(x,y);
      int peque = min(x,y);
      int cont = 0;
      if(peque > a) cont++;
      if(peque > b) cont++;
      if(peque > c) cont++;
      if(cont <= 1){
        int sol = max(a, max(b,c))+1;
        if(sol != x && sol != y && sol != a && sol != b && sol != c && sol <= 52) cout << sol << endl;
        else if(sol+1 != x && sol+1 != y && sol+1 != a && sol+1 != b && sol+1 != c && sol+1 <= 52) cout << sol+1 << endl;
        else if(sol+2 != x && sol+2 != y && sol+2 != a && sol+2 != b && sol+2 != c && sol+2 <= 52) cout << sol+2 << endl;
        else if(sol+3 != x && sol+3 != y && sol+3 != a && sol+3 != b && sol+3 != c && sol+3 <= 52) cout << sol+3 << endl;
        else if(sol + 4 <= 52) cout << sol +4 << endl;
        else cout << -1 << endl;
      }
      else if(cont == 2){
        //cout << "here" << endl;
        int big = max(a, max(b,c));
        int little = min(a, min(b,c));
        int sol = a+b+c-big-little+1;
        if(sol != x && sol != y && sol != a && sol != b && sol != c && sol <= 52) cout << sol << endl;
        else if(sol+1 != x && sol+1 != y && sol+1 != a && sol+1 != b && sol+1 != c && sol+1 <= 52) cout << sol+1 << endl;
        else if(sol+2 != x && sol+2 != y && sol+2 != a && sol+2 != b && sol+2 != c && sol+2 <= 52) cout << sol+2 << endl;
        else if(sol+3 != x && sol+3 != y && sol+3 != a && sol+3 != b && sol+3 != c && sol+3 <= 52) cout << sol+3 << endl;
        else if(sol + 4 <= 52) cout << sol +4 << endl;
        else cout << "-1\n";

      }else if(a != 1 && b != 1 && c != 1 && x != 1 && y != 1) cout << "1\n";
      else if(a != 2 && b != 2 && c != 2 && x != 2 && y != 2) cout << "2\n";
      else if(a != 3 && b != 3 && c != 3 && x != 3 && y != 3) cout << "3\n";
      else if(a != 4 && b != 4 && c != 4 && x != 4 && y !=4) cout << "4\n";
      else if(a != 5 && b != 5 && c != 5 && x != 5 && y !=5) cout << "5\n";
      else  cout << "6\n";

    }else{
      int big = max(a, max(b,c));
      int little = min(a, min(b,c));
      int middle = a+b+c-big-little;
      int contX = 0, contY = 0;
      if(x > a) contX ++;
      if(x > b) contX ++;
      if(x > c) contX ++;
      if(y > a) contY ++;
      if(y > b) contY ++;
      if(y > c) contY ++;

      if(contY == 2 && contX == 2){
        int sol = middle+1;
        if(sol != x && sol != y && sol != a && sol != b && sol != c) cout << sol << endl;
        else if(sol+1 != x && sol+1 != y && sol+1 != a && sol+1 != b && sol+1 != c && sol +1 <= 52) cout << sol+1 << endl;
        else if(sol+2 != x && sol+2 != y && sol+2 != a && sol+2 != b && sol+2 != c && sol +2 <= 52) cout << sol+2 << endl;
        else if(sol+3 != x && sol+3 != y && sol+3 != a && sol+3 != b && sol+3 != c && sol +3 <= 52) cout << sol+3 << endl;
        else if(sol+4 != x && sol+4 != y && sol+4 != a && sol+4 != b && sol+4 != c && sol +4 <= 52) cout << sol+4 << endl;
        else if(sol +5 <= 52) cout << sol+5 << endl;
      }
      else cout << -1 << endl;

    }
  }


return 0;
}
