//문자열로만
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int left = 0;
        int right = 0;
        char str[52];
        cin >> str;

        for (int i = 0; i < strlen(str); i++)
        {
            char c = str[i];
            if (c == '(')
            {
                left++;
            }
            else if (c == ')')
            {
                right++;
            }

            if (left < right)
            {
                cout << "NO";
                break;
            }
        }

        if (left == right)
        {
            cout << "YES";
        }
        else if (left > right)
        {
            cout << "NO";
        }
        if (t != 0)
            cout << '\n';
        cin.ignore();
    }

    return 0;
}