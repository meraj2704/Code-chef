#include<stdio.h>

int main()
{
    int n;
    int a= 1;
    scanf("%d",&n);
    int arr[100];
    int i,j;
    int sz;
    while(n--)
    {
        scanf("%d", &sz);
        for(i=0; i <sz; i++)
        {
            scanf("%d", &arr[i]);
        }
        j=0;
        while(arr[j]!=arr[sz])
        {
            if(arr[j] == arr[j+1])
            {
                a++;
               //
                break;
            }
             else if(arr[j] == arr[sz-1])
            {
                a++;
                printf("n");
            }
            j++;
        }
        printf("%d", a);


}
  }
