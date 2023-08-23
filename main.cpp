#include "helper.h"

int main()
{
    int one, two;
    char prompt[100];

    strcpy(prompt, "Enter integer 1: ");
    getInt(prompt, one);
    strcpy(prompt, "Enter integer 2: ");
    getInt(prompt, two);

    cout << endl;
    if (one == two)
    {

        cout << "No operations performed!\n";
    }
    else
    {
        cout << "Before a call to swapArgs a: " << one << " b: " << two << endl;
        swapArgs(&one, &two);
        cout << "After call to swapArgs a: " << one << " b: " << two << endl;
        divideArgs(&one, &two);
        cout << "After call to divideArgs a: " << one << " b: " << two << endl;
        powerArgs(&one, &two);
        cout << "After call to powerArgs a: " << one << " b: " << two << endl;
    }

    cout << "\nGoodbye!\n";

    return 0;
}
