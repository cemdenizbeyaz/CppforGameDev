#include <iostream>
#include <string>
using namespace std;

void ChangeStr(string& str);

int main()
{
    string myStr = "Under Heaven";
    ChangeStr(myStr);
    cout << myStr << endl;
    system("pause");
}

void ChangeStr(string& str)
{
    str += " Studios";
}