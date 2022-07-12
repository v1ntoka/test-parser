#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int checkfile(FILE *fp, char *name);
// int readfile(FILE *fp, char *name);

int main() {
  // char *endh = "/*.h >> filesh.txt";
  // char *endc = "/*.c >> filesc.txt";
  // char *begin = "ls ";
  // char respath1[1000] = {};
  // char respath2[1000] = {};
  // char path[1000] = {};
  // scanf("%s", path);
  // strcat(respath1, begin);
  // strcat(respath1, path);
  // strcat(respath1, endc);
  // strcat(respath2, begin);
  // strcat(respath2, path);
  // strcat(respath2, endh);
  // // puts(respath1);
  // // puts(respath2);
  // system(respath1);
  // system(respath2);

  char strpath[1000] = {};
  char string[1000] = {};
  FILE *fp = fopen("testpath.txt", "r");
  FILE *f;
  FILE *ft;
  char *alphabet = "abcdefg";
  // fscanf(fp, "%s", strpath);
  // FILE *f = fopen(strpath, "r");
  // fscanf(f, "%s", string);
  // printf("%s\n", string);
  // fclose(f);
  while (fscanf(fp, "%s", strpath) != EOF) {
    //printf("%s\n", strpath);
    f = fopen(strpath, "r+");
    char t[1000] = {};
    ft = fopen("temp.txt", "w");
      while (fscanf(ft, "%s", t) != EOF) {
        int n = strlen(t);
        printf("%d", n);
        for (int i = 0; i < 7; i++) {
          for (int j = 0; j < n; j++) {
            if (t[i] == alphabet[j]) {
              t[i] = '1';
              
            }
          }
        }
        for(int i = 0; i < n; i++) {
          printf("%s", t);
        }
        fprintf(ft, "%s", t);
      }
    //printf("\n");
    //fclose(ft);
    fclose(f);
  }
  fclose(fp);
  
  return 0;
}

// int readfile(FILE *fp, char *name) {
//   char c;
//   fp = fopen(name, "r");
//     if ((c = fgetc(fp)) == EOF) {
//       return 1;
//     } else {
//       printf("%c", c);
//       while ((c = fgetc(fp)) != EOF) {
//         printf("%c", c);
//       }
//     }
//   return 0;
// }

// int checkfile(FILE *fp, char *name) {
//   scanf("%s", name);
//   if ((fp = fopen(name, "a+")) == NULL) {
//     return 1;
//   } else {
//     fclose(fp);
//     return 0;
//   }
// }