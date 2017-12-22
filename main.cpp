#include <iostream>
#include <string>
using namespace std;

int main() {
  string karakter;
  int pj_karakter;

  getline(cin, karakter);
  pj_karakter = karakter.length();

  for(int i=0; i<=pj_karakter; i++){
    if(karakter[i] == '+') {
      karakter.erase(i,1);
      karakter[i-1] = toupper(karakter[i-1]);
    } else if(karakter[i] == '-') {
      karakter.erase(i,1);
      karakter[i-1] = tolower(karakter[i-1]);
    }
  }

  cout<<karakter<<endl;
  return 0;
}
