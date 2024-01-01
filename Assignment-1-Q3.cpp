// Q3. Write a  program to generate all the prime numbers between 1 and n, where n is a value supplied by the user. //

#include <iostream>
using namespace std;

int main()
{

    int num, i, n;

    // Take input from user
    cout << "Find prime numbers n : ";
    cin >> n;

    cout << endl
         << "All prime numbers n " << n << " are : " << endl;

    for (num = 1; num <= n; num++)
    {

        for (i = 2; i <= (num / 2); i++)
        {

            if (num % i == 0)
            {
                i = num;
                break;
            }
        }

        // If the number is prime then print it.
        if (i != num)
        {
            cout << num << " ";
        }
    }

    return 0;
}