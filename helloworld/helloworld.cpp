#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int i = 0;
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};

    for (const string& word : msg)
    {
        ++i;
        cout << word << " ";
    }
    cout << endl;
}