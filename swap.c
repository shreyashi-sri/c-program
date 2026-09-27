#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a and b: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping: a = %d, b = %d\n",a,b);
    // Swapping logic
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n",a,b);
    return 0;
}