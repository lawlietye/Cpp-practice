#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cout;
using std::endl;
using std::string;

int main()
{
    vector<char> vec{'p', 'e', 'z', 'y'};
    string str(vec.begin(), vec.end());

    cout << str << endl;

    return 0;
}