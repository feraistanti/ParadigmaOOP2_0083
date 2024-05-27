#include <iostream>
using namespace std;

class remoteLampu {
private:
    string sakLarNo[10];
public:
    void setSakLarNo(int i, string value) {
        sakLarNo[i] = value;
    }
    string getSakLarNo(int i) {
        return sakLarNo[i];
    }
};

int main() {
    remoteLampu LampuRumah;

    LampuRumah.setSakLarNo(0, "Lampu Teras Rumah");
    LampuRumah.setSakLarNo(1, "Lampu Ruang Tamu");
    LampuRumah.setSakLarNo(2, "Lampu Kamar Tidur");
    LampuRumah.setSakLarNo(3, "Lampu Dapur");

    cout << LampuRumah.getSakLarNo(0) << endl;
    cout << LampuRumah.getSakLarNo(1) << endl;
    cout << LampuRumah.getSakLarNo(2) << endl;
    cout << LampuRumah.getSakLarNo(3) << endl;

    return 0;
}