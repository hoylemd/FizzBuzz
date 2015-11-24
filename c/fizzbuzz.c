#include <stdio.h>
#include <string.h>

int main() {
  char buffer[9];

  for (int i = 1; i <= 100; i += 1) {
    memset(buffer, '\0', 9);

    if (i % 3 == 0) {
      strncat(buffer, "Fizz", 4);
    }

    if (i % 5 == 0) {
      strncat(buffer, "Buzz", 4);
    }

    if (buffer[0] == '\0') {
      printf("%d\n", i);
    } else {
      printf("%s\n", buffer);
    }
  }

  return 0;
};
