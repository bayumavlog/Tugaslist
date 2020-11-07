#include <iostream>
using namespace std;
int main()
{
    int nilai[70], jumlah;
    char nama[100][100];
    cout<<"===Menentukan Kelulusan===\n";
    cout<<"\Masukan Jumblah Siswa: ";
    cin>>jumlah;
    for (int i=0;i<jumlah;i++){
        cout<<"Masukkan Nama Siswa:";
        cin>>nama[i];
        cout<<"Masukkan Nilai Siswa: ";
        cin>>nilai[i];
    }
    cout<<"\n======Menampilkan Data======\n\n";
    for (int i=0;i<jumlah;i++){
        cout<<nama[i]<<" nilai: "<<nilai[i]<<endl;
    }
    cout<<"\n====Menentukan Kelulusan====\n\n";
    for (int i=0;i<jumlah;i++){
        if (nilai[i]<75){
                cout<<nama[i]<<" Dengan Nilai: "<<nilai[i]<<" Dinyatakan Tidak Lulus\n";
        } else {
                cout<<nama[i]<<" Dengan Nilai: "<<nilai[i]<<" Dinyatakan Lulus\n";
        }
    }
    return 0;
}