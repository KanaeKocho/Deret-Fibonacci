#include <iostream>
using namespace std;
int main()
{
    int n, n1, n2, hn;
    cout << "Deret Fibonacci" << endl;
    cout << "Masukkan Nilai Ke-N" << endl;
    cin >> n;
    n1 = 1;
    n2 = 0;
    hn = n1 + n2;
    cout << hn << " ";
    for (int i = 1; i < n; i++)
    {
        hn = n1 + n2;
        n2 = n1;
        n1 = hn;
        cout << hn << " ";
    }
}
