#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int a,k;
    double b;
    char v[100];
    char c[100];
    scanf("%d",&a);
    scanf("%lf",&b);
    scanf("%*[\n] %[^\n]", c); 
    //scanf("%s",&c);
    strcpy(v,s);
    int sum=0;
    double de=0;
    sum=i+a;
    de=d+b;
    printf("%d\n",sum);
    printf("%.1lf\n",de);
    /*for(k = 0; s[k] != '\0'; ++k)   
    for(int j = 0; c[j] != '\0'; ++j, ++k)
    {
        s[k] = c[j];
    }
    s[k] = '\0';*/
    
    //strcat(v,c);
    printf("%s%s", s, c);

    return 0;
}