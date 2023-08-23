#include "helper.h"

void getInt(char prompt[], int &number)
{
    bool loopState = true;
    do
    {
        cout << prompt;
        cin >> number;
        if (cin.fail())
        {
            cout << "You chose poorly\n";
            cin.clear();
        }
        else
        {
            loopState = false;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (loopState);
}

void swapArgs(int *one, int *two)
{
    int temp = *one;
    *one = *two;
    *two = temp;
}

void divideArgs(int *one, int *two)
{
    int temp = *one / *two;
    int remTemp = *one % *two;
    *one = temp;
    *two = remTemp;
}

void powerArgs(int *one, int *two)
{
    int temp = 1;
    for (int i = 0; i < *two; i++)
    {
        temp *= *one;
    }
    *one = temp;
}