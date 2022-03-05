#include <stdio.h>

int main()
{
    
    int n1,n2,n3;            
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the size of second array: ");
    scanf("%d",&n2);
    
    n3=n1+n2;
    printf("Enter the elements of 1st array: ");
    int a[n1],b[n2],c[n3];     
    for(int i=0;i<n1;i++)      
    {
       scanf("%d",&a[i]);
       c[i]=a[i];
    }
    int k=n1;
    printf("Enter the elements of 2nd array: ");
    for(int i=0;i<n2;i++)     
    {
        scanf("%d",&b[i]);
        c[k]=b[i];
        k++;
    }
    printf("\nBefore sorting...\n");
    printf("X: ");
    for(int i=0;i<n1;i++)      
    {
       printf("%d ",a[i]);
    }
    printf("\nY: ");
    for(int i=0;i<n2;i++)      
    {
       printf("%d ",b[i]);
    }
    
    printf("\nAfter sorting...\n");
    for(int i=0;i<n3;i++)         //Sorting Array
    {
        int temp;
        for(int j=i+1; j<n3 ;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }   
    
    printf("X: ");
    for(int i=0 ; i<n1 ; i++)       //Print the sorted Array X[]
    {
        printf("%d ",c[i]);
    }
    printf("\nY: ");
    for(int i=n1 ; i<n3 ; i++)       //Print the sorted Array Y[]
    {
        printf("%d ",c[i]);
    } 
   
    
    return 0;   
}
