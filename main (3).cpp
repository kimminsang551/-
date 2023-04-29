#include <iostream>
#include <string>
#include <string.h>
using namespace std;
 
int main() {
  int count = 0;
  string s;
  string b;
  cin >> s;
  cin >> b;
  int index = 10000;
  for(int i = 0; i < s.size(); i++){
    if(s.find(b) != index){
      index = s.find(b);
      count++;
    }
    s = s.substr(index + 1, s.size());
  }
  printf("%d", count);
}