#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;

    printf("*** classification for risk stratification in glioma patients *** \n");
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 14)
    {
        printf("pediatric group, 0–14 years old \n");
    }
    if (age >= 15 && age <= 47)
    {
        printf("young group, 15–47 years old \n");
    }
    else if (age >= 48 && age <= 63)
    {
        printf("middle age group, 48–63 years old \n");
    }
    else if (age >= 64)
    {
        printf("elderly group, 64 years old \n");
    }
    else
    {
        printf("age doesn't match with any age group\n");
    }

    printf("\nsource: https://bmcneurol.biomedcentral.com/articles/10.1186/s12883-020-01888-w \n\n");

    return 0;
}