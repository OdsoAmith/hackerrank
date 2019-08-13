/*Given an integer,n, perform the following conditional actions:

If n is odd, print Weird
If n is even and in the inclusive range of 2 to 5, print Not Weird
If n is even and in the inclusive range of 6 to 20 , print Weird
If n is even and greater than 20, print Not Weird
Complete the stub code provided in your editor to print whether or not n is weird.*/
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


int n;
scanf("%d",&n);
if(n%2!=0)
{
    printf("Weird");
}
else if(n%2==0&&n>1&&n<6)
{
    printf("Not Weird");
}
else if(n%2==0&&n>5&&n<21)
{
    printf("Weird");
}
else if(n%2==0&&n>20)
{
    printf("Not Weird");
}
    return 0;
}
