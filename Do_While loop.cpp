#include<iostream>
using namespace std;
int main ()
{
    long long n;
    int count = 0;
    cout << "Enter an integer number: ";
    cin >> n;
    do
    {
        n = n/10;    /* do while loop
                        statement
                        updatea(increament)
                        condition */
        count++;
    }
    while(n!=0);   // Statement
        cout << "Number of digits: " << count << endl;
    return 0;
}
