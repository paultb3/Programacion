#include <stdio.h>

using namespace std;
int main()
{
    int number_two, number_one, number_three, maximum;
    printf("enter three numbers:\n ");
    scanf(" %d %d", &number_one, &number_two, &number_three);
    maximum = number_one;
    if (maximum < number_two)
        maximum = number_two;
    if (maximum < number_three)
        maximum = number_three;
    printf("the largest number is: %d %. ", maximum);

    return 0;
}