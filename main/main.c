#include <stdio.h>
enum Level
{
    LOW,
    MEDIUM,
    HIGH
};

void call();
void printRef();
int main()
{
    if (0)
    {
        printf("1 is true \n");
    }
    else
    {
        printf("0 is false \n");
    }
    call();
    printRef();
    return 0;
}

void call()
{
    int myNumbers[4] = {25, 50, 75, 100};

    // Get the memory address of the myNumbers array
    printf("%p\n", myNumbers);

    // Get the memory address of the first array element
    printf("%p\n", &myNumbers[0]);
    printf("it is just a tiral method \n");
    int l = sizeof(10);
    printf("%d\n", l);
}

void printRef()
{
    int a = 0;
    printf("%p \n", &a);
}
