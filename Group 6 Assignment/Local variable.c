#include <stdio.h>

void function()
{
    int localVar = 10; // local variable

    printf("Local variable: %d\n", localVar);
}

int main()
{
    function();

    // Trying to access the local variable here will result in an error
    // as it is not accessible outside the function scope.

    return 0;
}
