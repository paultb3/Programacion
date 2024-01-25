#include <iostream>

using namespace std;
int main()
{
    int number_one, number_two, number_three, maximum;
    cout << "enter three numbers and integers\n";
    cin >> number_one >> number_two >> number_three;
    number_three = maximum;
    if (maximum < number_two)
        maximum = number_two;
    if (maximum < number_three)
        maximum = number_three;
    cout << "the largest number is: \t" << maximum;

    return 0;
}