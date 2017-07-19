#include <iostream>
using namespace std;

int main(){
  int remaining, day, month, year, passed;
  while(cin >> remaining >> day >> month >> year && month != 0 && day != 0){
    while(remaining > 0){
      switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          passed = 32 - day;
          break;
        case 2:
          if(year%400 == 0 || (year % 4 == 0 && year % 100 != 0)) passed = 30 - day;
          else passed = 29 - day;
          break;
        default: passed = 31 - day;
      }
      if(passed <= remaining){
        day = 1;
        month += 1;
        remaining -= passed;
      }else{
        day += remaining;
        remaining = 0;
      }
      if(month == 13){
        month = 1;
        year+=1;
      }
    }
    printf("%d %d %d\n", day, month, year);
  }


return 0;
}
