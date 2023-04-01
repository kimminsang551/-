#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
  int n ,m;
  scanf("%d %d", &n, &m);
  vector <int> v[n];
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      int x;
      scanf("%d", &x);
      v[i].push_back(x);
    }
  }
  int max = 0;
  int x, y;
  for(int i = 0; i <= n; i++){
    for(int j = 0; j <= m; j++){
      if(v[i][j]+v[i+1][j]+v[i-1][j]+v[i][j+1]+v[i][j-1] > max){
        max = v[i][j]+v[i+1][j]+v[i-1][j]+v[i][j+1]+v[i-1][j];
        x = j+1; y = i+1;
      }
    }
  }
  printf("%d %d %d", x, y, max);
}