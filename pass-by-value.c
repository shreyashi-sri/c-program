#include <stdio.h>
int sumEvenNumbers(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i += 2)
        sum += i;
    return sum;
}
int main()
{
    int n,sum=0;
    printf("Enter a value for n: ");
    scanf("%d",&n);
    sum = sumEvenNumbers(n);
    printf("Sum of first %d even numbers is: %d\n",n,sum);
    return 0;
}