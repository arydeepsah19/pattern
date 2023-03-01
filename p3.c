//Write a programm to find odd number and their sum
#include<stdio.h>
int main()
{
    int i, num, sum;

    printf("Input the number of terms\n");
    scanf("%d", &num);

    printf("Odd number are: ");

    for ( i = 1; i <= num; i++)
    {
        printf("%d ", 2*i-1);
        sum=sum+(2*i-1);
    }
    printf("\nSum of odd natural number upto %d terms: %d\n", num,sum);
    return 0;
}