#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

struct UserInformation
{
    string firstName, lastName, address, section;
    int yearLevel;
};

string StudentInformation();
string NewInformation();

int main()
{
    UserInformation student;
    int option;

    system("cls");
    cout << "Student Information Manager" << endl;
    cout << "What would you like to do." << endl;
    cout << "View a student's information (1)" << endl;
    cout << "Input new information        (2)" << endl;
    cout << "Exit the Program             (3)" << endl;
    cin >> option;

    switch(option)
    {
        case 1:
            StudentInformation();
            break;

        case 2:
            NewInformation();
            break;

        case 3:
            cout << "Thank  you for using the Student Information Manager";
            break;

        default:
            cout << "Invalid Input";
            main();
    }
}

string StudentInformation()
{
    UserInformation student;
    string allText = "";

    system("cls");
    cout << "Please enter a last name to check its information:" << endl;
    cin >> student.lastName;

    ifstream filename(student.lastName + ".txt");
    if (filename.is_open())
    {
        while (getline(filename, allText) )
        {
            filename >> allText;
            cout << allText;
        }
    filename.close();
    }
    else
    {
        cout << "nonexistent file";
    }
}


string NewInformation()
{
    UserInformation student;
    int option;
    system("cls");
    cout << "Please enter the following information" << endl;
    cout << "Last Name: ";
    getline(cin >> ws, student.lastName);
    cout << "First Name: ";
    getline(cin >> ws, student.firstName);
    cout << "Address: ";
    getline(cin >> ws, student.address);
    cout << "Year Level: ";
    cin >> student.yearLevel;
    cout << "Section: ";
    cin >> student.section;

    system("cls");
    cout << "The information of student " << student.lastName << " is the following." << endl;
    cout << student.lastName << ", " << student.firstName << endl;
    cout << student.address << endl;
    cout << student.yearLevel << " " << student.section;
    cout << endl << endl;
    cout << "Would you like to save this file or quit the program" << endl;
    cout << "Save (1)" << endl;
    cout << "Quit (2)" << endl;
    cin >> option;

    switch(option)
    {
        case 1:
        {
            system("cls");
            ofstream filename(student.lastName + ".txt", ios::app);
            filename << student.lastName << ', ' << student.firstName << endl;
            filename << student.address << endl;
            filename << student.yearLevel << '-' << student.section;
            system("cls");
            cout << "The information had been saved to " << student.lastName << ".txt";
            break;
        }

        default:
            cout << "Thank you for using this program";
    }
}

