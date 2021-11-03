// Lab 9 Exercise 3
// Currency conversions
// Date: 04/14/17
// Program by: Trishal Varma





#include <iostream>
#include <iomanip>
using namespace std;

// The program will convert currency from dollar to others.
float convertToYen(float dollars);

//create a void function to convert dollars to Euros and Pesos.

void convertToEurosAndPesos(float& us_dollars, float& euros, float& Pesos);

//declared main function
int main ()
{
    //declared variables
    float dollars, euros, pesos, yen;
    // Set deciman points
    cout << fixed << showpoint << setprecision(2);
    
    //Enter dollar
    cout << "Please input the amount of US Dollars "
    << "you want converted: ";
    
    //input the value
    cin >> dollars;
    
    //print out the dollar amount
    cout<<"\n\nThe value of "<<dollars<<" Dollars is: ";
    
    yen = convertToYen(dollars);
    //conversion to yen adn print
    cout<<"\n"<<yen<<"Yen";
    
    //calling the function which converted Dollars to Euros and Pesos
    convertToEurosAndPesos(dollars,euros,pesos);
    cout<<endl;
    
    
    // exit command.
    return 0;
}



// Function body starts here.
float convertToYen(float dollars)
{
    float Yen; // Declaring variable.
    
    Yen = dollars*116.56;
    
    return Yen;
}
//body of the declared function starts here
void convertToEurosAndPesos(float& us_dollars,float& euros, float& Pesos)
{
    //calculating euros
    euros= us_dollars*.95;
    //calculating Pesos
    Pesos = us_dollars*20.72;
    //printing out euros and pesos
    cout<<endl<<euros<<"Euros";
    cout<<endl<<Pesos<<"Pesos";
    
}
