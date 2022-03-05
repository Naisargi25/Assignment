#include <iostream>

using namespace std;

class Employee
{
        //private member variables
        int salary;
        int hours;
        
        public:
            //get salary and hours
            void getInfo() 
            {
                cout << "\nEnter the salary of employee: ";
		cin >> salary;
		cout << "Enter the number of hours: ";
		cin >> hours;
            }
        
            //add 10$ to the salary if salary is less than 500
            void AddSal()
            {
                if(salary<500)
                {
                    salary += 10;
                }
            }
        
            //add 5$ to the salary if working hours is greter than 6
            void AddWork() 
            {
                if(hours>6)
                {
                    salary += 5;
                }
            }
            
            //display salary
            void displaySal()  
            {
                 cout << salary;
            }
};
int main()
{
        int n;
        printf("Enter total no. of employee: ");
        scanf("%d",&n);
        Employee emp[n];
        for(int i=0;i<n;i++)
        {
            emp[i].getInfo();
	    emp[i].AddSal();
	    emp[i].AddWork();
        }
        
        for(int i=0;i<n;i++)
	{
	     cout << "\nThe final salary of employee "<<i+1<<" is: ";
	     emp[i].displaySal();
	}
        return 0;
}
