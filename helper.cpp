#include "helper.h"

void getInt(char prompt[], int number)
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
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << number << endl;
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            loopState = false;
            cout << number << endl;
        }
    } while (loopState);
}
