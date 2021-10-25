// cppAssignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Nedim Basic
//24th of October, 2021
//Assignment 1

#include <iostream>


int main()
{
    //display the welcome message
    std::cout << "Welcome to Nedim's program\n";
    std::cout << "Convert a large number of seconds into hours, minutes, and seconds\n\n";
    int sec = 0;
    int hours = 0;
    int minutes = 0;


    //prompt the user for input
    std::cout << "Please enter a number of seconds: ";
    std::cin >> sec;

    //start a new line
    std::cout << std::endl;

    //do the calculations
    hours = sec / 60 / 60; //convert seconds into hours and round
    sec -= hours * 60 * 60; //subtract the hours from the seconds variable
    minutes = sec / 60; //convert the seconds into minutes and round
    sec -= minutes * 60; //subtract the minutes from the seconds variable

    //display the results
    std::cout << "The number of hours in the number is: " << hours << std::endl;
    std::cout << "The number of minutes in the number is: " << minutes << std::endl;
    std::cout << "The number of seconds in the number is: " << sec << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
