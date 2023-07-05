#include <stdio.h>

int globalVar = 20; // global variable

void function()
{
    printf("Global variable: %d\n", globalVar);
}

int main()
{
    function();

    printf("Global variable: %d\n", globalVar);

    globalVar = 30; // modifying the value of global variable

    printf("Modified global variable: %d\n", globalVar);

    return 0;
}
