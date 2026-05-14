#include<bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin >> w; //w is total weight
    /*if(w%2==0 && w>2){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }*/
    // time limit exceeded.
    int first = 2;
    bool divided = false;
    while (first<w)
    {
        int second = w-first;
        if (first%2==0 && second%2==0 && second >2)
        {
            divided = true;
            break;
        }
        first =+ 2;
        }
        if(divided){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
    }
    
    return 0;
}