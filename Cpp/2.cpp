#include<iostream>
using namespace std;

class Matrix{
public:
	int rows;	
	int columns;
	int a[3][3]={1,2,3,4,5,6,7,8,9};
	int b[3][3]={1,2,3,4,5,6,7,8,9};
	Matrix()
	{
	    rows=3;
	    columns=3;
	}
	void no_of_row(int c)
	{
		rows=c;
	}
	void no_of_column(int d)
	{
		columns=d;
	}
	void entry(int r,int c,int d,int e)
	{
	    if(e==1)
	    {
	        for(int i=0;i<rows;i++)
	        {
		        for(int j=0;j<columns;j++)
		        {
		        	if(i==r && j==c)
		        	{
		        	    a[i][j]=d;
		        	    
		        	}
		        }
	        }
    	}
    	
	    if(e==0)
	    {
	        for(int i=0;i<rows;i++)
	        {
	            for(int j=0;j<columns;j++)
	            {
		            if(i==r && j==c)
		            {
			            a[i][j]=d;
		            }
            	}
        	}
    	}
    }
    
	void add()
	{
	    for(int i=0;i<rows;i++)
	    {
	        for(int j=0;j<columns;j++)
	        {
		        printf("%d\t",a[i][j]+b[i][j]);
	        }
	        printf("\n");
	    }
	}
	
	void multiply1()
	{
	    int mul[3][3];
        for(int i=0;i<rows;i++)
        {
	        for(int j=0;j<columns;j++)
	        {
	            mul[i][j]=0;
	            for(int k=0;k<columns;k++)
	            {
                	mul[i][j]+=a[i][j]+b[i][j];
	            }	
	         }
        }
	    for(int i=0;i<rows;i++)
	    {
	        for(int j=0;j<columns;j++)
	        {
		         printf("%d\t",mul[i][j]);
	         }
	            printf("\n");
    	}
	
    }
};


int main()
{
    Matrix s,s1;
    s1.no_of_row(2); //set rows
    s1.no_of_column(2); //set columns
    printf("Addition for 3x3 matrix is\n");
    s.add(); //for default constructor
    printf("\nAddition for 2x2 matrix is\n");
    s1.add();
    printf("\nMultiplication for 3x3 matrix is\n");
    s.multiply1();
    printf("\nMultiplication for 2x2 matrix is\n");
    s1.multiply1();
    return 0;
}	
