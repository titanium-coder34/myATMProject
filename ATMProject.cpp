#include <iostream>
using namespace std;

int main() {
    int hesapBakiyesi;
    int cekilecekTutar, yatirilacakTutar;

    cout << "Hesap bakiyenizi giriniz:" << endl;
    cin >> hesapBakiyesi;

    
    while(true) {
        cout << "Yapilacak islemi secin(1:para cekme,2:para yatirma,3:bakiye sorgulama,4:cikis):" << endl;

        int yapilanIslem;
        cin >> yapilanIslem;

        if (yapilanIslem == 4)
            break;

        switch (yapilanIslem) {
            
        case 1: {
            cout << "Cekilecek para tutari:" << endl;
            cin >> cekilecekTutar;
            if (cekilecekTutar > hesapBakiyesi) {
                cout << "Bakiye yetersiz!" << endl;
            }
            else {
                hesapBakiyesi -= cekilecekTutar;
                cout << "Yeni hesap bakiyeniz:" << hesapBakiyesi << endl;
                break;
            }
        }
        case 2: {
            cout << "Yatirilacak para tutari:" << endl;
            cin >> yatirilacakTutar;
            hesapBakiyesi += yatirilacakTutar;
            cout << "Yeni hesap bakiyeniz:" << hesapBakiyesi << endl;
            break;

        }
        case 3: {
            cout << "Bakiyeniz:" << hesapBakiyesi << endl;
            break;
        }
        default:
            cout << "Gecerli sayi giriniz.";
        }
    }


    return 0;
}
