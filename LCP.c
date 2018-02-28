#include<iostream>
using namespace std;
 
void LCP(string s, int n, string &res)
{
    if (n == 0)
    {
        res.append(s);
        return;
    }
 
    int len = s.length();
 
    if (len <= n)
        return;
 

    int minIndex = 0;
    for (int i = 1; i<=n ; i++)
        if (s[i] < s[minIndex])
            minIndex = i;
 

    res.push_back(s[minIndex]);
 
    string new_str = s.substr(minIndex+1, len-minIndex);
 
LCP(new_str, n-minIndex, res);
}
 
string LN(string s, int n)
{
    string res = "";
 
     LCP(s, n, res);
 
    return res;
}
 int main()
{
    string s;
    int n=4;
    cin>>s;
    cout << LN(s, n);
    return 0;
}
