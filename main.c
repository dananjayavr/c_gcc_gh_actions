#include <stdio.h>
#include <stdlib.h>

void greeting(void) {
    printf("Hello, World!\n");
}

void dev_greeting(void) {
    printf("Super cool new feature from dev.\n");
}

int main(int argc, char *argv[]) {
    greeting();
    dev_greeting();
    return EXIT_SUCCESS;
}