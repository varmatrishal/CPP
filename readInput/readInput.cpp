//Percentages of numbers input from a file
//
//
//Program by: Trishal Varma


#include <iomanip> 
#include <fstream>
#include <iostream> 
#include <string> 
using namespace std;


int main() // Starting the main function

    {
// Declare variables.
        
        const string inputFileName = "input.txt"; // Text file.
        ifstream inputFile; // Reads the file.
        int zeroes=0; // Holds all the zeros.
        int negatives=0; // Holds the number of (-)
        int positives=0; // Holds the number of (+)
        int count=0; // Holds the numbers
        double precentageOfPositives; // Holds the precentage > 0
        double precentageOfZeroes; // Holds the precentage of numbers = 0
        double precentageOfNegatives; // Holds the precentage of numbers < 0
        int value;
        
        inputFile.open(inputFileName); // Open the File.
        
        // Statement that opens the file correctly.
        if (!inputFile.fail())
        {
            cout << "Input file is open." << endl; // reading the file again
            cout << "Reading the numbers..." << endl;
            
            while (inputFile >> value)
            {
                if (value == 0) // just in case if the number turns out to be 0
                {
                    zeroes++;
                }
                else if (value > 0)
                {
                    positives++;
                }
                else
                {
                    negatives++;
                }
                
                count++; // Adds 1 to the numbers. the ++ symbol.
            } // End of the loop.
            
            cout << fixed << setprecision(1); // displays one digit after the decimal point
            
            // calculates the precentage
            precentageOfZeroes = 100.0*zeroes / count;
            precentageOfPositives = 100.0*positives / count;
            precentageOfNegatives = 100.0*negatives / count;
            
            // displays the results
            cout << "There were " << precentageOfZeroes << "% numbers equal to zero" << endl;
            cout << "There were " << precentageOfPositives << "% numbers greater than zero" << endl;
            cout << "There were " << precentageOfNegatives << "% negative numbers" << endl;
            
            cout << "Closing the input file." << endl;
            inputFile.close(); // closes the file
        } // closes the if statement
        
        else // in case the file doesn't open correctly
        {
            cout << "Error, unable to open the file " << inputFileName << "." << endl;
        }
        
      
    } // ends function main
