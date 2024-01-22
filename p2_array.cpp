#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct sinhvien
{
    string name;
    int age;
    string sv_class;
    friend istream& operator >>(istream& in, sinhvien& x)
    {
        getline(in, x.name);
        in >> x.age;
        in.ignore(32767, '\n');
        getline(in, x.sv_class);
        return in;
    }
    friend ostream& operator << (ostream& out, sinhvien x)
    {
        out << x.name << " " << x.age << " " << x.sv_class << '\n';
        return out;
    }
    friend bool operator < (sinhvien a, sinhvien b)
    {
        return a.age < b.age;
    }    
};

void tim_kiem(string s, sinhvien *sv, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (s == sv[i].name)
        {
            cout << "Thong tin sinh vien tim kiem: ";
            cout << sv[i];
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    cin.ignore(32767, '\n');
    
    // yeu cau 1
    sinhvien sv[n];

    // yeu cau 2
    for (int i = 0; i < n; i++)
    {
        cin >> sv[i];
    }
    
    
    // yeu cau 3
    for (auto x : sv) cout << x;

    // yeu cau 4
    tim_kiem("Nguyen Van A", sv, n);
    
    swap(sv[0], sv[3]);// yeu cau 7
    
    sort(sv, sv + n); // yeu cau 5, 6
    cout << "Sinh vien lon tuoi nhat la: ";
    cout << sv[n - 1].name << '\n';
    
    cout << "Sinh vien nho tuoi nhat la: ";
    cout << sv[0].name << '\n';
    

    for (auto x : sv) cout << x;
}