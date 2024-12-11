#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    string username, password;
    cout << "=========== Login ============" << endl;
    cout << "Masukan Username: ";
    cin >> username;
    cout << "Masukan Password anda: ";
    cin >> password;
    if (username == "1" && password == "1") {
        cout << "Selamat anda berhasil login" << endl;
    } else {
        cout << "\nUsername atau Password anda salah" << endl;
        return 0;
    }
    cout << endl;

    string paketDurasi[] = {"1 bulan", "3 bulan", "6 bulan"};
    string paketKecepatan[] = {"10Mb/s + Modem Wifi", "25Mb/s + Modem Wifi", "50Mb/s + Modem Wifi"};
    int hargaPaket[3][3] = {
        {100000, 150000, 200000},
        {270000, 400000, 550000},
        {500000, 700000, 900000}
    };

    int durasiPilihan = 0, kecepatanPilihan = 0;
    while (true) {
        cout << "Pilih durasi paket internet:" << endl;
        for (int bulan = 0; bulan < 3; bulan++) {
            cout << bulan+1 << ". Paket Langganan internet " << paketDurasi[bulan] << endl;
        }
        cout << "Pilihlah angka 1-3: ";
        cin >> durasiPilihan;
        if (durasiPilihan < 0 || durasiPilihan > 3) {
            cout << "Pilihan durasi paket tidak valid!" << endl;
        } else {
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
                    cout << "\033[2J\033[1;1H";
                    
                    cout << "\nUsername: " << username << endl;
                    cout << "Paket yang Anda pilih: " << paketDurasi[durasiPilihan - 1] << endl;
                    cout << "Kecepatan yang Anda pilih: " << paketKecepatan[kecepatanPilihan - 1] << endl;
                    cout << "Harga Paket: Rp " << hargaPaket[durasiPilihan - 1][kecepatanPilihan - 1] << endl;
                    cout<<"---------------------------------------------------"<<endl;
                    cout << "pembayaran melalui virtual account BCA 1234567890" << endl;
                    cout<<"---------------------------------------------------"<<endl;
					goto menuLain;
					break;

				menuLain:
                //cout << "\n1. Pembayaran" << endl;
                cout << "2. Produk lainnya" << endl;
                cout << "3. Keluar" << endl;
                cout << "Pilihlah angka 2-3: ";
                int pilihanMenu;
                cin >> pilihanMenu;
                if (pilihanMenu == 1)
                { /*
                    cout << "\033[2J\033[1;1H";
                    cout << "\nUsername: " << username << endl;
                    cout << "Paket yang Anda pilih: " << paketDurasi[durasiPilihan - 1] << endl;
                    cout << "Kecepatan yang Anda pilih: " << paketKecepatan[kecepatanPilihan - 1] << endl;
                    cout << "Harga Paket: Rp " << hargaPaket[durasiPilihan - 1][kecepatanPilihan - 1] << endl;
                    cout<<"---------------------------------------------------"<<endl;
                    cout << "pembayaran melalui virtual account BCA 1234567890" << endl;
                    cout<<"---------------------------------------------------"<<endl;
					goto menuLain;
					break; */
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
						//cout << "Produk yang anda pilih sudah masuk ke dalam nota pembayaran anda" << endl;
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
        }
    }
    return 0;
}