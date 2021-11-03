// Author:     Trishal Varma
// Date:       03/27/2019
// Creating iteration and loop.

#include <iostream>
#include <iomanip>
using namespace std;

int main()						// Main function
{
    
    
    int num,				// Variable number
    multiples = 99,			// Multiples of 3
    power = 2,				// Variable for power of 2
    power_d = 1048576,		// Variable in decreaing manner.
    multiples_2 = 100;
    
    
    // Part a: making loop to print out even integers.
    
    for (num = 2; num <= 100; num++)
    {
        // Creating if statement to get only the even
        if (num % 2 == 0)
        {
            // Putting width to 4 digits as highest number being 100.
            
            cout << setw(4) << num << "  ";
            
            // if statement to get a new line every 10 integers
            if (num % 20 == 0)
            {
                
                cout << endl;
            }
        }
    }
    
    // new line
    cout << "\n";
    
    // A do-while statement to prints out the integer that are multiples of 3 from 99 down to 3
    do
    {
        // An if statement to get the multiples of 3
        if (multiples % 3 == 0)
        {
            // Putting the set width to 3 digits as the highest number is only 99
            cout << setw(3) << multiples;
            
            // An if statement to get a new line every 30 percentages  a new line
            if (multiples % 30 == 0)
            {
                cout << endl;
            }
            
            multiples = multiples - 3;
            
        }
    } while (multiples >= 3);		// End do-while function
    
    // two new line
    cout << "\n\n";
    
    // A while statement to prints out the integers between 2 and 1,048,576 that are integer powers of 2.
    while (power <= 524288)
    {
        // Calculation to get the power of 2
        power = power * 2;
        // Putting the set width to 4 digits as the highest number is only 7 digits
        cout << setw(7) << power << " ";
        
        // An if statement for every 10 perecentages a new line
        if (power % 10 == 0)
        {
            cout << endl;
        }
        
    }
    
    // Creating two new lines
    cout << "\n\n";
    
    // A while statement to prints out the integers between 1,048,576 down to 2 that are integer powers of 2.
    while (power_d >= 4)
    {
        // Calculation to go down by the power of 2
        power_d = power_d / 2;
        
        // Putting the set width to 4 digits as the highest number is only 7 digits
        cout << setw(7) << power_d << " ";
        
        // An if statement for every 10 percentages a new line
        if (power_d % 10 == 0)
        {
            cout << endl;
        }
    }
    
    // Creating two new lines
    cout << "\n\n";
    
    // A do-while statement to print out the integers that are multiples of 4 from 100 down to 0
    do
    {
        // An if to get the multiples of 4
        if (multiples_2 % 4 == 0)
        {
            // Putting the set width to 4 digits as the highest number is only 100
            cout << setw(4) << multiples_2;
            
            // An if statement to get a new line every 20 percentages
            if (multiples_2 % 20 == 0)
            {
                cout << endl;
            }
            
            multiples_2 = multiples_2 - 4;
            
            
        }
    } while (multiples_2 >= 0);		// End do-while function
    
    
    system("pause");
    return 0;
    
}						// End main function
