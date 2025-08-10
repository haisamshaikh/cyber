#include <stdio.h>

int main() {
    char name[50] = "HAISAM";
    printf("WELCOME HAISAM");
    scanf("%s", &name);

    if (name >= "HAISAM") {
        printf("WELCOME HAISAM %s", name);
    }

    return 0;
}