#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int randomno = rand() % 100 + 1;

    int num;
    int count = 0;

    do
    {
        cout << "Enter your number from 1 to 100 to make a guess : " << endl;
        cin >> num;

        if (num < 1 || num > 100)
        {
            cout << "kindly enter a number from 1 to 100 " << endl;
            continue;
        }

        count++;

        if (num < randomno)
        {
            cout << "number entered is too low" << endl;
        }
        else if (num > randomno)
        {
            cout << "number entered is too high" << endl;
        }
        else
        {
            cout << "congratulations you entered the right number in " << count << " attempts" << endl;
        }

    } while (num != randomno);

    return 0;
}
