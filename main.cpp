#include "helper.h"

int main()
{
    int one, two;
    char prompt[100];

    strcpy(prompt, "Enter the first integer: ");
    getInt(prompt, one);
    strcpy(prompt, "Enter the second integer: ");
    getInt(prompt, two);

    return 0;
}