#include <stdio.h>

int main(int argc, char *argv[]) {
    /*The program prints out a doc string 
    if a command line argument is not supplied.
    If a command line argument is supplied, it
    uses it in a string that it prints out*/
    if (argc != 2) {
        printf("Usage: %s <name>\n", argv[0]);
        return 1;
    }

    printf("Hello, %s!!!\n", argv[1]);
    return 0;
}