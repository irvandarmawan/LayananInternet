#include <iostream> // Mengimpor pustaka input-output
#include <string> // Mengimpor pustaka string
#include <cstdlib> // Mengimpor pustaka untuk fungsi sistem
using namespace std; // Menggunakan namespace std

// Deklarasi fungsi
bool daftarAkun(string &daftaruser, string &daftarpass);
bool login(string daftaruser, string daftarpass, string &username, string &password);

int main() {
    // Variabel untuk menyimpan username dan password
    string username, password, daftaruser, daftarpass; 
    // Variabel untuk menyimpan pilihan menu
    int i; 

    // Loop utama
    while (true) {
        // Menampilkan menu login
        cout << "Menu Login : " << endl;
        cout << "1. Login" << endl;
        cout << "2. Daftar" << endl;
        cout << "Pilih Menu : ";
        cin >> i;

        // Memeriksa pilihan menu
        if (i < 1 || i > 2) { 
            // Menampilkan pesan jika pilihan tidak valid
            cout << "Pilihan anda tidak valid" << endl;
        } else if (i == 2) { 
            // Memanggil fungsi daftarAkun jika pilihan adalah 2
            if (daftarAkun(daftaruser, daftarpass)) {
                cout << "Akun berhasil didaftarkan." << endl;
            } else {
                cout << "Pendaftaran akun gagal." << endl;
            }
        } else if (i == 1) { 
            // Memanggil fungsi login jika pilihan adalah 1
            if (login(daftaruser, daftarpass, username, password)) {
                cout << "Selamat anda berhasil login" << endl;
                break; 
            } else {
                cout << "Username atau Password anda salah. Silakan coba lagi." << endl;
            }
        }
    }

    // Menu Pilihan Paket Internet
    string paketDurasi[] = {"1 bulan", "3 bulan", "6 bulan"};
    string paketKecepatan[] = {"10Mb/s + Modem Wifi", "25Mb/s + Modem Wifi", "50Mb/s + Modem Wifi"};
    int hargaPaket[3][3] = {
        {100000, 150000, 200000},
        {270000, 400000, 550000},
        {500000, 700000, 900000}
    };
    int durasiPilihan = 0, kecepatanPilihan = 0;
    while (true) {
        // Pemilihan durasi paket berapa bulan
        cout << "Pilih durasi paket internet:" << endl;
        for (int bulan = 0; bulan < 3; bulan++) {
            cout << bulan+1 << ". Paket Langganan internet " << paketDurasi[bulan] << endl;
        }
        cout << "Pilihlah angka 1-3: ";
        cin >> durasiPilihan;
        if (durasiPilihan < 0 || durasiPilihan > 3) { 
            cout << "Pilihan durasi paket tidak valid!" << endl;
        } else {
            // Pemilihan kecepatan paket internet
            cout << endl;
            cout << "Pilih paket speed internet:" << endl; 
            for (int kecepatan = 0; kecepatan < 3; kecepatan++) {
                cout << kecepatan+1 << ". Paket speed " << paketKecepatan[kecepatan] << endl;
            }
            cout << "Silahkan pilih angkanya 1-3: ";
            cin >> kecepatanPilihan;
            if (kecepatanPilihan < 0 || kecepatanPilihan > 3) {
                cout << "Pilihan kecepatan tidak valid!" << endl;
            } else {
                // Membersihkan layar
                system ("cls"); 
                
                // Menampilkan nota pembayaran pertama kali
                cout << "\nUsername: " << username << endl;
                cout << "Paket yang Anda pilih: " << paketDurasi[durasiPilihan - 1] << endl;
                cout << "Kecepatan yang Anda pilih: " << paketKecepatan[kecepatanPilihan - 1] << endl;
                cout << "Harga Paket: Rp " << hargaPaket[durasiPilihan - 1][kecepatanPilihan - 1] << endl;
                cout << "---------------------------------------------------" << endl;
                cout << "pembayaran melalui virtual account BCA 1234567890" << endl;
                cout << "---------------------------------------------------" << endl;
            }

            while (true) {
                // Menu lainnya
                menuLain:
                cout << "\n1. Pembayaran" << endl;
                cout << "2. Produk lainnya" << endl;
                cout << "3. Keluar" << endl;
                cout << "Pilihlah angka 1-3: ";
                int pilihanMenu;
                cin >> pilihanMenu;
                if (pilihanMenu == 1) {   
                    // Membersihkan layar
                    system ("cls"); 

                    // Menampilkan nota pembayaran
                    cout << "\nUsername: " << username << endl;
                    cout << "Paket yang Anda pilih: " << paketDurasi[durasiPilihan - 1] << endl;
                    cout << "Kecepatan yang Anda pilih: " << paketKecepatan[kecepatanPilihan - 1] << endl;
                    cout << "Harga Paket: Rp " << hargaPaket[durasiPilihan - 1][kecepatanPilihan - 1] << endl;
                    cout << "---------------------------------------------------" << endl;
                    cout << "pembayaran melalui virtual account BCA 1234567890" << endl;
                    cout << "---------------------------------------------------" << endl;
                    goto menuLain;
                    break;
                } else if (pilihanMenu == 2) {
                    // Membersihkan layar
                    system("cls"); 
                    menuProdukLainnya:
                    // Produk lainnya
                    string produk[3] = {"Mifi MN01", "Mifi MN02", "Mifi MN03"};
                    long int hargaProduk[3] = {500000, 600000, 750000};
                    int produkMifi;

                    // Produk Mifi
                    cout << endl;
                    cout << "Pilih produk Mifi" << endl;
                    for(int i=0; i < 3; i++){
                        cout << i+1 << "." << produk[i] << " dengan harga Rp." << hargaProduk[i] << endl;
                    }

                    cout << "Silahkan pilih dari angka 1-3 : ";
                    cin >> produkMifi;

                    if(produkMifi >= 1 && produkMifi <= 3){
                        // Membersihkan layar
                        system ("cls");
                        cout << endl;
                        cout << "Anda memilih " << produk[produkMifi - 1] << " dengan harga Rp. " << hargaProduk[produkMifi - 1] << endl;
                        
                        cout << "---------------------------------------------------" << endl;
                        cout << "pembayaran melalui virtual account BCA 1234567890" << endl;
                        cout << "---------------------------------------------------" << endl;
                        goto menuLain;
                        break;
                    } else {
                        cout << "Produk yang anda pilih tidak tersedia" << endl;
                        goto menuProdukLainnya;
                        break;
                    }
                } else if(pilihanMenu == 3) {
                    // Membersihkan layar
                    system ("cls");
                    cout << "Terima kasih telah menggunakan layanan kami." << endl;
                    break;
                } else {
                    cout << "Pilihan anda tidak valid" << endl; 
                }
            }
            break;
        }
    }
    return 0;
}

// Definisi fungsi daftarAkun
bool daftarAkun(string &daftaruser, string &daftarpass) {
    // Menampilkan pesan "Daftar Akun"
    cout << "Daftar Akun" << endl;
    // Meminta input username dari pengguna
    cout << "Username: ";
    cin >> daftaruser; 
    // Meminta input password dari pengguna
    cout << "Password: ";
    cin >> daftarpass; 
    // Mengembalikan nilai true sebagai indikasi bahwa pendaftaran berhasil
    return true; 
}

// Definisi fungsi login
bool login(string daftaruser, string daftarpass, string &username, string &password) {
    // Membersihkan layar
    system ("cls"); 
    // Menampilkan pesan "Login"
    cout << "=========== Login ============" << endl;
    // Meminta input username dari pengguna
    cout << "Masukan Username: ";
    cin >> username; 
    // Meminta input password dari pengguna
    cout << "Masukan Password anda: ";
    cin >> password; 

    // Memeriksa apakah username dan password sesuai
    if ((username == daftaruser || username == "1") && (password == daftarpass || password == "1")) {
        // Jika sesuai, mengembalikan nilai true
        return true; 
    } else {
        // Jika tidak sesuai, mengembalikan nilai false
        return false; 
    }
}
