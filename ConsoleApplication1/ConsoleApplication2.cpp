#include <iostream>

using namespace std;

int main()
{
    double mounthSaving;
    double total = 0;
    int mounth = 0;
    cin >> mounthSaving;
    while (total < 1000)
    {
        total += mounthSaving;
        mounth++;
    }
    cout << "it will take " << mounth << " months ro save 1000.";
    return 0;
}
