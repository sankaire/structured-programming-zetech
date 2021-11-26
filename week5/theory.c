/*--------------------------------
Data structures
---------------
A structure is a collection of variables reffrenced under one name
A structure declaration forms a template thatmay be used to create instances of the structure
Members of a structure can be accesed using a .(dot) operater
to create a structure use stract
the * operator returns the value located at the address that follows it
pointers can be used to easily itarate through items in an array or to create a dynamic array

-------------
Pointer
------------
A pointer is a variable that holds a memory address of another object
the general form for declaring a pointervariable is: type * pointer name;
the & operator returns the memory address of its operand

Strings and character array

--------------------------------**/
#include <stdio.h>
#include <string.h>
int main()
{
    //string Handling functions
    char string1 = "peter";
    char string2 = "tepala";

    strcat(string1, string2); //joins 2 strings
    strlen(string1);          //length of a string
    strrev(string1);          //reverse a string
    stpcpy(string2, string1); //copy string1 onto string 1
    strcmp(string1, string2); /* returns string 1 comes before string 2 in alphabetic order
                                 */

    struct Book
    {
        char isbn[50];
        char title[50];
        char author[50];
        int copies;
    };
    struct Book book1, book2;

    book1.isbn = "123456n";
    book1.title = "C: The complete Reference";
    book1.author = "albert whaterver" book1.copies = 2;

    // pointers
    int marks;
    int *marks_ptr;
    marks_ptr = &marks;

    return 0;
}