#include <stdio.h>

int total = 0;
int sum (int, int);
void sum_list();

int main(int argc, char const *argv[])
{
    printf("running...");
    total = sum(1, 1);
    printf("sum is: %d\n", total);

    sum_list();
    return 0;
}

int sum(int a, int b){
    return a + b;
}

void sum_list(){
    int sum = 0;
    int average, max;
    int arr[max];

    printf("enter the max \n");
    scanf("%d", &max);
    
    printf("give %d numbers, one at a time after pressing [enter] \n", max);
    for ( int i = 1; i <= max; i++){
        printf("enter number %d: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = sum/max;
    printf("average = %d", average);
}
