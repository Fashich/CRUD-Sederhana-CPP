#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> dataStorage;
void Create() {
    cout << "Masukkan Data Baru: ";
    string InputDataFashich;
    getline(cin, InputDataFashich);
    dataStorage.push_back(InputDataFashich);
    cout << "Data Berhasil Ditambahkan!" << endl;
}
void Read() {
    cout << "Data Saat Ini: " << endl;
    for (size_t i = 0; i < dataStorage.size(); ++i) {
        cout << i << ": " << dataStorage[i] << endl;
    }
}
void Update() {
    cout << "Masukkan Indeks Data yang ingin diupdate: ";
    int IndexFashich;
    cin >> IndexFashich;
    cin.ignore();
    if (IndexFashich >= 0 && IndexFashich < dataStorage.size()) {
        cout << "Masukkan Data Baru: ";
        string InputDataFashich;
        getline(cin, InputDataFashich);
        dataStorage[IndexFashich] = InputDataFashich;
        cout << "Data Berhasil Di Update!" << endl;
    }
    else {
        cout << "Indeks Tidak Valid!, Mohon Coba Lagi!" << endl;
    }
}
void Delete() {
    cout << "Masukkan Indeks Data Yang Ingin Dihapus: ";
    int IndexFashich;
    cin >> IndexFashich;
    cin.ignore();
    if (IndexFashich >= 0 && IndexFashich < dataStorage.size()) {
        dataStorage.erase(dataStorage.begin() + IndexFashich);
        cout << "Data Berhasil Dihapus!" << endl;
    }
    else {
        cout << "Indeks Tidak Valid!, Silakan Coba Lagi" << endl;
    }
}
int main() {
    bool keluar = false;
    while (!keluar) {
        cout << "Pilih Operasi:" << endl;
        cout << "1. Create" << endl;
        cout << "2. Read" << endl;
        cout << "3. Update" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Keluar" << endl;
        int Pilihan;
        cin >> Pilihan;
        cin.ignore();
        switch (Pilihan) {
        case 1:
            Create();
            break;
        case 2:
            Read();
            break;
        case 3:
            Update();
            break;
        case 4:
            Delete();
            break;
        case 5:
            keluar = true;
            break;
        default:
            cout << "Pilihan Anda Tidak Valid!, Mohon Pilih Yang Tersedia" << endl;
            break;
        }
    }
    return 0;
}
