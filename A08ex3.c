#include <stdio.h>

int main() {
    int x = 0;

  while( x < 21 ) {
    x++;      
    if( x % 3 == 0) {
      continue; 
    }
    printf("%d ", x);
  }
  
  return 0;
}