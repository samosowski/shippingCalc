//Samantha Osowski
//Week 3 Programming Assignment
//In this program we will make a shipping calculator to determine the price of shipping a item.

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
    //Displaying title of program
    cout << ".............................................." << endl;
    cout << "ITCS 2530 - Programmng Assignment for week #3" << endl;
    cout << ".............................................." << endl;

    //Declaring variables
    string item;
    string destination;
    string fragile;
    double total = 0;
    double orderTotal;

    //getting inputs from user
    cout << "Please enter the item name (no space).........:";
    cin >> item;

    cout << "Is the item fragile? (y=yes/n=no).............:";
    cin >> fragile;

    //if statement if item is fragile add $2 and invalid text
    if (fragile.compare("y") == 0 || fragile.compare("Y") == 0 || fragile.compare("n") ==0 || fragile.compare("N") ==0) {
        total += 2;
    }

    //Getting the user input of the order total
    cout << "Please enter your order total.................:";
    cin >> orderTotal;

    //Getting the user input of the destination
    cout << "Please enter destination. (usa/can/aus/mars).......:";
    cin >> destination;

    //Changing the input to all uppercase for item and destination 
    transform(destination.begin(), destination.end(), destination.begin(), ::toupper);
    transform(item.begin(), item.end(), item.begin(), ::toupper);


    //Determining the price based on desination and order total 
    if (destination.compare("USA") == 0) {
        if (orderTotal >= 50.00) {
            total += 6.00;
        }
        else if (orderTotal <= 50.01) {
            total += 9.00;
        }
        else if (orderTotal >= 100) {
            total += 9.00;
        }
        else if (orderTotal <= 100.01) {
            total += 12.00;
        }
        else if (orderTotal < 150.00) {
            total += 0.00;
        }
    }
    else if (destination.compare("CAN") == 0) {
        if (orderTotal >= 50.00) {
            total += 8.00;
        }
        else if (orderTotal <= 50.01) {
            total += 12.00;
        }
        else if (orderTotal >= 100) {
            total += 12.00;
        }
        else if (orderTotal <= 100.01) {
            total += 15.00;
        }
        else if (orderTotal < 150.00) {
            total += 0.00;
        }
    }
    else if (destination.compare("AUS") == 0) {
        if (orderTotal >= 50.00) {
            total += 10.00;
        }
        else if (orderTotal <= 50.01) {
            total += 14.00;
        }
        else if (orderTotal >= 100) {
            total += 14.00;
        }
        else if (orderTotal <= 100.01) {
            total += 17.00;
        }
        else if (orderTotal < 150.00) {
            total += 0.0;
        }
    }
    else if (destination.compare("MARS") == 0) {
        if (orderTotal >= 50.00) {
            total += 15.00;
        }
        else if (orderTotal <= 50.01) {
            total += 20.00;
        }
        else if (orderTotal >= 100) {
            total += 20.00;
        }
        else if (orderTotal <= 100.01) {
            total += 25.00;
        }
        else if (orderTotal < 150.00) {
            total += 0.00;
        }
    }
    else {
        cout << "Invalid entry, exiting" << endl;
        return 0;
    }

    //Displaying the output
    cout << "\nYour item is..................." << item << endl;
    cout << "Your shipping cost is..........$" << total << endl;
    cout << "Your are shipping to............" << destination << endl;
    cout << "Your total shipping costs are..$" << total + orderTotal << endl;
    cout << "\n..............................Thank you!" << endl;
    return 0;
}

