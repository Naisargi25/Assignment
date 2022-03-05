#include <iostream>

using namespace std;

class AddAmount
{
    //private member variable
    int amount = 50;
    
    public:
        //default constructor
        AddAmount() 
        {
            cout << "Inside default constructor" << endl;
        }
    
       //parameterized constructor
        AddAmount(int am)
        {
            cout << "\nInside parameterized constructor" << endl;
            amount += am;
        }
    
       //display amount
        void display()
        {
            cout << "Final amount in the Piggi Bank: " << amount << endl;
        }
};
int main()
{
    AddAmount a1;
    a1.display();
    AddAmount a2(100);
    a2.display();
    return 0;
}
