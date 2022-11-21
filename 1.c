#include <cstdio>
#include <iostream>
#include <math.h>
using namespace std;
 
void convertToTernary(int N)
{
    if (N == 0)
        return;
    int x = N % 3;
    N /= 3;
    if (x < 0)
        N += 1;
    convertToTernary(N);
    if (x < 0)
        cout << x + (3 * -1);
    else
        cout << x;
}
void convert(int Decimal)
{
    cout << "Ternary number of "
         << Decimal << " is: ";
    if (Decimal != 0) {
        convertToTernary(Decimal);
    }
    else
        cout << "0" << endl;
}
 
int main()
{
    int Decimal;
    cin >> Decimal;
    convert(Decimal);
 
    return 0;
}