#include <iostream>
using namespace std;

int main()
{
    float GPA;
    cout << "What is your GPA: ";
    cin >> GPA;
    
    if (GPA >4)
    {
        cout << "bull shit";
    }

    else if (GPA >= 3)
    {
        cout << "good student\n";
    }

    else if (GPA >= 2 )
    {
        cout << "you need to study better";

    }
    else if (GPA >= 1)
    {
        cout << "you need to put all the time in study";

    }
    else
    {
        cout << "quit U please";
    }
    
    cout << "\n";
    return 0;
}
