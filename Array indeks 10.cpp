#include <iostream>

using namespace std;

int main()
{
    string cari;
    string indeks[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Masukkan data indeks "<<i<<" : ";
        getline(cin,indeks[i]);
    }
    cout<<"Masukan nilai yang akan dicari : ";
    getline(cin,cari);
    for(int j=0;j<10;j++)
    {
        if (indeks[j]==cari)
            {
                cout<<endl<<"nilai yang dicari terdapat pada indeks ke-"<<j<<endl;
            }
    }
    return 0;
}
