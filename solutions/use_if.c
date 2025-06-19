// solutions/use_if.c
#include <stdio.h>

const char* sign_of(int x) {
    if (x > 0) return "positive";
    else if (x == 0) return "zero";
    else return "negative";
}

int main() {
    int test_values[] = {10, 0, -5, 42, -1};
    int n = sizeof(test_values) / sizeof(test_values[0]);

    for (int i = 0; i < n; i++) {
        int x = test_values[i];
        printf("sign_of(%d) = %s\n", x, sign_of(x));
    }

    return 0;
}

