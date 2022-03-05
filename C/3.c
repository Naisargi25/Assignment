#include <stdio.h>

int main()
{
    int a[10] = {1,5,4,8,9,2,0,6,11,7}; 
    printf("Array elements are:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    
    int n,flag=1;
    printf("\nEnter an element to search: ");
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
       if(a[i]==n)
       {
           flag=1;
           printf("Yes\n");
           break;
       }
       else
       {
           flag=0;
       }
    }
    
    if(flag==0)
    {
        printf("No\n");
    }
    
    int temp;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(a[i]<a[j])
            {
              temp = a[i];
              a[i] = a[j];
              a[j] = temp;
            }
        }
    }
    
    printf("\nAfter sorting elements of array are:\n");
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
