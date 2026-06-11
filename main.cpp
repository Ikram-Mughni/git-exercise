#include <iostream>

using namespace std;

int main()
{
    cout << "CETAK SEGITIGA\n";
    int i = 0;
    while(i < 5) {
        int j = 0;
        while (j < i) {
            cout << "* ";
            j++;
        }
        cout << endl;
    }
}