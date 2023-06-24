#include<bits/stdc++.h>
using namespace std;
#define opt()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
    opt();
    string s;
    cin >> s;
    string s1 = "hello";
    int i = 0, j = 0;

    while (i < s.size() && j < s1.size())
    {
        if (s[i] == s1[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    if (j == s1.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
