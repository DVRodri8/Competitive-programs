#include <iostream>
#include <string>
using namespace std;

int main(){
int n;
cin >> n;
for(int i = 0; i < n; i++){
  int m, y, c;
  string pixels;
  cin >> m >> y >> c;
  cin >> pixels;
  for(int j = 0; j < pixels.size(); j++){
    char p = pixels[j];
    if(p == 'M') m--;
    else if(p == 'Y') y--;
    else if(p == 'C') c--;
    else if(p == 'R'){
      m--;
      y--;
    }
    else if(p == 'B'){
      m--;
      y--;
      c--;
    }
    else if(p == 'G'){
      y--;
      c--;
    }else if(p == 'V'){
      c--;
      m--;
    }
  }
  if(c >= 0 && m >= 0 && y>= 0){
    cout << "YES " << m << ' ' << y << ' ' << c << endl;
  }else cout << "NO"<< endl;
}


return 0;
}
