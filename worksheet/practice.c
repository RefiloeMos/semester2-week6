#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void six_seven(brr);

int main (void){

    char name[20] = "";
    int age;
    int repeat;

    printf("What is your name?: ");

    // fgets does not take a format string. It takes a buffer. ! what is a buffer?
    fgets(name, sizeof(name), stdin);

    // Replaces the last char of the string with a terminator to get accurate len of str
    name[strcspn(name, "\n")] = '\0';

    printf("And your age?: ");
    scanf("%d", &age);

    printf("How many times... ");
    scanf("%d", &repeat);
    printf("Brr I know he dyin'?... ");
    printf("%d", six_seven(repeat));
}

void six_seven(int brr) {

    for (int i = 0; i < brr + 1; i++){
        printf("SIX SEVEN");
    }
}

