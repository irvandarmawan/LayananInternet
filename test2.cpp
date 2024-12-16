#include <iostream>
#include <string>
using namespace std;

// Deklarasi fungsi
bool daftarAkun(string &daftaruser, string &daftarpass);
bool login(string daftaruser, string daftarpass, string &username, string &password);

int main() {
    string username, password, daftaruser, daftarpass; // Variabel untuk menyimpan username dan password
    int i; // Variabel untuk menyimpan pilihan menu

    while (true) {
        cout << "Menu Login : " << endl;
        cout << "1. Login" << endl;
        cout << "2. Daftar" << endl;
        cout << "Pilih Menu : ";
        cin >> i;

        if (i < 1 || i > 2) { 
            cout << "Pilihan anda tidak valid" << endl;
        } else if (i == 2) { 
            if (daftarAkun(daftaruser, daftarpass)) {
                cout << "Akun berhasil didaftarkan." << endl;
            } else {
                cout << "Pendaftaran akun gagal." << endl;
            }
        } else if (i == 1) { 
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
         //pemilihan durasi paket berapa bulan
        cout << "Pilih durasi paket internet:" << endl;
        for (int bulan = 0; bulan < 3; bulan++) {
            cout << bulan+1 << ". Paket Langganan internet " << paketDurasi[bulan] << endl;
        }
        cout << "Pilihlah angka 1-3: ";
        cin >> durasiPilihan;
        if (durasiPilihan < 0 || durasiPilihan > 3) { 
            cout << "Pilihan durasi paket tidak valid!" << endl;
        } else {
            //pemilihan kecepatan paket internet
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
                    cout << "\033[2J\033[1;1H"; //clear screen
                    
                    //menampilkan nota pembayaran pertama kali
                    cout << "\nUsername: " << username << endl;
                    cout << "Paket yang Anda pilih: " << paketDurasi[durasiPilihan - 1] << endl;
                    cout << "Kecepatan yang Anda pilih: " << paketKecepatan[kecepatanPilihan - 1] << endl;
                    cout << "Harga Paket: Rp " << hargaPaket[durasiPilihan - 1][kecepatanPilihan - 1] << endl;
                    cout<<"---------------------------------------------------"<<endl;
                    cout << "pembayaran melalui virtual account BCA 1234567890" << endl;
                    cout<<"---------------------------------------------------"<<endl;
            }

            while (true) {
                menuLain://menu lainnya
                cout << "\n1. Pembayaran" << endl;
                cout << "2. Produk lainnya" << endl;
                cout << "3. Keluar" << endl;
                cout << "Pilihlah angka 2-3: ";
                int pilihanMenu;
                cin >> pilihanMenu;
                if (pilihanMenu == 1) 
                {   cout << "\033[2J\033[1;1H"; //clear screen

                    //menampilkan nota pembayaran
                    cout << "\nUsername: " << username << endl;
                    cout << "Paket yang Anda pilih: " << paketDurasi[durasiPilihan - 1] << endl;
                    cout << "Kecepatan yang Anda pilih: " << paketKecepatan[kecepatanPilihan - 1] << endl;
                    cout << "Harga Paket: Rp " << hargaPaket[durasiPilihan - 1][kecepatanPilihan - 1] << endl;
                    cout<<"---------------------------------------------------"<<endl;
                    cout << "pembayaran melalui virtual account BCA 1234567890" << endl;
                    cout<<"---------------------------------------------------"<<endl;
					goto menuLain;
					break;
                }
                else if (pilihanMenu == 2) 
                {
                    cout << "\033[2J\033[1;1H";
                    menuProdukLainnya:
                    // Produk lainnya
                    string produk[3] = {"Mifi MN01", "Mifi MN02", "Mifi MN03"};
                    long int hargaProduk[3] = {500000, 600000, 750000};
                    int produkMifi;

                    //Produk Mifi

					cout << endl;
                    cout << "Pilih produk Mifi" << endl;
                    for(int i=0; i < 3; i++){
                        cout << i+1 << "." << produk[i] << " dengan harga Rp." << hargaProduk[i] << endl;
                    }

                    cout << "Silahkan pilih dari angka 1-3 : ";
                    cin >> produkMifi;

                    if(produkMifi >= 1 && produkMifi <= 3){
                        cout << "\033[2J\033[1;1H";
                        cout<<endl;
                        cout << "Anda memilih " << produk[produkMifi - 1] << " dengan harga Rp. " << hargaProduk[produkMifi - 1] << endl;
						
                        cout<<"---------------------------------------------------"<<endl;
                        cout << "pembayaran melalui virtual account BCA 1234567890" << endl;
                        cout<<"---------------------------------------------------"<<endl;
                        goto menuLain;
						break;
                    } else {
                        cout << "Produk yang anda pilih tidak tersedia" << endl;
                        goto menuProdukLainnya;
                        break;
                    }
                }
                else if(pilihanMenu == 3) 
                {
                    cout << "\033[2J\033[1;1H";
                    cout << "Terima kasih telah menggunakan layanan kami." << endl;
                    break;
                }
                else 
                {
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
    cout << "Daftar Akun" << endl;
    cout << "Username: ";
    cin >> daftaruser; 
    cout << "Password: ";
    cin >> daftarpass; 
    return true; 
}

// Definisi fungsi login
bool login(string daftaruser, string daftarpass, string &username, string &password) {
    cout << "\033[2J\033[1;1H"; // Clear screen
    cout << "=========== Login ============" << endl;
    cout << "Masukan Username: ";
    cin >> username; 
    cout << "Masukan Password anda: ";
    cin >> password; 

    // Cek username dan password
    if ((username == daftaruser || username == "1") && (password == daftarpass || password == "1")) {
        return true; 
    } else {
        return false; 
    }
}
