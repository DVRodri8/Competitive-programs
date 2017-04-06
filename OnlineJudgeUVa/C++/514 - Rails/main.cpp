#include <iostream>
#include <queue>
#include <stack>

using namespace std;

bool c_tiene(queue<int> cola, int b){
  bool res = false;
  int l = cola.size();
  for(int i = 0; i < l; i++){
    int a = cola.front();
    cola.pop();
    cola.push(a);
    if(a == b) res = true;
  }
  return res;
}
bool algoritmo(queue<int> cola, queue<int>orden, stack<int>pila, int aux){
  int vagon;
  bool puede = true;
  bool solved = false;
  while(!solved){
    if(orden.empty()) solved = true;
    else{
      vagon = orden.front();
      orden.pop();
      if(c_tiene(cola, vagon)){
        while(aux != vagon){
          aux = cola.front();
          cola.pop();
          pila.push(aux);
        }
        pila.pop();
      }else{
        if(pila.top() == vagon) pila.pop();
        else{
          puede = false;
          solved = true;
        }
      }
    }
  }
  return puede;
}

int main(){

  int m, n;
  queue<int> orden;
  queue<int> cola;
  stack<int> pila;
  bool flag = true;
  int vagon;
  while(true){
    if(flag){
      cin >> m;
      if(m == 0) break;
    }
    n = m;
    int aux = 0;
    flag = false;
    while(!cola.empty()) cola.pop();
    while(!orden.empty()) orden.pop();
    while(!pila.empty()) pila.pop();
    for(int i = 1; i <= n; i++){
      cola.push(i);
      cin >> vagon;
      if(vagon == 0){
        flag = true;
        cout<< endl;
        break;
      }
      orden.push(vagon);
    }
    if(!flag){
      bool puede = algoritmo(cola, orden, pila, aux);
      if(puede) cout<< "Yes" << endl;
      else cout<< "No" << endl;
    }
  }
return 0;
}
