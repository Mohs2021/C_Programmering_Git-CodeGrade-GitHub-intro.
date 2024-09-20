#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_number(const char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (!isdigit(s[i]) && s[i] != '-') {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("ERROR; wrong number of arguments\n");
        return 1;
    }

    if (!is_number(argv[1]) || !is_number(argv[2])) {
        printf("ERROR; invalid input\n");
        return 1;
    }

    int sum = atoi(argv[1]) + atoi(argv[2]);
    printf("%d\n", sum);

    return 0;
}
