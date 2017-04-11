#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
  int devices, operations, capacity, maxim, device, tension;
  int sequence = 1;
  vector<int> all_devices;
  map<int, int> on_devices;
  while(cin >> devices >> operations >> capacity){
    if(devices == 0 && operations == 0 && capacity == 0) break;

    bool res = false;
    on_devices.clear();
    all_devices.clear();
    maxim = 0;
    tension=0;
    all_devices.push_back(0);
    for(int i=1; i <= devices; i++){
      cin >> device;
      all_devices.push_back(device);
      on_devices.insert(pair<int,int> (i,0));
    }
    for(int i=0; i < operations; i++){
      cin >> device;
      if(on_devices[device] == 1){
        tension -= all_devices[device];
        on_devices[device] = 0;
      }
      else{
        tension += all_devices[device];
        on_devices[device]= 1;
      }
      if(tension > capacity){
        res = true;
      }
      maxim = max(maxim, tension);
    }
    if(res){
      printf("Sequence %d\nFuse was blown.\n\n", sequence);
    }else{
      printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n", sequence, maxim);
    }
    sequence++;
  }


return 0;
}
