#include <stdio.h>
int main() {
  int c;
  int l = 0;
  int n = 0;
  int o = 0;
  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      n++;
    } else if (c >= 'a' && c <= 'z') {
      l++;
    } else if ( c == ' ' || c == '\n' || c == '\t') {

    } else {
      o++;
    }
  }
  printf("%d lowercase, %d digits, %d other \n", l, n, o);
  return 0;
}
