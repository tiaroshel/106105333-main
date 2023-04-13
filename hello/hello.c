#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //declare input (create variable called input)
    string input;

    //initialize input (store a value in input)
    input = get_string("Name: ");

    //print hello, user
    printf("Hello, %s\n", input);
}