#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int feq[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        feq[(s[i] - 'a')]++;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (feq[i]>0){
            cnt++;
        }
    }
    
    if (cnt%2==0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else cout << "IGNORE HIM!\n";
    
    return 0;
}