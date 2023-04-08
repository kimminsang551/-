#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main(){
  int n, m;
  int arr[100][100];
  scanf("%d %d", &n, &m);
  
  for(int j = 1; j <= m; j++){
    for(int i = 1; i <= n; i++){
      int a;
      scanf("%d", &a);
      arr[j][i] = a;
    }
  }
  int max, h = 0;
  int x, y = 0;
  for(int i = 1; i <= m; i++){
    for(int j = 1; j <= n; j++){
      h = arr[i][j] + arr[i+1][j] + arr[i][j+1] + arr[i-1][j] + arr[i][j-1];
      if(max < h){
        max = h;
        x = j; y = i;
      }
    }
  }
  printf("%d %d %d", x, y, max);
}

/*0 0 2 0 6 0 6 0
0 5 3 7 5 4 1 4
9 6 1 2 7 0 5 0 
0 1 5 6 0 3 2 7*/