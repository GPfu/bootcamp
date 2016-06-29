#include <stdio.h>
int lineget(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c=getchar()) !=EOF && c!='\n'; ++i) {
    s[i] = c;
  }
  /*
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  */
  s[i] = '\0';
  return i;
}

void rline(char ol[], int li) {
  int cd;
  for (cd = li - 1; cd >= 0; cd--) {
    printf("%c", ol[cd]);
  }
  printf("\n");
}

int main() {
  char line[1000];
  int length;
  length = lineget(line, 1000);
  printf("%c \n", line[length -1]);
  printf("%s:%d \n",line, length);
  rline(line, length);

  return 0;
}
