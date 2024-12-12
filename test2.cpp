#include <iostream>// untuk apa ?
#include <string>//untuk apa ?
using namespace std;

int main() {

    // Login
    int i, j=2;
    string username, password, daftaruser, daftarpass;//jelaskan variabel username dan password
    cout<<"Menu Login : "<<endl;
    cout<<"1. Login"<<endl;
    cout<<"2. Daftar"<<endl;
    cout<<"Pilih Menu : ";
    cin>>i;
    if (i==2){
        cout<<"Daftar Akun"<<endl;
        cout<<"Username: ";
        cin>>daftaruser;
        cout<<"Password: ";
        cin>>daftarpass;
    }
    cout << "=========== Login ============" << endl;
    cout << "Masukan Username: ";
    cin >> username;
    cout << "Masukan Password anda: ";
    cin >> password;
    //cek username dan password
    if (username == daftaruser, "1" && password == daftarpass, "1") {
        cout << "Selamat anda berhasil login" << endl;
    } else {//jelaskan apa bila username dan password salah
        cout << "\nUsername atau Password anda salah" << endl;
        return 0;
    }
    cout << endl;
}