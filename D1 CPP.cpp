#include <iostream>

using namespace std;

int main()
{
    string name, color;
    cout << "Enter your precious name:" << endl;
    getline(cin, name);
    cout << "Your beautiful name is:" << name;


    cout << "Enter your most favourite color:" << endl;
    getline(cin, color);
    cout << "The most wonderful colour in this whole world is:" << color;
    return 0;
}
