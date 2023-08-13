#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,n;
    printf("enter a number");
    scanf("%d",&n);
i=n+1;
    while(i<=n+10){
        printf("%d\n",i);
        i++;
    }
    return 0;
}
