/* prog1Step4.cpp
 *    Play the dice game, where each user chooses the Red, Green or Blue die.
 *
 * Class: CS 141
 * Author: Tejaswi Reddy Kondammagari
 * Lab: Mon 9am
 * System:  C++ online in codio.com
 *
 *  Partial sample output:
 *  Class: CS 141
 Lab: Tues 5am
 System:  C++ in codio.com
 Welcome to the dice game, where you and your opponnent each choose
 one of the red, green or blue dice and roll them.
 
 The dice contain the following sides:
 Red: 1 4 4 4 4 4
 Green: 2 2 2 5 5 5
 Blue: 6 3 3 3 3 3
 
 Enter the die colors (R G or B): RG
 R:4 G:5, Score: 0 to 1
 *
 *   45 Programming Style Rubric (Given only if program runs substantially correctly)
 *         5 This rubric is included in the program
 *        10 Variable names are meaningful and use camel-case (e.g. totalCount)
 *        10 Comments: Has header.  Comments on each significant block of code
 *        10 Appropriate data and control structures
 *        10 Code Layout: Appropriate indentation and blank lines
 */
#include <iostream>
#include <iomanip>    // Needed for setw() output field width formatting
#include <cstdlib>    // Needed for rand() to work
using namespace std;

int main()
{
    // Class information             //***Park: You don't have to put the blank line after the comment.
    
    cout << "Class: CS 141" << endl;
    cout << "Lab: Tues 5am" <<endl;
    cout << "System: C++ in codio.com" << endl;
    
    // Introduction to the dice game
    
    cout << "Welcome to the dice game, where you and your opponent each choose "<< endl;
    cout << "one of the red, green or blue dice and roll them." << endl << endl;
    
    // Display the dice and their possible outcomes
    
    cout << "The dice contain the following sides: " << endl;
    cout << setw (20) << "Red: 1 4 4 4 4 4" << endl;
    cout << setw (20) << "Green: 2 2 2 5 5 5" << endl;
    cout << setw (20) << "Blue: 6 3 3 3 3 3" << endl << endl;
    
    // Variables to store user's choice
    
    char colorSelection1;
    char colorSelection2;
    
    // Fetching input from the user through command line.
    
    cout << "Enter the die colors (R G or B): ";
    cin >> colorSelection1 >> colorSelection2;
    cout << endl;
    
    // Storing face value.
    
    int faceValue1;
    int faceValue2;
    
    // Storing the random number.
    
    int randomNumber;              //***Park: Your variable name should be a little more meaningful.
    int randomNumber1;
    
    // Stores player's score.
    
    int playerScore1 = 0;
    int playerScore2 = 0;
    
    // Logic to generate 50 random outcomes for the players
    
    for (int i=1; i<=50; i++){
        
        randomNumber = rand () % 6 ; // Random number generator.
        randomNumber1 = rand() % 6 ;
        
        // Logic for first player's color choice
        
        if (colorSelection1 == 'R'){
            if (randomNumber==0){
                faceValue1=1;
            }else{
                faceValue1=4;
            }
        }
        
        // Logic for the second player's color choice
        
        if (colorSelection2 == 'R'){
            if (randomNumber1==0){
                faceValue2=1;
            }
            else{
                faceValue2=4;
            }
        }
        
        // Logic for first player's color choice
        
        if (colorSelection1 == 'G'){
            if (randomNumber<3){
                faceValue1=2;
            }else{
                faceValue1=5;
            }
        }
        
        // Logic for the second player's color choice
        
        if (colorSelection2 == 'G'){
            if (randomNumber1<3){
                faceValue2=2;
            }
            else{
                faceValue2=5;
            }
        }
        
        // Logic for first player's color choice
        
        if (colorSelection1 == 'B'){
            if (randomNumber==0){
                faceValue1=6;
            }else{
                faceValue1=3;
            }
        }
        
        // Logic for the second player's color choice
        
        if (colorSelection2 == 'B'){
            if (randomNumber1==0){
                faceValue2=6;
            }
            else{
                faceValue2=3;
            }
        }
        
        // Score counter based on face values
        
        if (faceValue1 > faceValue2)
        {
            playerScore1 += 1;
        }
        else
        {
            playerScore2 += 1;
        }
        
        // Displaying outcome of each role die and the score
        
        cout <<" "<<setw(2)<<i<<". "<<colorSelection1 << ":" << faceValue1 << " " << colorSelection2 <<
        ":" << faceValue2 << "," << " Score: "<<setw(2) << playerScore1 << " to " << playerScore2 <<
        endl;
    }
    
    return 0;
}//end main()
