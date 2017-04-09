#include <iostream>
using namespace std;

int main(){
  int height, ini_distance_up, dist_down, percentage;
  float dist_up, position;
  while(cin >> height >> ini_distance_up >> dist_down >> percentage && height != 0){
    position = 0;
    int day = 0;
    dist_up = ini_distance_up;
    bool res = false;
    while(true){
      day++;
      position += dist_up;
      if(position > height){
        res = true;
        break;
      }else{
        position -= dist_down;
        if(position < 0) break;
        dist_up -= ini_distance_up * percentage/100.0;
        if(dist_up < 0) dist_up = 0;
      }
    }
    if(res) printf("success on day %d\n", day);
    else printf("failure on day %d\n", day);
  }



return 0;
}
