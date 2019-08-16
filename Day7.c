/*Given an array,A ,of N integers,print A's elements in reverse order as a single line of space-separated numbers.*/
#include <stdio.h>
int main()
{
    int a[1000];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
            scanf("%d",&a[i]);
    }
    for(int j=n-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
    return 0;
}
