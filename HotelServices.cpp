// this is a simple c++ program for room booking
#include <iostream>
using namespace std;

// Main function
int main()
{
    // Declaring variables
    int choice;
    char subchoice;

    cout << "Welcome to Jone's Hotel service :\n we have two rooms : \n 1-Enter 1 if you want room for three persons \n 2-Enter 2 if you want room for five persons\n ";
    cin >> choice;
    // Using switch case
    switch (choice)
    {
    case 1:
    {
        cout << "We have two types of three person room \n 1-One single bed (enter a).\n 2-No single bed(enter b).\n";
        cin >> subchoice;
        if (subchoice == 'a') 
        {
            cout << "Three person room with one bed has been booked for you. You must come before 8 pm.";
        }
        else if (subchoice == 'b')
        {
            cout << "Three person room without bed has been booked for you. You must come before 8 pm.";
        }
        else
        {
            cout << "Invalid input!!\n";
        }
        break;
    }
    case 2:
    {
        cout << "We have three types of four person room \n 1-four single beds (enter c).\n 2-No single bed(enter d).\n 3-Two single beds(enter e) \n";
        cin >> subchoice;
        if (subchoice == 'c')
        {
            cout << "five person room with four beds has been booked for you. You must come before 8 pm.";
        }
        else if (subchoice == 'd')
            cout << "five person room without bed has been booked for you. You must come before 8 pm.";

        else if (subchoice == 'e')
        {
            cout << "five person room with two beds has been booked for you. You must come before 8 pm.";
        }
        else
        {
            cout << "Invalid input!!";
        }
        break;
    }
    default:
        cout << "Invalid input!!" << endl;
    }
    return 0;
}
