/*Given an integer, n , print its first 10 multiples. Each multiple n x i (where 1<=i<10) should be printed on a new line in the form: n x i = result.*/
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
    int nu;
    int ans;
    scanf("%d",&nu);
    for(int i=1;i<=10;i++)
    {      
            ans=nu*i;
            printf("%d x %d = %d\n",nu,i,ans);
    }
    
    return 0;
}
