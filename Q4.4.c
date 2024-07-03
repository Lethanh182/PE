#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char str[101];
  char output[101] = "";
  int i, j = 0;
  printf("Nhap vao mot chuoi str  = ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  for (i = 0; str[i] != '\0'; i++) {
    if (isalpha(str[i]) || isspace(str[i])) {
      output[j] = str[i];
      j++;
    }
  }
  output[j] = '\0'; 
  printf("OUTPUT:\n%s\n", output);

  return 0;
}