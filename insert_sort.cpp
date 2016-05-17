#include <iostream>

using namespace std;

int main()
{
    string indeks[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Masukkan data indeks "<<i<<" : ";
        getline(cin,indeks[i]);
    }
}
