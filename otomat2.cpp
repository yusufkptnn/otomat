#include <iostream>
#include <clocale>
#include <fstream>

using namespace std;

class Urunler
{
private:
    float urunFiyat;
    float kasaNakit = 0;
public:
    int urunStok;
    float hasilatKasa = 0;
    float KasaToplam = 0;

    Urunler(int urunStokAta, float urunFiyatAta)
    {
        urunStok = urunStokAta;
        urunFiyat = urunFiyatAta;
    }

    int UrunAdetOku() const
    {
        return urunStok;
    }

    float ucretOku() const
    {
        return urunFiyat;
    }

    void StokGuncelleme()
    {
        urunStok--;
    }

    void urunListele()
    {
        cout << "^^^^^^^^^^^^^^^^^^^HOŞGELDİNİZ^^^^^^^^^^^^^^^^^^^" << endl;
        cout << "Seçtiğiniz ürünün yanında bulunan sayıya basınız." << endl;
        cout << "Su (1.25 TL) için 1 tuşuna basınız. " << endl;
        cout << "Çay (1.50 TL) için 2 tuşuna basınız. " << endl;
        cout << "Portakal Suyu (1.75 TL) için 3 tuşuna basınız. " << endl;
        cout << "Vişne Suyu (1.85 TL) için 4 tuşuna basınız. " << endl;
        cout << "Sade Soda (2.25 TL) için 5 tuşuna basınız. " << endl;
        cout << "Limonlu Soda (2.40 TL) için 6 tuşuna basınız. " << endl;
        cout << "Soğuk Çay (2.50 TL) için 7 tuşuna basınız. " << endl;
        cout << "Bitki Çayı (2.75 TL) için 8 tuşuna basınız. " << endl;
        cout << "Limonata (3.25 TL) için 9 tuşuna basınız. " << endl;
        cout << "Kahve (3.50 TL) için 10 tuşuna basınız. " << endl;
    }

    void UrunSatis()
    {
        float odeme, paraustu;
        float anaPara = 500;

        if (UrunAdetOku() > 0)
        {
            cout << "Lütfen " << ucretOku() << " lira ödeyiniz: ";
            cin >> odeme;
            paraustu = odeme - ucretOku();

            while (odeme < ucretOku())
            {
                float ekOdeme;
                cout << "Eksik ödeme yaptınız, lütfen " << ucretOku() - odeme << " lira daha ödeyiniz: ";
                cin >> ekOdeme;
                odeme += ekOdeme;
                paraustu = odeme - ucretOku();
            }

            if (paraustu >= 0)
            {
                kasaNakit += ucretOku();
                hasilatKasa += ucretOku();
                KasaToplam = kasaNakit + anaPara;
                StokGuncelleme();
                cout << paraustu << " lira para üstünüzü ilgili bölmeden alabilirsiniz." << endl;
                cout << "Ürününüzü ilgili bölmeden alabilirsiniz. İyi günler dileriz." << endl;
                cout << "Toplam Kasa Parası: " << KasaToplam << " lira" << endl;
            }
            else
            {
                cout << "Eksik tutarda ödeme yaptınız. Lütfen paranızı geri alıp tekrar deneyiniz." << endl;
            }
        }
        else
        {
            cout << "Seçtiğiniz ürün şu anda bulunmamaktadır." << endl;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Turkish");
    Urunler Su(10, 1.25);
    Urunler Cay(10, 1.50);
    Urunler PortakalSuyu(10, 1.75);
    Urunler VisneSuyu(10, 1.85);
    Urunler SadeSoda(10, 2.25);
    Urunler LimonluSoda(10, 2.40);
    Urunler Sogukcay(10, 2.50);
    Urunler BitkiCayi(10, 2.75);
    Urunler Limonata(10, 3.25);
    Urunler Kahve(10, 3.50);
    Urunler admin(0, 0);
    int secim;
    admin.urunListele();
    cin >> secim;
    ofstream dosya;
    while (secim != 0)
    {
        switch (secim)
        {
        case 1:
            Su.UrunSatis();
            break;
        case 2:
            Cay.UrunSatis();
            break;
        case 3:
            PortakalSuyu.UrunSatis();
            break;
        case 4:
            VisneSuyu.UrunSatis();
            break;
        case 5:
            SadeSoda.UrunSatis();
            break;
        case 6:
            LimonluSoda.UrunSatis();
            break;
        case 7:
            Sogukcay.UrunSatis();
            break;
        case 8:
            BitkiCayi.UrunSatis();
            break;
        case 9:
            Limonata.UrunSatis();
            break;
        case 10:
            Kahve.UrunSatis();
            break;
        case 9999:
            dosya.open("gunsonu.txt");
            dosya << "Gün Sonu Kasadaki Toplam Para: " << admin.KasaToplam << " liradır." << endl;
            dosya << "Gün Sonu Toplam Kazanç: " << admin.hasilatKasa << " liradır." << endl;
            dosya << "Su Kalan Stok: " << Su.urunStok << endl;
            dosya << "Çay Kalan Stok: " << Cay.urunStok << endl;
            dosya << "Portakal Suyu Kalan Stok: " << PortakalSuyu.urunStok << endl;
            dosya << "Vişne Suyu Kalan Stok: " << VisneSuyu.urunStok << endl;
            dosya << "Sade Soda Kalan Stok: " << SadeSoda.urunStok << endl;
            dosya << "Limonlu Soda Kalan Stok: " << LimonluSoda.urunStok << endl;
            dosya << "Soğuk Çay Kalan Stok: " << Sogukcay.urunStok << endl;
            dosya << "Bitki Çayı Kalan Stok: " << BitkiCayi.urunStok << endl;
            dosya << "Limonata Kalan Stok: " << Limonata.urunStok << endl;
            dosya << "Kahve Kalan Stok: " << Kahve.urunStok << endl;

            cout << "-------------------------------------------------" << endl;
            cout << "-----------Günsonu işlemi başlatıldı.------------" << endl;
            cout << "-------------------------------------------------" << endl;
            cout << "Günsonu verileri 'gunsonu.txt' dosyasına yazıldı." << endl;
            cout << "-------------------------------------------------" << endl;
            cout << "-----------Ürün Stokları Güncellendi.------------" << endl;
            cout << "-------------------------------------------------" << endl;
            dosya.close();
            secim = 0;
            break;
        default:
            cout << "Yanlış tuşlama yaptınız." << endl;
            cout << "Lütfen tekrar deneyiniz." << endl;
            break;
        }
        admin.urunListele();
    }
    return 0;
}