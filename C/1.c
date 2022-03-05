#include<stdio.h>
#include<string.h>
void addbook();
void display();
void count();
void disp_author();
void title();
void acc_order();

struct library
{
  int ano;
  char title[30];
  char author[20];
  int price;
  int flag;
}b[100];

int n;
int main()
{
    int choice;
    do
    {
        printf("\n************Library Management System************\n\n");
        printf("1.Add book information\n2.Display book information\n3.List all books of given author\n4.List the title of specified book\n5.List the count of books in the library\n6.List the books in the order of accession number\n7.exit\n");;
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                addbook();
                break;
            case 2:
                display();
                break;
            case 3:
                disp_author();
                break;
            case 4:
                title();
                break;
            case 5:
                count();
                break;
            case 6:
                acc_order();
                break;
            case 7:
                printf("Thank you for visiting.!!!\n");
                break;
            default:
                printf("Enter valid choice..\n");
    }
    }while(choice!=7);
    
    return 0;
}

void addbook()
{
    printf("Enter information of book\n");
    printf("Accession number: ");
    scanf("%d",&b[n].ano);
    printf("Title of the book: ");
    scanf("%s",b[n].title);
    printf("Author name: ");
    scanf("%s",b[n].author);
    printf("Price: ");
    scanf("%d",&b[n].price); 
    printf("Issue status yes/no(1/0): ");
    scanf("%d",&b[n].flag);
    printf("New book is added successfully\n");
    n++; 
}

void display()
{
    if(n==0)
    {
        printf("Library is empty\n");
    }
    for(int i=0;i<n;i++)
    {
        printf("\nAccession Number: %d",b[i].ano);
        printf("\nBook title: %s",b[i].title);
        printf("\nBook author: %s",b[i].author);
        printf("\nBook price: %d",b[i].price);
        printf("\nIssue status(1-yes/0-No): %d",b[i].flag);
        printf("\n");
    }
}

void disp_author()
{
    if(n==0)
    {
        printf("Library is empty\n");
    }
    int c=0;
    char author[30];
    printf("Enter author name: ");
    scanf("%s",author);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(strcmp(author,b[i].author)==0)
        {
            c++;
            printf("\nAccession Number: %d",b[i].ano);
            printf("\nBook title: %s",b[i].title);
            printf("\nBook author: %s",b[i].author);
            printf("\nBook price: %d",b[i].price);
            printf("\nIssue status(1-yes/0-No): %d",b[i].flag);
            printf("\n");
        }
    }
    if(c==0)
    {
        printf("No book exist\n");
    }
}

void title()
{
    int acc_no;
    if(n==0)
    {
        printf("Library is empty\n");
    }
    
    printf("Enter Accession no.: ");
    scanf("%d",&acc_no);
    for(int i=0;i<n;i++)
    {
        if(acc_no==b[i].ano)
        {
            printf("\nTitle of the book is: %s",b[i].title);
            printf("\n");
        }
        else
        {
            printf("No such book exist\n");
        }
    }
}

void count()
{
    printf("Total no. of book in library is: %d\n",n);
}

void acc_order()
{
    int i, j, indexmin;
	struct library temp;
	for(i = 0; i<n-1; i++) 
	{
		indexmin = i;  
		for(j = i+1; j<n; j++)
			if(b[j].ano < b[indexmin].ano)
				indexmin = j;

		temp = b[i];
		b[i] = b[indexmin];
		b[indexmin] = temp;
	}
	for(int i=0;i<n;i++)
    {
        printf("\nAccession Number: %d",b[i].ano);
        printf("\nBook title: %s",b[i].title);
        printf("\nBook author: %s",b[i].author);
        printf("\nBook price: %d",b[i].price);
        printf("\nIssue status(1-yes/0-No): %d",b[i].flag);
        printf("\n");
    }
}
