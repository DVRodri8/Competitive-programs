#include <iostream>

using namespace std;

int mediano(int s1, int s2, int s3){

  if(s1 > s2 && s2 > s3 || (s3 > s2 && s2 > s1)) return s2;
  if(s2 > s1 && s1 > s3 || (s3 > s1 && s1 > s2)) return s1;
  if(s1 > s3 && s3 > s2 || (s2 > s3 && s3 > s1)) return s3;

}

int main(){

  int a, s1, s2, s3, cont;
  cin >> a;
  for(cont = 1; cont <= a ; cont++){

    cin >> s1 >> s2 >> s3;
    int s = mediano(s1,s2,s3);

    cout << "Case " << cont << ": " << s << endl;


  }

  return 0;
}
