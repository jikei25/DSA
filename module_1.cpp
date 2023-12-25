#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void print_Word(string w)
{
    cout << w << '\n';
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // cau 1

    cout << "Hello world\n";

    // cau 2

    string word = "Hello world";
    cout << word << '\n';

    // cau 3

    string w1 = "Hello", w2 = " world";
    string w = w1 + w2;
    cout << w << '\n';

    // cau 4
    
    print_Word(w);
}