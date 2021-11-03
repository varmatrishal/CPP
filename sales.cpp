// Author:     Trishal Varma
// Date:       03/27/2019

// Write a program that asks the user to enter today's sales for five stores.
// Then should create a bar graph of each store's sales by displaying a row of astericks that represent $100.


#include <iostream>
#include <iomanip>
using namespace std;

int main()				// Main function
{
    
    int ST1,		// Variable for store 1
    ST2,			// Variable for store 2
    ST3,			// Variable for store 3
    ST4,			// Variable for store 4
    ST5,			// Variable for store 5
    Sales_1,		// Variable for sales 1
    Sales_2,		// Variable for sales 2
    Sales_3,		// Variable for sales 3
    Sales_4,		// Variable for sales 4
    Sales_5,		// Variable for sales 5
    sales;			// Variable for sales of the stores
    
    
    // Get the sales for each store
    cout << "Enter today's sales for store 1: ";
    cin >> ST1;
    cout << "Enter today's sales for store 2: ";
    cin >> ST2;
    cout << "Enter today's sales for store 3: ";
    cin >> ST3;
    cout << "Enter today's sales for store 4: ";
    cin >> ST4;
    cout << "Enter today's sales for store 5: ";
    cin >> ST5;
    
    // show :Sales Bar Chart: and that it is same as a *.
    cout << "\n\nSALES BAR CHART";
    cout << "\n(Each * = $100) ";
    
    // Calculate the sales by hundreds for store 1
    Sales_1 = ST1 / 100;
    cout << "\nStore 1: ";
    
    // A for loop to represent * in terms of hundreds for the sales of store 1
    for (sales = 0; sales < Sales_1; sales++)
    {
        cout << "*";
        
    }
    
    // Calculate of sales by hundreds for store 2
    Sales_2 = ST2 / 100;
    cout << "\nStore 2: ";
    
    // A for loop to represent * in terms of hundreds for the sales of store 2
    for (sales = 0; sales < Sales_2; sales++)
    {
        cout << "*";
        
    }
    
    // Calculation of sales by hundreds for store 3
    Sales_3 = ST3 / 100;
    cout << "\nStore 3: ";
    
    // A for loop to represent * in terms of hundreds for the sales of store 3
    for (sales = 0; sales < Sales_3; sales++)
    {
        cout << "*";
        
    }
    
    // Calculation of sales by hundreds for store 4
    Sales_4 = ST4 / 100;
    cout << "\nStore 4: ";
    
    // A for loop to represent * in terms of hundreds for the sales of store 4
    for (sales = 0; sales < Sales_4; sales++)
    {
        cout << "*";
        
    }
    
    // Calculation of sales by hundreds for store 5
    Sales_5 = ST5 / 100;
    cout << "\nStore 5: ";
    
    // A for loop to represent * in terms of hundreds for the sales of store 1
    for (sales = 0; sales < Sales_5; sales++)
    {
        cout << "*";
        
    }
    
    // To add the new line after Store 5 sales bar.
    cout << endl;
    
    
    
    system ("pause");
    return 0;
    
}				// End main function
