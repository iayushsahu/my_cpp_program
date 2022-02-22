#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int &n : numbers)
    {
        sum += n;
    }

    cout << "Sum of all numbers: " << sum << endl;

    return 0;
}
