#include <iostream>
#include <string>
using namespace std;

int main(){
  int cases, idate, iday, imonth, iyear, fday, fmonth, fyear;
  cin >> cases;
  for(int i = 1; i <= cases; i++){
    cin >> idate;
    imonth = idate/1000000;
    idate %= 1000000;
    iday = idate/10000;
    iyear = idate%10000;
    fday = iday;
    fmonth = imonth;
    fyear = iyear;
    int remaining = 280;
    int passed = 0;
    while(remaining > 0){
      switch (fmonth) {
        case 1:
          passed = 32 - fday;
          break;
        case 3:
          passed = 32 - fday;
          break;
        case 5:
          passed = 32 - fday;
          break;
        case 7:
          passed = 32 - fday;
          break;
        case 8:
          passed = 32 - fday;
          break;
        case 10:
          passed = 32 - fday;
          break;
        case 12:
          passed = 32 - fday;
          break;
        case 2:
          if(fyear%400 == 0 || (fyear % 4 == 0 && fyear % 100 != 0)) passed = 30 - fday;
          else passed = 29 - fday;
          break;
        default: passed = 31 - fday;
      }

      if(passed <= remaining){
        fday = 1;
        fmonth += 1;
        remaining -= passed;
      }else{
        fday += remaining;
        remaining = 0;
      }
      if(fmonth == 13){
        fmonth = 1;
        fyear += 1;
      }
    }
    int total = fday * fmonth;
    string sign = "";

    if(fmonth == 1){
      if(fday < 21) sign = "capricorn";
      else sign = "aquarius";
    }else if(fmonth == 2){
      if(fday <= 19) sign = "aquarius";
      else sign = "pisces";
    }else if(fmonth == 3){
      if(fday <= 20) sign = "pisces";
      else sign = "aries";
    }else if(fmonth == 4){
      if(fday <= 20) sign = "aries";
      else sign = "taurus";
    }else if(fmonth == 5){
      if(fday <= 21) sign = "taurus";
      else sign = "gemini";
    }else if(fmonth == 6){
      if(fday <= 21) sign = "gemini";
      else sign = "cancer";
    }else if(fmonth == 7){
      if(fday <= 22) sign = "cancer";
      else sign = "leo";
    }else if(fmonth == 8){
      if(fday <= 21) sign = "leo";
      else sign = "virgo";
    }else if(fmonth == 9){
      if(fday <= 23) sign = "virgo";
      else sign = "libra";
    }else if(fmonth == 10){
      if(fday <= 23) sign = "libra";
      else sign = "scorpio";
    }else if(fmonth == 11){
      if(fday <= 22) sign = "scorpio";
      else sign = "sagittarius";
    }else if(fmonth == 12){
      if(fday <= 22) sign = "sagittarius";
      else sign = "capricorn";
    }


    printf("%d %02d/%02d/%d %s\n",i, fmonth, fday, fyear, sign.c_str());
  }


return 0;
}
