/* Pointers (pointer variables) are special variables that are used to store addresses rather than values */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x;
    int *p; /* a pointer to an integer *p is an integer */

    p = &x; /* assign the address of x to p */
    printf("enter a number \n");
    scanf("%d", &x);
    printf("%d\n", *p);

    int *ptr = malloc(sizeof(*p));
    printf("%p", ptr); /* print address */
    free(ptr);         /* returns memory to OS */

    return 0;
}
