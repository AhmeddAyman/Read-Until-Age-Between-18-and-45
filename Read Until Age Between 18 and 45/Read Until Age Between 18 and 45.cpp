#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_4_Solution_24
// Read Until Age Between 18 and 45.

int ReadAge()
{
    int Age;
    cout << "Please Enter your Age ?" << endl;
    cin >> Age;

    return Age;
}

bool ValidateNumberInRange(int Number, float From, float To)
{
    return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From , int To)
{
    int Age = 0;

    do 
    {
        Age = ReadAge();

    } while (!ValidateNumberInRange(Age, From, To));

    return Age;
}

void PrintResult(int Age)
{
    if (ValidateNumberInRange(Age, 18, 45))
        cout << Age << " is a Valid Age \n";
    else
        cout << Age << " is a inValid Age \n";
}

int main()
{

    PrintResult(ReadUntilAgeBetween(18 , 45));
    return 0;
}
