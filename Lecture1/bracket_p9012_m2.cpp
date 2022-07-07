//Ω∫≈√
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string sentence;
        bool over = true;
        getline(cin, sentence);
        stack<char> s;

        for (int i = 0; i < sentence.length(); i++)
        {
            if (sentence[i] == '(')
            {
                s.push(sentence[i]);
            }
            else if (sentence[i] == ')')
            {
                if (!s.empty())
                {
                    s.pop();
                }
                else
                {
                    cout << "NO\n";
                    over = false;
                    break;
                }
            }
        }
        if (s.empty() && over)
        {
            cout << "YES\n";
        }
        else if (s.size() > 0)
        {
            cout << "NO\n";
        }
    }
    return 0;
}