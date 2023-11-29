#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <iomanip>
#include <sstream>
#include <cstdio>
#include <stdlib.h>
using namespace std;

void CashierLogin();
void AdminLogin();
void CashierMenu();
void AdminMenu();
void CashierAccountCreation();
void CashierAccountRemoval();
void CashierAccountManager();
void ProductManager();
void ProductAvailability();
void SalesAndTransactions();
void AddProduct();
void RemoveProduct();
void EditProduct();
void CashierAccountModifier();

//THE USERNAME AND PASSWORD FOR THE ADMIN ACCOUNT IS:
//admin
//admin

int main()
{
    int option;

    cout << "\t\t===================================\n";
    cout << "\t\tWelcome to the Point of Sales System" << endl;
    cout << "\t\t===================================\n";
    cout << "\t\t  What would you like to do today" << endl;
    cout << "\t    ||                                      ||" << endl;
    cout << "\t    || Enter 1 to Login as a cashier        ||" << endl;
    cout << "\t    || Enter 2 to Login as an administrator ||" << endl;
    cout << "\t    || Enter 3 to Exit the program          ||" << endl;
    cout << "\t\t===================================\n";
    cout << "\t\t";
    cin >> option;

    switch (option)
    {
        case 1:
            CashierLogin();
            break;

        case 2:
            AdminLogin();
            break;

        case 3:
            system("cls");
            cout << "\t\t===================================\n";
            cout << "\t\t||      Exiting the program      ||\n";
            cout << "\t\t===================================\n";
            return 0;
            break;

        default:
            system("cls");
            cout << "\t\t===================================\n\n";
            cout << "\t\t           Invalid Input" << endl << endl;
            main();
    }
    return 0;
}

void CashierLogin()
{
    int count=0;

    string cashierUsernameLogin, cashierPasswordLogin, id, password;
    system("cls");
    cout << "\t\t===================================\n";
    cout << "\t   Please enter a cashier username and password." << endl << endl;
    cout << "\t\tUSERNAME: ";
    cin >> cashierUsernameLogin;
    cout << "\t\tPASSWORD: ";
    cin >> cashierPasswordLogin;

    ifstream input("Cashier" + cashierUsernameLogin + ".txt");
    input >> id >> password;

    if(id==cashierUsernameLogin && password==cashierPasswordLogin)
    {
        count=1;
        system("cls");
    }
    input.close();

    if(count==1)
    {
        system("cls");
        cout << "\t\t  =====================================\n";
        cout << "\n\t\tYou have successfully logged in as cashier " << cashierUsernameLogin << "." << endl << endl;
        CashierMenu();
    }
    else
    {
        system("cls");
        cout << "\t\t===================================\n" << endl;
        cout << "\tLogin error. Please check your username and password." << endl << endl;
        main();
    }
}

void AdminLogin()
{
    //THE USERNAME AND PASSWORD FOR THE ADMIN ACCOUNT IS:
    //admin
    //admin
    int count=0;

    string adminUsernameLogin, adminPasswordLogin, id, password;
    system("cls");
    cout << "\t\t===================================\n";
    cout << "\t    Please enter an admin username and password." << endl << endl;
    cout << "\t\tUSERNAME: ";
    cin >> adminUsernameLogin;
    cout << "\t\tPASSWORD: ";
    cin >> adminPasswordLogin;

    if(adminUsernameLogin=="admin" && adminPasswordLogin=="admin")
    {
        count=1;
        system("cls");
    }

    if(count==1)
    {
        system("cls");
        cout << "\t\t===================================\n";
        cout << "\n\t    Your login as an Administrator was successful." << endl << endl;
        AdminMenu();
    }
    else
    {
        system("cls");
        cout << "\t\t===================================\n" << endl;
        cout << "\tLogin error. Please check your username and password." << endl << endl;
        main();
    }
}

void CashierMenu()
{
    int option;

    cout << "\t\t  =====================================\n";
    cout << "\t\t       Welcome to the Cashier Menu" << endl;
    cout << "\t\t  =====================================\n";
    cout << "\t\t     What would you like to do" << endl << endl;
    cout << "\t\t|| Enter 1 to Start a sale             ||" << endl;
    cout << "\t\t|| Enter 2 to View Product Availability||" << endl;
    cout << "\t\t|| Enter 3 to Exit to the main menu    ||" << endl;
    cout << "\t\t  =====================================\n";
    cout << "\t\t";
    cin >> option;

    switch (option)
    {
        case 1:
            system("cls");
            SalesAndTransactions();
            break;

        case 2:
            system("cls");
            ProductAvailability();
            break;

        case 3:
            system("cls");
            main();

        default:
            system("cls");
            cout << "\t\t===================================\n\n";
            cout << "\t\t           Invalid Input" << endl << endl;
            CashierMenu();
    }
}

void AdminMenu()
{
    int option;

    cout << "\t\t===================================\n";
    cout << "\t\t   Welcome System Administrator" << endl;
    cout << "\t\t===================================\n";
    cout << "\t\t     What would you like to do" << endl << endl;
    cout << "\t\t|| Enter 1 to Manage Cashier Accounts ||" << endl;
    cout << "\t\t|| Enter 2 to Manage Product          ||" << endl;
    cout << "\t\t|| Enter 3 to Exit to the main menu   ||" << endl;
    cout << "\t\t===================================\n";
    cout << "\t\t";
    cin >> option;

    switch (option)
    {
        case 1:
            system("cls");
            CashierAccountManager();
            break;

        case 2:
            system("cls");
            ProductManager();
            break;

        case 3:
            system("cls");
            main();
            break;

        default:
            system("cls");
            cout << "\t\t===================================\n\n";
            cout << "\t\t           Invalid Input" << endl << endl;
            AdminMenu();
    }
}

void CashierAccountManager()
{
    int option;

    cout << "\t\t ========================================\n";
    cout << "\t\t        Cashier Account Management" << endl;
    cout << "\t\t ========================================\n\n";
    cout << "\t\t|| Enter 1 to Add a new cashier account ||" << endl;
    cout << "\t\t|| Enter 2 to Remove a cashier account  ||" << endl;
    cout << "\t\t|| Enter 3 to Modify a cashier account  ||" << endl;
    cout << "\t\t|| Enter 4 to Return to the Admin menu  ||" << endl;
    cout << "\t\t ========================================\n";
    cout << "\t\t";
    cin >> option;

    switch (option)
    {
        case 1:
            CashierAccountCreation();
            break;

        case 2:
            CashierAccountRemoval();
            break;

        case 3:
            CashierAccountModifier();
            break;

        case 4:
            AdminMenu();
            break;

        default:
            system("cls");
            cout << "\t\t===================================\n\n";
            cout << "\t\t           Invalid Input" << endl << endl;
            CashierAccountManager();
    }
}

void CashierAccountCreation()
{
    string cashierUsernameRegistration, cashierPasswordRegistration, idRegistration, passwordRegistration, cashierFirstName, cashierLastName, accountType = "Cashier";

    system("cls");
    cout << "\t\t===================================\n";
    cout << "\t   Please enter the USERNAME you would like to use: ";
    cin >> cashierUsernameRegistration;
    cout << "\t   Please enter the PASSWORD you would like to use: ";
    cin >> cashierPasswordRegistration;
    cout << "\t   Please enter the cashier's FIRST NAME: ";
    cin >> cashierFirstName;
    cout << "\t   Please enter the cashier's LAST NAME: ";
    cin >> cashierLastName;

    ifstream ifile("Cashier" + cashierUsernameRegistration + ".txt", ofstream::in);
    if(ifile.is_open())
    {
        cout << "\t\t ========================================\n";
        cout << "\t          This cashier username is already taken" << endl << endl;
        CashierAccountManager();
    }
    ifile.close();

    ofstream ofile("Cashier" + cashierUsernameRegistration + ".txt", ofstream::out | ofstream::trunc);
    ofile << cashierUsernameRegistration << " " << cashierPasswordRegistration << "\n";
    ofile << cashierFirstName << "\n";
    ofile << cashierLastName << "\n";
    ofile << accountType << "\n";
    ofile.close();
    system("cls");
    cout << "\t\t===================================\n" << endl;
    cout << "\t You have successfully registered a new cashier account." << endl << endl;
    CashierAccountManager();
}

void CashierAccountRemoval()
{
    int count=0;

    string cashierUsername, cashierPassword, id, password, removed = "REMOVED";;
    system("cls");
    cout << "\t\t===================================\n";
    cout << "\t     Please enter the username of the cashier" << endl;
    cout << "\t\t  that you would like to remove." << endl << endl;
    cout << "\t\tUSERNAME: ";
    cin >> cashierUsername;

    ifstream file("Cashier" + cashierUsername + ".txt");
    file >> id;

    if(id==cashierUsername)
    {
        count=1;
    }


    if(count==1)
    {
        system("cls");
        ofstream ofile("Cashier" + cashierUsername + ".txt", ofstream::out | ofstream::trunc);
        ofile.close();
        cout << "\t\t===================================\n";
        cout << "\n\t\tYou have successfully removed this account." << endl << endl;
        AdminMenu();
    }
    else
    {
        system("cls");
        cout << "\t\t===================================\n" << endl;
        cout << "\t\t    This account does not exist." << endl << endl;
        CashierAccountManager();
    }
    file.close();
}

void CashierAccountModifier()
{
    int option, status, i;
    string removed = "REMOVED";
    string cashierUsername;
    string oldCashierUsername, oldCashierPassword, oldCashierFirstName, oldCashierLastName, accountType = "Cashier", nothing;
    string newCashierUsername, newCashierPassword, newCashierFirstName, newCashierLastName;

    system("cls");
    cout << "\t\t===================================\n";
    cout << "\t  Please enter the username of the cashier account" << endl;
    cout << "\t\t    that you would like to edit\n";
    cout << "\t\t        (Case Sensitive!)\n";
    cout << "\t\t";
    getline(cin >> ws, cashierUsername);

    ifstream file("Cashier" + cashierUsername + ".txt");
    if(file.is_open())
    {
        system("cls");
        file >> oldCashierUsername >> oldCashierPassword;
        getline(file,nothing);
        getline(file,oldCashierFirstName);
        getline(file,oldCashierLastName);
        file.close();
        cout << "\t\t===================================\n\n";
        cout << "\t\t      Details for " << cashierUsername << ":" << endl << endl;
        cout << "\t\tFirst Name:\t" << oldCashierFirstName << endl;
        cout << "\t\tLast Name:\t" << oldCashierLastName << endl;
        cout << "\t\tUsername:\t" << oldCashierUsername << endl;
        cout << "\t\tPassword:\t" << oldCashierPassword << endl;
        cout << "\t\tAccount:\t" << accountType << endl << endl;
        cout << "\t\t===================================\n\n";
        cout << "\t\t Which part would you like to edit" << endl << endl;
        cout << "\t    || Enter 1 to Edit first name            ||" << endl;
        cout << "\t    || Enter 2 to Edit last name             ||" << endl;
        cout << "\t    || Enter 3 to Edit username              ||" << endl;
        cout << "\t    || Enter 4 to Edit password              ||" << endl;
        cout << "\t    || Enter 5 to Return to Cashier Manager ||" << endl;
        cout << "\t\t===================================\n";
        cout << "\t\t";
        cin >> option;

        switch (option)
        {
            case 1:
            {
                cout << "\t\t    First Name: " << oldCashierFirstName << endl << endl;
                cout << "\t     What would you like as a new first name: ";
                cin >> newCashierFirstName;

                ofstream ofile("Cashier" + cashierUsername + ".txt", ofstream::out | ofstream::trunc);
                ofile << oldCashierUsername << " " << oldCashierPassword << "\n";
                ofile << newCashierFirstName << "\n";
                ofile << oldCashierLastName << "\n";
                ofile << accountType << "\n";
                ofile.close();
                system("cls");
                cout << "\t\t===================================\n\n";
                cout << "\t     First name has been successfully changed" << endl << endl;
                CashierAccountManager();
                break;
            }

            case 2:
            {
                cout << "\t\t     Last Name: " << oldCashierLastName << endl << endl;
                cout << "\t    What would you like as a new last name: ";
                cin >> newCashierLastName;

                ofstream ofile("Cashier" + cashierUsername + ".txt", ofstream::out | ofstream::trunc);
                ofile << oldCashierUsername << " " << oldCashierPassword << "\n";
                ofile << oldCashierFirstName << "\n";
                ofile << newCashierLastName << "\n";
                ofile << accountType << "\n";
                ofile.close();
                system("cls");
                cout << "\t\t===================================\n\n";
                cout << "\t     Last name has been successfully changed" << endl << endl;
                CashierAccountManager();
                break;
            }

            case 3:
            {
                cout << "\t\t     Old Username: " << oldCashierUsername << endl << endl;
                cout << "\t      What would you like as a new username: ";
                cin >> newCashierUsername;

                ofstream ofile2("Cashier" + cashierUsername + ".txt", ofstream::out | ofstream::trunc);
                ofile2.close();

                ofstream ofile("Cashier" + newCashierUsername + ".txt", ofstream::out | ofstream::trunc);
                ofile << newCashierUsername << " " << oldCashierPassword << "\n";
                ofile << oldCashierFirstName << "\n";
                ofile << oldCashierLastName << "\n";
                ofile << accountType << "\n";
                ofile.close();
                system("cls");
                cout << "\t\t===================================\n\n";
                cout << "\t      Username has been successfully changed" << endl << endl;
                CashierAccountManager();
                break;
            }

            case 4:
            {
                cout << "\t\t     Old Password: " << oldCashierPassword << endl << endl;
                cout << "\t      What would you like as a new password: ";
                cin >> newCashierPassword;

                ofstream ofile("Cashier" + cashierUsername + ".txt", ofstream::out | ofstream::trunc);
                ofile << oldCashierUsername << " " << newCashierPassword << "\n";
                ofile << oldCashierFirstName << "\n";
                ofile << oldCashierLastName << "\n";
                ofile << accountType << "\n";
                ofile.close();
                system("cls");
                cout << "\t\t===================================\n\n";
                cout << "\t      Password has been successfully changed" << endl << endl;
                CashierAccountManager();
                break;
            }

            case 5:
                system("cls");
                CashierAccountManager();
                break;

            default:
                system("cls");
                cout << "\t\t===================================\n\n";
                cout << "\t\t           Invalid Input" << endl << endl;
                CashierAccountManager();
        }

    }
    else
    {
        system("cls");
        cout << "\t\t===================================\n\n";
        cout << "\t\t    This account does not exist" << endl << endl;
        CashierAccountManager();
    }
    file.close();
    CashierAccountManager();
}

void ProductManager()
{
    int option;

    cout << "\t\t===================================\n";
    cout << "\t\t          Product Manager          " << endl;
    cout << "\t\t===================================\n";
    cout << "\t\t     What would you like to do" << endl;
    cout << "\t    ||                                       ||" << endl;
    cout << "\t    || Enter 1 to Add a product              ||" << endl;
    cout << "\t    || Enter 2 to Remove a product           ||" << endl;
    cout << "\t    || Enter 3 to Edit a product             ||" << endl;
    cout << "\t    || Enter 4 to Return to Admin menu       ||" << endl;
    cout << "\t\t===================================\n";
    cout << "\t\t";
    cin >> option;

    switch (option)
    {
        case 1:
        {
            AddProduct();
            break;
        }

        case 2:
        {
            RemoveProduct();
            break;
        }

        case 3:
        {
            EditProduct();
            break;
        }

        case 4:
        {
            system("cls");
            AdminMenu();
            break;
        }

        default:
            system("cls");
            cout << "\t\t===================================\n\n";
            cout << "\t\t           Invalid Input" << endl << endl;
            ProductManager();
    }
}

void AddProduct()
{
    string productName;
    int productAmount;
    float productPrice;

    system("cls");
    cout << "\t\t===================================\n";
    cout << "\t\t   Please enter the product name" << endl;
    cout << "\t\t         (Case Sensitive!)\n";
    cout << "\t\t";
    getline(cin >> ws, productName);
    cout << "\t\t  Please enter the product amount" << endl;
    cout << "\t\t";
    cin >> productAmount;
    cout << "\t\t  Please enter the product price" << endl;
    cout << "\t\t";
    cin >> productPrice;

    ifstream file("Product" + productName + ".txt");
    if(file.is_open())
    {
        system("cls");
        cout << "\t\t===================================\n\n";
        cout << "\t\t    This product already exists" << endl << endl;
    }
    else
    {
        ofstream file("Product" + productName + ".txt");
        file << productName << "\n";
        file << productAmount << "\n";
        file << productPrice << "\n";
        system("cls");
        cout << "\t\t===================================\n\n";
        cout << "\t\t     Product successfully added" << endl << endl;
    }
    file.close();
    ProductManager();
}

void RemoveProduct()
{
    string removed = "REMOVED";
    string productName;
    int productAmount;
    float productPrice;

    system("cls");
    cout << "\t\t===================================\n";
    cout << "\t  Please enter the name of the product you are removing" << endl;
    cout << "\t\t        (Case Sensitive!)\n";
    cout << "\t\t";
    getline(cin >> ws, productName);

    ifstream file("Product" + productName + ".txt");
    if(file.is_open())
    {
        ofstream ofile("Product" + productName + ".txt", ofstream::out | ofstream::trunc);
        ofile.close();
        system("cls");
        cout << "\t\t===================================\n\n";
        cout << "\t\t Product was successfully removed" << endl << endl;
    }
    else
    {
        system("cls");
        cout << "\t\t===================================\n\n";
        cout << "\t\t    This product does not exist" << endl << endl;
    }
    file.close();
    ProductManager();
}

void EditProduct()
{
    int option, status, i;
    string removed = "REMOVED";
    string productName;
    string oldProductName, oldProductAmount, oldProductPrice;
    string newProductName;
    int newProductAmount;
    float newProductPrice;

    system("cls");
    cout << "\t\t===================================\n";
    cout << "\t Please enter the name of the product you are editing" << endl;
    cout << "\t\t        (Case Sensitive!)\n";
    cout << "\t\t";
    getline(cin >> ws, productName);

    ifstream file("Product" + productName + ".txt");
    if(file.is_open())
    {
        system("cls");
        getline(file,oldProductName);
        getline(file,oldProductAmount);
        getline(file,oldProductPrice);
        file.close();
        cout << "\t\t===================================\n\n";
        cout << "\t\t      Details for " << productName << ":" << endl << endl;
        cout << "\t\tProduct Name:\t\t" << oldProductName << endl;
        cout << "\t\tProduct Amount:\t\t" << oldProductAmount << endl;
        cout << "\t\tProduct Price:\t\t" << oldProductPrice << "PHP" << endl << endl;
        cout << "\t\t===================================\n\n";
        cout << "\t\t Which part would you like to edit" << endl << endl;
        cout << "\t    || Enter 1 to Edit product name          ||" << endl;
        cout << "\t    || Enter 2 to Edit product amount        ||" << endl;
        cout << "\t    || Enter 3 to Edit product price         ||" << endl;
        cout << "\t    || Enter 4 to Return to Product Manager  ||" << endl;
        cout << "\t\t===================================\n";
        cout << "\t\t";
        cin >> option;

        switch (option)
        {
            case 1:
            {
                cout << "\t\t     Old Name" << oldProductName << endl << endl;
                cout << "\t     What would you like as a new product name: ";
                cin >> newProductName;

                ofstream ofile("Product" + newProductName + ".txt", ofstream::out | ofstream::trunc);
                ofile << newProductName << "\n";
                ofile << oldProductAmount << "\n";
                ofile << oldProductPrice << "\n";
                ofile.close();
                system("cls");
                cout << "\t\t===================================\n\n";
                cout << "\t     Product name has been successfully changed" << endl << endl;
                ProductManager();
                break;
            }

            case 2:
            {
                cout << "\t\t     Old Amount" << oldProductAmount << endl << endl;
                cout << "\t    What would you like as a new product amount: ";
                cin >> newProductAmount;

                ofstream ofile("Product" + productName + ".txt", ofstream::out | ofstream::trunc);
                ofile << oldProductName << "\n";
                ofile << newProductAmount << "\n";
                ofile << oldProductPrice << "\n";
                ofile.close();
                system("cls");
                cout << "\t\t===================================\n\n";
                cout << "\t    Product amount has been successfully changed" << endl << endl;
                ProductManager();
                break;
            }

            case 3:
            {
                cout << "\t\t     Old Price " << oldProductPrice << "PHP" << endl << endl;
                cout << "\t    What would you like as a new product price: ";
                cin >> newProductPrice;

                ofstream ofile("Product" + productName + ".txt", ofstream::out | ofstream::trunc);
                ofile << oldProductName << "\n";
                ofile << oldProductAmount << "\n";
                ofile << newProductPrice << "\n";
                ofile.close();
                system("cls");
                cout << "\t\t===================================\n\n";
                cout << "\t    Product price has been successfully changed" << endl << endl;
                ProductManager();
                break;
            }

            case 4:
                system("cls");
                ProductManager();
                break;

            default:
                system("cls");
                cout << "\t\t===================================\n\n";
                cout << "\t\t           Invalid Input" << endl << endl;
                ProductManager();
        }

    }
    else
    {
        system("cls");
        cout << "\t\t===================================\n\n";
        cout << "\t\t    This product does not exist" << endl << endl;
        ProductManager();
    }
    file.close();
    ProductManager();
}

void ProductAvailability()
{
    int option;
    string productName, productAmount, productPrice;

    system("cls");
    cout << "\t\t===================================\n";
    cout << "\tEnter the name of the product that you would like to check" << endl;
    cout << "\t\t        (Case Sensitive!)\n";
    cout << "\t\t";
    getline(cin >> ws, productName);

    ifstream file("Product" + productName + ".txt");
    if(file.is_open())
    {
        system("cls");
        getline(file,productName);
        getline(file,productAmount);
        getline(file,productPrice);
        file.close();
        cout << "\t\t===================================\n\n";
        cout << "\t\tThere are currently " << productAmount << " of" << endl << endl;
        cout << "\t\t    " << productName << "(s) available at the moment." << endl;
        cout << "\t\t===================================\n\n";
    }
    else
    {
        system("cls");
        cout << "\t\t===================================\n\n";
        cout << "\t\t    This product does not exist" << endl << endl;
        CashierMenu();
    }
    file.close();
    CashierMenu();
}

void SalesAndTransactions()
{
    int option, itemsInCart = 0;
    string productName, productAmount, productPrice, cartLine, blank = " ";
    string cartProductName;
    int cartProductAmount = 0;
    float cartProductPrice = 0, totalPrice;
    string name[5], amount[5], price[5];
    float cartPrice[5];

    cout << "\t\t===================================\n";
    cout << "\t\t      A sale has been started        " << endl;
    cout << "\t\t===================================\n";
    cout << "\t\t     What would you like to do" << endl;
    cout << "\t    ||                                       ||" << endl;
    cout << "\t    || Enter 1 to Add a product to cart      ||" << endl;
    cout << "\t    || Enter 2 to Discard the current cart   ||" << endl;
    cout << "\t    || Enter 3 to View the current cart      ||" << endl;
    cout << "\t    || Enter 4 to Complete the sale          ||" << endl;
    cout << "\t    || Enter 5 to Return to Cashier menu     ||" << endl;
    cout << "\t\t===================================\n";
    cout << "\t\t";
    cin >> option;

    ifstream file("ShoppingCart.txt");
    switch (option)
    {
        case 1:
        {
            if(file.is_open());
            {
                while(file.peek()!=EOF)
                {
                    getline(file, cartLine);
                    itemsInCart++;
                }
            }

            if(itemsInCart >= 5)
            {
                system("cls");
                cout << "\t\t===================================\n\n";
                cout << "\t  You have reached the maximum amount of items(5)" << endl << endl;
                SalesAndTransactions();
            }

            system("cls");
            file.close();
            cout << "\t\t===================================\n";
            cout << "\tEnter the name of the product that you want to add to cart" << endl;
            cout << "\t\t        (Case Sensitive!)\n";
            cout << "\t\t";
            getline(cin >> ws, productName);

            ifstream ifile("Product" + productName + ".txt");
            if(ifile.is_open())
            {
                system("cls");
                getline(ifile,productName);
                getline(ifile,productAmount);
                getline(ifile,productPrice);
                ifile.close();
            }
            else
            {
                system("cls");
                cout << "\t\t===================================\n\n";
                cout << "\t\t    This product does not exist" << endl << endl;
                SalesAndTransactions();
            }

            cout << "\t\t===================================\n";
            cout << "\t     How many of this product would you like?" << endl;
            cout << "\t\t";
            cin >> cartProductAmount;

            float originalProductPrice = stof(productPrice);
            cartProductPrice = cartProductAmount * originalProductPrice;

            ofstream ofile("ShoppingCart.txt", ofstream::out | ofstream::app);
            ofile << cartProductAmount << ' ' << productName <<  ' ' << cartProductPrice << endl;
            ofile.close();
            system("cls");
            cout << "\t\t===================================\n\n";
            cout << "\t\t   Product has been added to cart" << endl << endl;
            SalesAndTransactions();
            break;
        }

        case 2:
        {
            file.close();
            system("cls");
            option = 0;
            cout << "\t    Are you sure you want to discard the cart?" << endl;
            cout << "\t    || Enter 1 to Discard the cart           ||" << endl;
            cout << "\t    || Enter any number to go back           ||" << endl;
            cout << "\t\t";
            cin >> option;

            if(option >= 2)
            {
                system("cls");
                SalesAndTransactions();
            }
            else
            {
                ofstream ofile("ShoppingCart.txt", ofstream::out | ofstream::trunc);
                ofile.close();
                system("cls");
                cout << "\t\t===================================\n\n";
                cout << "\t\t      Cart has been discarded" << endl << endl;
                SalesAndTransactions();
            }
            break;
        }

        case 3:
        {
            system("cls");
            for (int i = 0; i < 5; ++i)
            {
                file >> amount[i] >> name[i] >> price[i];
            }

            cout << "\t\t===================================\n\n";
            cout << "\t\t          The current cart" << endl << endl;
            cout << "\t\tAmount  Name                  Price" << endl << endl;

            for (int i = 0; i < 5; ++i)
            {
                cout << "\t\t" << amount[i] << "       " << name[i] << "\t\t\t" << price[i] << "PHP" << endl;
            }
            cout << "\t\t===================================\n\n";
            cout << "\t\t    Enter any number to return." << endl << endl;
            cout << "\t\t";
            cin >> option;

            if (option == 1)
            {
                system("cls");
                SalesAndTransactions();
            }
            else
            {
                system("cls");
                SalesAndTransactions();
            }
            break;
        }

        case 4:
        {
            system("cls");
            for (int i = 0; i < 5; ++i)
            {
                file >> amount[i] >> name[i] >> price[i];
            }

            cout << "\t\t===================================\n\n";
            cout << "\t\t            Final cart" << endl << endl;
            cout << "\t\tAmount  Name                  Price" << endl << endl;

            for (int i = 0; i < 5; ++i)
            {
                cout << "\t\t" << amount[i] << "       " << name[i] << "\t\t\t" << price[i] << "PHP" << endl;
            }

            for (int i = 0; i < 5; ++i)
            {
                cartPrice[i] = stof(price[i]);
            }

            totalPrice = cartPrice[0] + cartPrice[1] + cartPrice[2] + cartPrice[3] + cartPrice[4];

            cout << "\t\t===================================\n";
            cout << "\t\tTotal Price\t\t\t" << totalPrice << "PHP" << endl << endl;
            cout << "\t\tWould you like to complete the sale?";
            cout << "\t    || Enter 1 to Proceed with the sale      ||" << endl;
            cout << "\t    || Enter any number to go back           ||" << endl;
            cout << "\t\t";
            cin >> option;

            if (option == 1)
            {
                system("cls");
                cout << "\t\t===================================\n\n";
                cout << "\t\tTransaction successfully completed!" << endl << endl;
                CashierMenu();
            }
            else
            {
                system("cls");
                SalesAndTransactions();
            }
            break;
        }

        case 5:
        {
            system("cls");
            CashierMenu();
            break;
        }

        default:
            system("cls");
            cout << "\t\t===================================\n\n";
            cout << "\t\t           Invalid Input" << endl << endl;
            SalesAndTransactions();
    }
}
