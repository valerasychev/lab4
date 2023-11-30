#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream fin("1.txt");
    ofstream fout("1.txt");
    string a;
    string b;

    cin >> a;
    fout << a;
    fout.close();
    getline(fin, b);
    cout << b << endl;

    fin.close();
}
