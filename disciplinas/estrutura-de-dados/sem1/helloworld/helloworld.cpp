#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "mudei", "a", "msg", "VS Code", "sorria, funcionou!"};
    for (const string & word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}