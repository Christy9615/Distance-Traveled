/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Distance_Traveled.cpp
 * Author: rcc
 *
 * Created on October 18, 2016, 8:15 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare integer speed=0,float hours and dTraveled=0
    //set width and decimal
    int speed=0;
    float hours=0;
    float dTraveled=0;
    const int B_WIDTH=2, A_WIDTH=14, H_WIDTH=19,D_DIGITS=2;
    
    // Prompt user to enter value of speed
    cout << "What is the speed of the vehicle in MPH? ";
    cin >> speed;
    
    // test speed <0 or not
    while (speed < 0)
    {
        cout << "Please enter a positive value for the speed of the vehicle: ";
        cin >> speed;
    }
    
    //Prompt user to enter value of hours
    cout << "How many hours has it traveled? ";
    cin >> hours;
    
    // test hours <1 or not
    while (hours < 1)
    {
        cout << "Please enter a value greater than or equal to 1 for;";
        cout << " time traveled: ";
        cin >> hours;
    }
    
    //output the title part(Hour and Distance Traveled)
    cout << "Hour" << setw(H_WIDTH) << "Distance Traveled" << endl << endl;
    cout << "--------------------------------" << endl;
    
    // for loop of calculating Distance Traveled
    for(int i = 1; i <= hours; i++)
    {
        dTraveled = speed * i;
        cout << setw(B_WIDTH) << i << setw(A_WIDTH);
        cout << setprecision(D_DIGITS)<< fixed << dTraveled << endl;
        
    }
    
    return 0;
}
