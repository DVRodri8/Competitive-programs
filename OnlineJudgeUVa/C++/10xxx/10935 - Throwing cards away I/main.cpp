#include <iostream>
#include <queue>
using namespace std;

int main(){
int n;
queue<int> cola;
while(cin>>n && n!=0){
  if(n == 1){
    cout << "Discarded cards:" << endl << "Remaining card: 1" << endl;
  }
  else{

    while(!cola.empty()){
      cola.pop();
    }
  //Llenado de la cola 1,2,3,4...,n
    for(int i = 1; i<=n; i++){
      cola.push(i);
    }
    int mover;
    cout << "Discarded cards: ";
    for(int i = 2; i<n; i++){

        cout << cola.front() << ", ";
        cola.pop();
        mover = cola.front();
        cola.pop();
        cola.push(mover);

      }
      cout << cola.front() << endl;
      cola.pop();
      mover = cola.front();
      cola.pop();
      cola.push(mover);
      cout << "Remaining card: " << cola.front() << endl;
    }
  }

return 0;
}
