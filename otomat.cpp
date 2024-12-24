#include<iostream>
#include<clocale>
#include<fstream>
using namespace std;
int main()
{
setlocale(LC_ALL, "tr_TR.UTF-8");
int girilenUrun;
bool gunsonu = true;
float kasadakiPara = 500 , musteriPara, kalanPara ;
float urunFiyat[2][10] = {{1,2,3,4,5,6,7,8,9,10},{1.5,7.5,4.5,3.25,2.75,7.75,9.5,1.75,2.5,3.5}};
int urun1 = 100 , urun2 = 100 , urun3 = 100 , urun4 = 100 , urun5 = 100 , urun6 = 100 , urun7 = 100 , urun8 = 100 , urun9 = 100 , urun10 = 100 ;
while(gunsonu == true){
cout<<"Ürünler:"<<endl<<"1.Su 2.Kahve 3.Kola 4.Soğuk Çay 5.Çay 6.Soğuk Kahve 7.Enerji İçeceği 8.Maden Suyu 9.Ayran 10. Süt"<<endl;
cout<<"Almak istediğiniz ürünün numarasını tuşlayınız."<<endl;
cin>>girilenUrun;
if(girilenUrun==1)
{if(urun1==0){
    cout<<"İstediğiniz ürün kalmamıştır.";
}
else{cout<<"Ürünün fiyatı:"<<urunFiyat[1][0]<<"TL"<<endl<<"Paranızı giriniz."<<endl;
cin>>musteriPara;
if(musteriPara<urunFiyat[1][0]){
    cout<<"Verilen para ürünün değeriyle eşdeğer değil."<<endl;
}
else if(musteriPara>urunFiyat[1][0]){
    urun1=urun1-1;
    kasadakiPara = kasadakiPara + urunFiyat[1][0];
    kalanPara = musteriPara - urunFiyat[1][0];
    cout<<"Para üstü:"<<kalanPara<<endl;
}
}
}
else if(girilenUrun==2){
if(urun2==0){
    cout<<"İstediğiniz ürün kalmamıştır.";
}
else{cout<<"Ürünün fiyatı:"<<urunFiyat[1][1]<<"TL"<<endl<<"Paranızı giriniz."<<endl;
cin>>musteriPara;
if(musteriPara<urunFiyat[1][1]){
    cout<<"Verilen para ürünün değeriyle eşdeğer değil."<<endl;
}
else if(musteriPara>urunFiyat[1][1]){
    urun2=urun2-1;
    kasadakiPara = kasadakiPara + urunFiyat[1][1];
    kalanPara = musteriPara - urunFiyat[1][1];
    cout<<"Para üstü:"<<kalanPara<<endl;
}
}}
else if(girilenUrun==3){
if(urun3==0){
    cout<<"İstediğiniz ürün kalmamıştır.";
}
else{cout<<"Ürünün fiyatı:"<<urunFiyat[1][2]<<"TL"<<endl<<"Paranızı giriniz."<<endl;
cin>>musteriPara;
if(musteriPara<urunFiyat[1][2]){
    cout<<"Verilen para ürünün değeriyle eşdeğer değil."<<endl;
}
else if(musteriPara>urunFiyat[1][2]){
    urun3=urun3-1;
    kasadakiPara = kasadakiPara + urunFiyat[1][2];
    kalanPara = musteriPara - urunFiyat[1][2];
    cout<<"Para üstü:"<<kalanPara<<endl;
}
}}
else if(girilenUrun==4){
if(urun4==0){
    cout<<"İstediğiniz ürün kalmamıştır.";
}
else{cout<<"Ürünün fiyatı:"<<urunFiyat[1][3]<<"TL"<<endl<<"Paranızı giriniz."<<endl;
cin>>musteriPara;
if(musteriPara<urunFiyat[1][3]){
    cout<<"Verilen para ürünün değeriyle eşdeğer değil."<<endl;
}
else if(musteriPara>urunFiyat[1][3]){
    urun4=urun4-1;
    kasadakiPara = kasadakiPara + urunFiyat[1][3];
    kalanPara = musteriPara - urunFiyat[1][3];
    cout<<"Para üstü:"<<kalanPara<<endl;
}
}}
else if(girilenUrun==5){
if(urun5==0){
    cout<<"İstediğiniz ürün kalmamıştır.";
}
else{cout<<"Ürünün Fiyatı:"<<urunFiyat[1][4]<<"TL"<<endl<<"Paranızı giriniz."<<endl;
cin>>musteriPara;
if(musteriPara<urunFiyat[1][4]){
    cout<<"Verilen para ürünün değeriyle eşdeğer değil."<<endl;
}
else if(musteriPara>urunFiyat[1][4]){
    urun5=urun5-1;
    kasadakiPara = kasadakiPara + urunFiyat[1][4];
    kalanPara = musteriPara - urunFiyat[1][4];
    cout<<"Para üstü:"<<kalanPara<<endl;
}
}}
else if(girilenUrun==6){
if(urun6==0){
    cout<<"İstediğiniz ürün kalmamıştır.";
}
else{cout<<"Ürünün fiyatı:"<<urunFiyat[1][5]<<"TL"<<endl<<"Paranızı giriniz"<<endl;
cin>>musteriPara;
if(musteriPara<urunFiyat[1][5]){
    cout<<"Verilen para ürünün değeriyle eşdeğer değil."<<endl;
}
else if(musteriPara>urunFiyat[1][5]){
    urun6=urun6-1;
    kasadakiPara = kasadakiPara + urunFiyat[1][5];
    kalanPara = musteriPara - urunFiyat[1][5];
    cout<<"Para üstü:"<<kalanPara<<endl;
}
}}
else if(girilenUrun==7){
if(urun1==0){
    cout<<"İstediğiniz ürün kalmamıştır.";
}
else{cout<<"Ürünün Fiyatı"<<urunFiyat[1][6]<<"TL"<<endl<<"Paranızı giriniz"<<endl;
cin>>musteriPara;
if(musteriPara<urunFiyat[1][6]){
    cout<<"Verilen para ürünün değeriyle eşdeğer değil."<<endl;
}
else if(musteriPara>urunFiyat[1][6]){
    urun7=urun7-1;
    kasadakiPara = kasadakiPara + urunFiyat[1][6];
    kalanPara = musteriPara - urunFiyat[1][6];
    cout<<"Para üstü:"<<kalanPara<<endl;
}
}}
else if(girilenUrun==8){
if(urun8==0){
    cout<<"İstediğiniz ürün kalmamıştır.";
}
else{cout<<"Ürünün fiyatı:"<<urunFiyat[1][7]<<"TL"<<endl<<"Paranızı giriniz"<<endl;
cin>>musteriPara;
if(musteriPara<urunFiyat[1][7]){
    cout<<"Verilen para ürünün değeriyle eşdeğer değil."<<endl;
}
else if(musteriPara>urunFiyat[1][7]){
    urun8=urun8-1;
    kasadakiPara = kasadakiPara + urunFiyat[1][7];
    kalanPara = musteriPara - urunFiyat[1][7];
    cout<<"Para üstü:"<<kalanPara<<endl;
}
}}
else if(girilenUrun==9){
if(urun9==0){
    cout<<"İstediğiniz ürün kalmamıştır.";
}
else{cout<<"Ürünün fiyatı:"<<urunFiyat[1][8]<<"TL"<<endl<<"Paranızı giriniz."<<endl;
cin>>musteriPara;
if(musteriPara<urunFiyat[1][8]){
    cout<<"Verilen para ürünün değeriyle eşdeğer değil."<<endl;
}
else if(musteriPara>urunFiyat[1][8]){
    urun9=urun9-1;
    kasadakiPara = kasadakiPara + urunFiyat[1][8];
    kalanPara = musteriPara - urunFiyat[1][8];
    cout<<"Para üstü:"<<kalanPara<<endl;
}
}}
else if(girilenUrun==10){
if(urun10==0){
    cout<<"İstediğiniz ürün kalmamıştır.";
}
else{cout<<"Ürünün fiyatı:"<<urunFiyat[1][9]<<"TL"<<endl<<"Paranızı giriniz."<<endl;
cin>>musteriPara;
if(musteriPara<urunFiyat[1][9]){
    cout<<"Verilen para ürünün değeriyle eşdeğer değil."<<endl;
}
else if(musteriPara>urunFiyat[1][9]){
    urun10=urun10-1;
    kasadakiPara = kasadakiPara + urunFiyat[1][9];
    kalanPara = musteriPara - urunFiyat[1][9];
    cout<<"Paraüstü:"<<kalanPara<<endl;
}
}}
else if(girilenUrun==1234)
{
int kalanUrun1=100-urun1, kalanUrun2=100-urun2, kalanUrun3=100-urun3, kalanUrun4=100-urun4, kalanUrun5=
100-urun5, kalanUrun6=100-urun6, kalanUrun7=100-urun7, kalanUrun8=100-urun8, kalanUrun9=100-urun9,
kalanUrun10=100-urun10;
ofstream urunDetay("urundetay.txt");    
urunDetay<<"Satılan ürün sayıları:"<<endl<<"Satılan su sayısı:"<<kalanUrun1<<"\t Satılan kahve sayısı:"<<kalanUrun2<<"\t Satılan kola sayısı:"<<kalanUrun3<<"\t Satılan soğuk çay sayısı:"<<kalanUrun4<<"\t Satılan çay sayısı"<<kalanUrun5<<"\t Satılan soğuk kahve sayısı:"<<kalanUrun6<<"\t Satılan enerji içeceği sayısı"<<kalanUrun7<<"\t Satılan maden suyu sayısı:"<<kalanUrun8<<"\t Satılan ayran sayısı"<<kalanUrun9<<"\t Satılan süt sayısı"<<kalanUrun10<<endl;
urunDetay<<"Ürünlerin Stok Durumu:"<<endl<<"Su:"<<urun1<<"\t Kahve:"<<urun2<<"\t Kola:"<<urun3<<"\t Soğuk Çay:"<<urun4<<"\t Çay:"<<urun5<<"\t Soğuk Kahve:"<<urun6<<"\t Enerji İçeceği:"<<urun7<<"\t Maden Suyu:"<<urun8<<"\t Ayran:"<<urun9<<"\t Süt:"<<urun10<<endl;
urunDetay<<"Kasadaki para:"<<kasadakiPara<<"TL \t"<<"Günün hasılatı:"<<kasadakiPara-500<<endl;
urunDetay.close();
gunsonu = false;
}
else
{
    cout<<"Yanlış tuşladınız lütfen alltaki sayılardan birini tuşlayınız."<<endl;
}
}



    return 0;
}
