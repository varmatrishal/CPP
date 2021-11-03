// Program By:  Trishal Varma
// Description: Functions



#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

bool isPrime(int number); // Have  prototype before the main funciton.



// Start of the main funciton.
int main()
{
    
    const string outputFileName = "output.txt"; // file placement.
    ofstream outputFile; // printing of the outpu file.
    bool prime; // prime number bool
    int input; // prime number int
    int count = 0; // checked prime int
    int number = 2; // tested int.
    
    
    outputFile.open(outputFileName); // opens file from.
    
    if (!outputFile.fail()) // If files opens correctly then....
    {
        cout << "Enter an integer between 1 and 100:" << endl; // user enters.
        cin >> input;
        
        while (input < 1 || input > 100) // validation loop.
        {
            cout << "Invalid input." << "Enter an integer between 1 and 100" << endl;
            cin >> input;
        }
        while (count < input)
        {
            prime = isPrime(number); // prime function.
            
            
            if (prime) // if the number is prime
            {
                count++; // increases count by 1 for it.
                
                outputFile << setw(5) << number << " ";
                if (count % 10 == 0) // start a new line after 10 prime numbers
                    outputFile << endl;
            }
            number++;
        }
        
    } // ends if statement
    
    else // if statemnt is wrong then.
    {
        cout << "Error, unable to open output file " << outputFileName << "." << endl;
    } // ends else statement
    
    cout << "Closing the output file." << endl; // closing the file.
    outputFile.close();
    system("pause");
}

// a bool function that checks to check if the number given by the user is prime or not. 
bool isPrime(int number)
{
    if (number < 2) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i = 3; (i*i) <= number; i += 2)
    {
        if (number % i == 0) return false;
    }
    return true;
}
