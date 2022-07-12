#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ENG 26

int main() {
  char strpath[1000] = {};
  char string[1000] = {};
  FILE *fp = fopen("testpath.txt", "r");
  FILE *f;
  FILE *ft;
  int shift;
  scanf("%d", &shift);
  while (fscanf(fp, "%s", strpath) != EOF) {
    f = fopen(strpath, "r");
    char t;
    ft = fopen("temp.txt", "w");
    while ((t = fgetc(f)) != EOF) {
      if (t >= 'A' && t <= 'Z') {
        t = t + (shift % ENG);
        if (t > 'Z') {
          t = 'A' + (t - 'Z') - 1;
        }
      } else if (t >= 'a' && t <= 'z') {
        t = t + (shift % ENG);
        if (t > 'z') {
          t = 'a' + (t - 'z') - 1;
        }
      }
      fprintf(ft, "%c", t);
    }
    fclose(ft);
    fclose(f);
  }
  fclose(fp);
  return 0;
}
