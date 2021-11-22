/*----------------------------
    Project: Library system
    Author: TEPELA KERENKE
    Date: 5/10/2021
    Compiler: GCC
    Licence: MIT
---------------------------------*/
// ./a.out
// \t creates a space

/*
    DATA TYPES

    -Groups data according to the operations that can be
    performed on that data
        => int - intergers rep whole numbers both -ve and +ve
        => char - a single ASCII character. usually enclosed in '
        => double - floating points numbers with a double precision
        => float - numbers with a fraction part 
        => void -null || nothing
----------------------
IDENTIFIERS
----------------------
*/
#include <stdio.h>
int main()
{
    int action;
    printf("\tCounty Library Management System\n");
    printf("1:Log in: \n"); // The admnin log in to the system
    printf("Welcome Mr Peter\n");
    printf("2:Add user: \n");        //Adding the user
    printf("3:Add book: \n");        //adding a book
    printf("4:Delete user: \n");     //deleting user option
    printf("5:Delete book: \n");     //deleting a book when necessary
    printf("6:Update user: \n");     //updating the user profile
    printf("7:Change password: \n"); //changing password whenever the admin want
    printf("8:Log out => \n");       //log out of the system option
    scanf("%d", &action);

    return 0;
    void execute_user_action(int action)
    {
        switch (action)
        {
        case 1:
            printf("Logged in");
            break;
        case 2:
            printf("Add user");
            break;
        case 3:
            printf("Add book");
            break;
        case 4:
            printf("Delete User");
            break;
        case 5:
            printf("Delete book");
            break;
        case 6:
            printf("Update User");
            break;
        case 7:
            printf("Change password");
            break;
        case 8:
            printf("Logeed Out");
            break;
        default:
            printf("Unrecognized action. \n");
        }
    }
}
