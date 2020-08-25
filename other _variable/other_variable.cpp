#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    double pie; //small dot point
    float y;
    signed int z;
    unsigned int n;
    string text;
    bool isTheWaterHot {};

    x = 456;
    pie = 3.19145;
    y = 4.0f;
    z = -12356;
    n = -123456;

    text = "Hello Unclue";
    cout << "string text: " << text << endl;
    cout << "int X: " << x << endl;
    cout << "double pie: " << pie << endl;
    cout << "float y: " << y << endl;
    cout << "signed z: " << z << endl;
    cout << "unsigned n: " << n << endl;

    cout << "is the water Hot? (y/n)" << endl;
    cin >> text;

    if ((text == "y") + (text == "Y") >= 1) {
        isTheWaterHot = true;
    }
    if ((text == "n") + (text == "N") >= 1){

        isTheWaterHot = false;
    }
    if (isTheWaterHot == true)
    {
        cout << "Be careful" << endl;
    }

    else
    {
        cout << "drink ahead" << endl;
    }
    return 0;
}