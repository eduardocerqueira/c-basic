#include <stdio.h>

void option1();
void option2();
void option3();

int main(int argc, char const *argv[])
{
    int input;
    printf("1. option 1 \n");
    printf("2. option 2 \n");
    printf("3. option 3 \n");
    printf( "Selection: " );
    scanf( "%d", &input );
    
    switch (input)
    {
    case 1:
        option1();
        break;
    case 2:
        option2();
        break;
    case 3:
        option3();
        break;

    default:
        printf( "Bad input, quitting!\n" );
        break;
    }

    return 0;
}

void option1()
{
    printf("\nOption 1\n");
}

void option2()
{
    printf("\nOption 2\n");
}

void option3()
{
    printf("\nOption 3\n");
}
