#include <iostream>

using namespace std;

int main(){

long mios, enemigos;

while (cin >> mios >> enemigos){

  if (enemigos >= mios){
    cout << enemigos - mios << endl;
  }
  else{
    cout << mios - enemigos << endl;
  }
}
return 0;

}
