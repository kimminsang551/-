#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int arr[10001][10001];
int main() {
  int n;
  scanf("%d", &n);
  int t, k;
  scanf("%d %d", &t, &k);
  
  for(int i = 0; i < t ;i++){
    int x, y;
    scanf("%d %d", &x, &y);
    arr[x][y] = 1;

    }
  
  int count = 0;
  for(int i = 0; i < k; i++){
    
    int x,y;
    scanf("%d %d",&x, &y);
    if(arr[x][y] != 1){
      count++;
      
    }
  }
  if(count == 0){
    printf("-1");
  }
  else{
    printf("%d", count);
  }
  return 0;
}
  
