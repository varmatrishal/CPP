//  Lab 7 Exercise 1
//
//  Program by: Trishal Varma on 3/31/17.
//
// Xcode


#include <iostream>
using namespace std;

int main()				// Start of the main funcion body
{
    int Valid_Input,	// Variable "valid input"
    integer,		// Variable "integer"
    number_$;		// Variable "number of dollar signs"
    
    
// Loop that will have five valid intefer values.
    for (Valid_Input = 0; Valid_Input < 5; Valid_Input++)
    {

// Get integer between 1 through 10
        cout << "Enter an integer between (1-10) : ";
        cin >> integer;
        
// An "if" statement for number not inclusive to 1-10
        if ((integer < 1) || (integer > 10))
        {
// Display error message if otherwise.
            cout << "That is an invalid number. ";
            Valid_Input--;
        }
        
// Else statement for the number entered that are inbetween 1 to 10 including the two.
        else
        {
// A for loop to repeat the dollar sign according to the integer entered
            for (number_$ = 0; number_$ < integer; number_$++)
            {
                cout << "$";
            }
        }
        
        cout << endl;
    }
    
    
    system("pause");
    return 0;
    
    
}			// End main function
