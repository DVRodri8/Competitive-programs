#include <iostream>
using namespace std;

int main(){
  int a,b,c;
  int h,c1,c2;
  while(cin >> a >> b >> c && (a || b || c)){
    if(a>=b &&  a>=c){
      h = a;
      c1 = b;
      c2 = c;
    }else if(b>=c){
      h = b;
      c1 = a;
      c2 = c;
    }else{
      h = c;
      c1 = b;
      c2 = a;
    }
    if((c1*c1 + c2*c2) == (h*h)) cout << "right" << endl;
    else cout << "wrong" << endl;
  }
  return 0;
}
