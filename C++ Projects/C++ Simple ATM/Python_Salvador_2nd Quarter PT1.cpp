#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void Login();
void Registration();
void Account();

int main()
{
    int option;
    cout << "\t\t===================================\n";
    cout << "\t\t     Welcome to the simple ATM" << endl;
    cout << "\t\t===================================\n";
    cout << "\t\t  What would you like to do today" << endl << endl;
    cout << "\t\t|| Enter 1 to Login to an account ||" << endl;
    cout << "\t\t|| Enter 2 to Register an account ||" << endl;
    cout << "\t\t|| Enter 3 to Exit the ATM        ||" << endl;
    cin >> option;

    switch(option)
    {
        case 1:
            Login();
            break;

        case 2:
            Registration();
            break;

        case 3:
            cout << "\t\t===================================\n";
            cout << "\tThank you for using our simple ATM. Please come again!" << endl;
            cout << "\t\t===================================\n";
            break;

        default:
            system("cls");
            cout << "\t\t===================================\n" << endl;
            cout << "\t\tError. Please input a valid option." << endl << endl;
            main();
    }
}

void Login()
{
    int count=0;
    string usernameLogin, passwordLogin, id, password;
    system("cls");
    cout << "\t\t===================================\n";
    cout << "\t      Please enter your username and password." << endl << endl;
    cout << "\t\tUSERNAME: ";
    cin >> usernameLogin;
    cout << "\t\tPASSWORD: ";
    cin >> passwordLogin;

    ifstream input("salvadorrecords2.txt");

    while(input>>id>>password);
    {
        if(id==usernameLogin && password==passwordLogin)
        {
            count=1;
            system("cls");
        }
    }
    input.close();

    if(count==1)
    {
        system("cls");
        cout << "\t\t===================================\n";
        cout << "\n\t\tYour login to " << usernameLogin << " was successful." << endl << endl;
        Account();
    }
    else
    {
        system("cls");
        cout << "\t\t===================================\n" << endl;
        cout << "\tLogin error. Please check your username and password." << endl << endl;
        main();
    }
}

void Registration()
{
    int opt;
    string usernameRegistration, passwordRegistration, idRegistration, passRegistration;
    system("cls");
    cout << "\t\t===================================\n";
    cout << "\t   Please enter the USERNAME you would like to use: ";
    cin >> usernameRegistration;
    cout << "\t   Please enter the PASSWORD you would like to use: ";
    cin >> passwordRegistration;

    ofstream f1("salvadorrecords2.txt", ios::app);
    f1 << usernameRegistration << ' ' << passwordRegistration << endl;
    system("cls");
    cout << "\t\t===================================\n" << endl;
    cout << "\t    You have successfully registered your account." << endl << endl;
    main();
}

void Account()
{
    double deposit, withdrawal, balance=0;
    int option;

    cout << "\t\t===================================\n";
    cout << "\t\t      Welcome to your account" << endl;
    cout << "\t\t===================================\n";
    cout << "\t\t  What would you like to do today" << endl << endl;
    cout << "\t\t|| Enter 1 to Deposit             ||" << endl;
    cout << "\t\t|| Enter 2 to Withdraw            ||" << endl;
    cout << "\t\t|| Enter 3 to Check your balance  ||" << endl;
    cout << "\t\t|| Enter 4 to Log out             ||" << endl;
    cin >> option;

    while(option != 4)
    {
        switch(option)
        {
            case 1:
                cout << "\t\t===================================\n" << endl;
                cout << "\t Please enter the amount you would like to Deposit: $";
                cin >> deposit;
                balance = balance + deposit;
                system("cls");
                cout << "\t\t===================================\n" << endl;
                cout << "\tYou have succesfully deposited $" << deposit << " to your account." << endl << endl;
                break;

            case 2:
                cout << "\t\t===================================\n" << endl;
                cout << "\t Please enter the amount you would like to Withdraw: $";
                cin >> withdrawal;

                if(balance < withdrawal)
                {
                    system("cls");
                    cout << "\t\t===================================\n" << endl;
                    cout << "\tYou have insufficient funds to make that withdrawal." << endl << endl;
                }
                else
                {
                    balance = balance - withdrawal;
                    system("cls");
                    cout << "\t\t===================================\n" << endl;
                    cout << "\tYou have succesfully withdrawn $" << withdrawal << " from your account." << endl << endl;
                }
                break;

            case 3:
                system("cls");
                cout << "\t\t===================================\n" << endl;
                cout << "\t\t   Your current Balance is: $" << balance << endl << endl;
                break;

            default:
                system("cls");
                cout << "\t\t===================================\n" << endl;
                cout << "\t\tError. Please input a valid option." << endl << endl;
        }
        cout << "\t\t===================================\n";
        cout << "\t     Is there anything else you would like to do" << endl << endl;
        cout << "\t\t|| Enter 1 to Deposit             ||" << endl;
        cout << "\t\t|| Enter 2 to Withdraw            ||" << endl;
        cout << "\t\t|| Enter 3 to Check your balance  ||" << endl;
        cout << "\t\t|| Enter 4 to Log out             ||" << endl;
        cin >> option;
    }
    system("cls");
    cout << "\t\t===================================\n" << endl;
    cout << "\t   You have successfully logged out of your account" << endl << endl;
    main();
}
