// Program by:  Trishal Varma
// get score calculator






#include <iostream>
#include <iomanip>
using namespace std;

void getScore (int & score); // all the prototypes.
void calcAverage(int score1, int score2, int score3, int score4, int score5);
int findLowest(int test1, int test2, int test3, int test4, int test5);

int main()
{
    // declaration of the variabble.
    int score1;
    int score2;
    int score3;
    int score4;
    int score5;
    
    // calls the function getScore so all of the are retrived.
    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);
    
    // calcualtion of the average of the scores.
    calcAverage(score1,score2,score3,score4,score5);
    
    
    system("pause"); // pauses system
} // ends function main


void getScore( int & score)
{
    // gets input from the user.
    cout << "Enter a score between 0 and 100: " << endl;
    cin >> score;
    
    // validation loop
    while (score < 0 || score > 100)
    {
        cout << "Invalid input." << endl <<"Enter a score between 0 and 100: " << endl;
        cin >> score;
    }
}


void calcAverage(int test1, int test2, int test3, int test4, int test5)
{
    // declaring variables
    int sum;
    int lowest; 
    double average;
    
    // calls the function findLowest
    lowest = findLowest (test1,test2,test3,test4,test5);
    
    // calculations
    sum = test1 + test2 + test3 + test4 + test5 - lowest;
    average = sum / 4.0;
    
    // displays the results
    cout << fixed << setprecision(2);
    cout << "The average of the four highest scores is: " << average << endl;
}

// a function set to find the lowest score and return its value
int findLowest(int test1, int test2, int test3, int test4, int test5)
{
    int lowest = test1;
    
    if (test2 < lowest)
    {
        lowest = test2;
    }
    if (test3 < lowest)
    {
        lowest = test3;
    }
    if (test4 < lowest)
    {
        lowest = test4;
    }
    if (test5 < lowest)
    {
        lowest = test5;
    }
    
    return lowest;
}
