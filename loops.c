#include <stdio.h>

void loop_for();
void loop_while();
void loop_do_while();

int main(int argc, char const *argv[])
{
    loop_for();
    loop_while();
    loop_do_while();
    return 0;
}

void loop_for()
{
    printf("loop using for \n");
    for (int i = 0; i <= 10; i++)
    {
        printf("i: %d \n", i);
    }
}

void loop_while()
{
    int i = 0;
    printf("loop using while \n");
    while (i <= 10)
    {
        printf("i: %d \n", i);
        i++;
    }
}

void loop_do_while()
{
    int i = 0;
    printf("loop using do while \n");
    do
    {
        printf(".");
        i++;
    } while (i <= 10);
    {
        printf("i: %d runs \n", i);
    }
}