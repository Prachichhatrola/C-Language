#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  int sum_n;
  if(n == 1)
  {
      sum_n = a;
  }
  else if(n == 2)
  {
      sum_n = b;
  }
  else if(n == 3)
  {
      sum_n = c;
  }
  else {
  sum_n = find_nth_term(n-1, a, b, c) + find_nth_term(n-2, a, b, c) + find_nth_term(n-3, a, b, c);
  }
  return sum_n;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
