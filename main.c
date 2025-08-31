#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Hello, World!\n");

    // إذا في مدخلات (arguments) اطبعها
    if (argc > 1) {
        printf("Program arguments:\n");
        for (int i = 1; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}
