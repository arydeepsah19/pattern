/*
Write a programm to make this pattern
*
**
***
****
*/
#include<stdio.h>
int main()
/*{
    int i, j, num;

    printf("Enter the number\n");
    scanf("%d", &num);

    for ( i = 1; i <= num; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("*", j);
        }
        
        printf("\n");
    }
    return 0;
}*/

/*
Write a programm to make this pattern
1
12
123
1234
*/
/*{
    int i, j, num;

    printf("Enter the number\n");
    scanf("%d", &num);

    for ( i = 1; i <= num; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        
        printf("\n");
    }
    return 0;
}*/

/*
Write a programm to make this pattern
1
2 3
4 5 6
7 8 9 10
*/
/*{
    int i, j, num, k=1;

    printf("Enter the number\n");
    scanf("%d", &num);

    for ( i = 1; i <= num; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d ", k);
            k++;
        }
        
        printf("\n");
    }
    return 0;
}*/

/*
Write a programm to make this pattern
   1 
  2 3 
 4 5 6 
7 8 9 10
*/
/*{
    int i, j, k,s, num, p=1;

    printf("Enter the number\n");
    scanf("%d", &num);

    s=i+4-1;

    for ( i = 1; i <= num; i++)
    {
        for ( j = s; j >=1; j--)
        {
            printf(" ");
        }
        for ( k = 1; k <= i; k++)
        {
            printf("%d ", p);
            p++;
        }
        printf("\n");
        s--;
    }
    
}*/

/*
Write a programm to make this pattern
  * 
  * * 
 * * * 
* * * *
*/
{
    int i, j, k, num, s, p=1;

    printf("Enter the number\n");
    scanf("%d", &num);

    s=i+4-1;

    for ( i = 1; i <= num; i++)
    {
        for ( j = s; j >=1; j--)
        {
            printf(" ");
        }
        for ( k = 1; k <= i; k++)
        {
            printf("* ", p);
            p++;
        }
        printf("\n");
        s--;
    }
    

}