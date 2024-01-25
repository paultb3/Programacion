#include <iostream>
#include <cctype>
#include <string>

using namespace std;
int main()
{
    int NumberOne, NumberTwo, sum;
    char next;

    do
    {
        cout << "enter two numbers: \n";
        cin >> NumberOne >> NumberTwo;
        sum = NumberOne + NumberTwo;
        cout << "sum is: " << sum << endl;
        cout << "do you want to continue??" << endl;
        cout << "y = YES // N = NO" << endl;
        cin >> next;
        next=tolower(next);
    } while (next == 'y');
     cout << "see you later" << endl;

    return 0;
}