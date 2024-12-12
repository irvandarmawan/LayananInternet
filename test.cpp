#include <iostream>
#include <string>
using namespace std;

int main() {
    int i; // Variabel untuk menyimpan pilihan menu
    string username, password, daftaruser, daftarpass; // Variabel untuk menyimpan username dan password

    menuLogin: // Label untuk mengarahkan kembali ke menu login jika pilihan tidak valid
    cout << "Menu Login : " << endl;
    cout << "1. Login" << endl;
    cout << "2. Daftar" << endl;
    cout << "Pilih Menu : ";
    cin >> i;

    if (i < 1 || i > 2) { // Memeriksa apakah pilihan menu valid
        cout << "Pilihan anda tidak valid" << endl;
        goto menuLogin; // Kembali ke menu login jika pilihan tidak valid
    } else if (i == 2) { // Jika pengguna memilih untuk mendaftar akun
        cout << "Daftar Akun" << endl;
        cout << "Username: ";
        cin >> daftaruser; // Meminta input username untuk pendaftaran
        cout << "Password: ";
        cin >> daftarpass; // Meminta input password untuk pendaftaran
    }

    while (true) { // Loop untuk mengulang proses login jika gagal
        cout << "\033[2J\033[1;1H"; // Clear screen
        cout << "=========== Login ============" << endl;
        cout << "Masukan Username: ";
        cin >> username; // Meminta input username untuk login
        cout << "Masukan Password anda: ";
        cin >> password; // Meminta input password untuk login

        // Cek username dan password
        if ((username == daftaruser || username == "1") && (password == daftarpass || password == "1")) {
            cout << "Selamat anda berhasil login" << endl; // Menampilkan pesan berhasil login jika username dan password cocok
            break; // Keluar dari loop jika login berhasil
        } else { // Jika username dan password salah
            cout << "\nUsername atau Password anda salah. Silakan coba lagi." << endl;
        }
    }

    cout << endl;

    // Menu Pilihan Paket Internet
    string paketDurasi[] = {"1 bulan", "3 bulan", "6 bulan"}; // Array 1D untuk menyimpan durasi paket
    string paketKecepatan[] = {"10Mb/s + Modem Wifi", "25Mb/s + Modem Wifi", "50Mb/s + Modem Wifi"}; // Array 1D untuk menyimpan kecepatan paket
    int hargaPaket[3][3] = { // Array 2D untuk menyimpan harga paket berdasarkan durasi dan kecepatan
        {100000, 150000, 200000},
        {270000, 400000, 550000},
        {500000, 700000, 900000}
    };
    string produk[] = {"Mifi A", "Mifi B", "Mifi C"}; // Array 1D untuk menyimpan nama produk Mifi
    int hargaProduk[] = {300000, 400000, 500000}; // Array 1D untuk menyimpan harga produk Mifi

    int durasiPilihan = 0, kecepatanPilihan = 0;
    while (true) {//jelaskan logic while paket bulanan
        cout << "\033[2J\033[1;1H"; // Clear screen
        cout << "Pilih durasi paket internet:" << endl; //pemilihan durasi paket berapa bulan
        for (int bulan = 0; bulan < 3; bulan++) {//jelaskan statement mengenai bulan 
            cout << bulan+1 << ". Paket Langganan internet " << paketDurasi[bulan] << endl;
        }
        cout << "Pilihlah angka 1-3: ";
        cin >> durasiPilihan;
        if (durasiPilihan < 0 || durasiPilihan > 3) { //jelaskan statement jika durasi paket tidak valid
            cout << "Pilihan durasi paket tidak valid!" << endl;
        } else {
			cout << endl;
            cout << "\033[2J\033[1;1H"; // Clear screen
            cout << "Pilih paket speed internet:" << endl; //pemilihan kecepatan paket internet
            for (int kecepatan = 0; kecepatan < 3; kecepatan++) {// jelaskan statement mengenai kecepatan
                cout << kecepatan+1 << ". Paket speed " << paketKecepatan[kecepatan] << endl;
            }
            cout << "Silahkan pilih angkanya 1-3: ";
            cin >> kecepatanPilihan;
            if (kecepatanPilihan < 0 || kecepatanPilihan > 3) {//jelaskan statement jika kecepatan paket tidak valid
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
                int pilihanMenu;
                cout << "1. Pembayaran" << endl;
                cout << "2. Produk lainnya" << endl;
                cout << "3. Keluar" << endl;
                cout << "Pilihlah angka 1-3: ";
                cin >> pilihanMenu;

                if (pilihanMenu == 1) //jelaskan pilhan 1.pembayaran
                {   cout << "\033[2J\033[1;1H"; //clear screen

                    //menampilkan nota pembayaran
                    cout << "\nUsername: " << username << endl;
                    cout << "Paket yang Anda pilih: " << paketDurasi[durasiPilihan - 1] << endl;
                    cout << "Kecepatan yang Anda pilih: " << paketKecepatan[kecepatanPilihan - 1] << endl;
                    cout << "Harga Paket: Rp " << hargaPaket[durasiPilihan - 1][kecepatanPilihan - 1] << endl;
                    cout<<"---------------------------------------------------"<<endl;
                    cout << "pembayaran melalui virtual account BCA 1234567890" << endl;
                    cout<<"---------------------------------------------------"<<endl;
					//goto menuLain;//jelaskan goto menuLain
					//break;// jelaskan statement break
                }
                else if (pilihanMenu == 2) //jika memilih 2.produk lainnya
                {
                    while (true) {
                        cout << endl;
                        cout << "Pilih produk Mifi" << endl;
                        for (int i = 0; i < 3; i++) { // Menampilkan daftar produk Mifi
                            cout << i + 1 << ". " << produk[i] << " dengan harga Rp. " << hargaProduk[i] << endl;
                        }

                        cout << "Silahkan pilih dari angka 1-3: ";
                        int produkMifi;
                        cin >> produkMifi;

                        if (produkMifi >= 1 && produkMifi <= 3) {
                            cout << "\033[2J\033[1;1H";
                            cout << endl;
                            cout << "Anda memilih " << produk[produkMifi - 1] << " dengan harga Rp. " << hargaProduk[produkMifi - 1] << endl;
                            cout << "---------------------------------------------------" << endl;
                            cout << "Pembayaran melalui virtual account BCA 1234567890" << endl;
                            cout << "---------------------------------------------------" << endl;
                            break; // Keluar dari loop produk lainnya setelah memilih produk yang valid
                            
                        } else {
                            cout << "\033[2J\033[1;1H"; // Clear screen
                            cout << "Produk yang anda pilih tidak tersedia" << endl;
                        }
                    }
                } else if (pilihanMenu == 3) { // Jika memilih 3. Keluar
                    cout << "\033[2J\033[1;1H";
                    cout << "Terima kasih telah menggunakan layanan kami." << endl;
                    break; // Keluar dari loop utama dan mengakhiri program
                } else {
                    cout << "Pilihan anda tidak valid" << endl;
                }
            }
        }
    }
    return 0;
}