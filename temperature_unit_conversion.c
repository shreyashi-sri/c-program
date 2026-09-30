#include <stdio.h>
float temp;
float C_to_F(float temp)
{
    return (temp * 9.0f/5.0f) + 32.0f;
}
float F_to_C(float temp)
{
    return (temp - 32.0f) * 5.0f/9.0f;
}
float C_to_K(float temp)
{
    return temp + 273.15f;
}
float main()
{
   char ch;
   printf("Enter temperature:");
   scanf("%f", &temp);
   printf("Enter the unit of temperature (C/F/K): ");
   scanf(" %c", &ch);
   if(ch=='C' || ch=='c')
   {
       printf("Temperature in Fahrenheit: %.2f\n", C_to_F(temp));
       printf("Temperature in Kelvin: %.2f\n", C_to_K(temp));
   }
   else if(ch=='F' || ch=='f')
   {
       printf("Temperature in Celsius: %.2f\n", F_to_C(temp));
       printf("Temperature in Kelvin: %.2f\n", C_to_K(F_to_C(temp)));
   }
   else if(ch=='K' || ch=='k')
   {
       printf("Temperature in Celsius: %.2f\n", F_to_C(C_to_F(temp)));
       printf("Temperature in Fahrenheit: %.2f\n", C_to_F(F_to_C(temp)));
   }
   else
   {
       printf("Invalid unit of temperature.\n");
   }
}