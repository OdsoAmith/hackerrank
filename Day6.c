/*Given a string,S , of length N that is indexed from 0 to N-1 , print its even-indexed and odd-indexed characters as 2 space-separated strings on a single line (see the Sample below for more detail).

Note: 0  is considered to be an even index.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
     int m;
     scanf("%d",&m);
     while(m)
     {
     int n;
     char s[10000];
     scanf("%s",s);
     n=strlen(s);
    
     
     for(int  i = 0; i<n; i++)
     {
         if(i%2==0)
         {
                printf("%c",s[i]);
         }
         continue;
    }
    
    printf(" ");
    
      for(int  i = 0; i<n; i++)
     {
         if(i%2==1)
         {
                printf("%c",s[i]);
         }
    }
     m--;
     printf("\n");
}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
