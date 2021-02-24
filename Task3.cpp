#include <iostream>

using namespace std;

int main()
{
    //Ekrana "*********Bankaya Hosgeldiniz*********" yazdirir.
    cout<<"*********Bankaya Hosgeldiniz*********";
    string isim,soyadi;
    int dogumTarihiniz;
    int Yapmakistediginizislem;
    int pc;
    int py;
    int kc;
    float x;
    string CikisYap;
    CikisYap=4;
    //Ekrana "isminizi girin" yazdirir.
    cout<<"\nisminizi girin:";
     //Kullanicidan ismini girmesini ister.
    cin>>isim;
    //Ekrana "soyadinizi girin" yazdirir.
    cout<<"soyadinizi girin:";
    cin>>soyadi;
     //Kullanicidan soyadini girmesini ister.
    cout<<"Hosgeldin ";
    //Ekrana "Hosgeldin" yazdirir.
    cout<<isim<<" ";
    //Ekrana kullanicinin ismini yazdirir ve bosluk birakir.
    cout<<soyadi;
    //Ekrana kullanicinin soyadini yazdirir.
    string TCKN;
    //Ekrana "TCKN girin:" yazdirir.
    cout<<"\nTCKN girin:";
    //Kullanicidan TCKN girmesini ister.
    cin>>TCKN;
    //"Ekrana Dogum Tarihinizi Girin" yazdirir.
    cout<<"Dogum Tarihinizi Girin ";
    cin>>dogumTarihiniz;
     //"Ekrana Dogum Tarihinizi Girdiniz" yazdirir.
    cout<<"Dogum Tarihinizi Girdiniz.";
    pc=1;
    py=2;
    kc=3;
    cout<<"\nBakiyenizi Girin.";
    cin>>x;
    float toplam;
    toplam=x;

    do{
        //Ekrana "Yapmak istediginiz islemi secin" yazdirir.
        cout<<"\nYapmak istediginiz islemi secin.";
        //Ekrana "1.Para Cek,2.Para Yatir,3.Kredi Cek,4.Cikis Yap." yazdirir.
        cout<<"\n1.Para Cek,2.Para Yatir,3.Kredi Cek,4.Cikis Yap.\n";
        //Kullanicidan Yapmak istedigi islemi girmesini ister.
        cin>>Yapmakistediginizislem;
        // Para Cekme islemini ifade eder.
        if(Yapmakistediginizislem==1){
            //Ekrana "Cekilecek Tutari Girin: " yazdirir.
            printf("Cekilecek Tutari Girin: ");
            //Kullanicidan Cekilecek Para Miktarini Girmesini ister.
            cin>>pc;
            //Cekilen Tutarin bakiyeden buyuk olmasini engeller.
            if(toplam<pc){

                cout<<"Yetersiz Bakiye";
             }
            else{
                toplam=toplam-pc;
                //Ekrana kullanicinin güncel parasini yazdirir.
                cout<<"\nGuncel Paraniz: "<<toplam<<" TL Para Cektiniz.";
             }
        }


        // Para yatirma islemini ifade eder.
        else if(Yapmakistediginizislem==2){
            //Ekrana "Yatirilacak Tutari Girin: " yazdirir.
            printf("Yatirilacak Tutari Girin: ");
            //Kullanicidan yatirilacak tutari girmesini ister.
            cin>>py;
            //Ekrana "TL Para Yatirdiniz." yazdirir.
            cout<<py<<"TL Para Yatirdiniz.";
            toplam=toplam+py;
             //Ekrana kullanicinin guncel parasini yazdirir.
            cout<<"\nGuncel Paraniz: "<<toplam<<"TL";


        }
        //Kredi Cekme islemini ifade eder.
        else if(Yapmakistediginizislem==3)
        {
            //Ekrana "Kredi Miktarini Girin: " yazdirir.
            printf("Kredi Miktarini Girin: ");
            //Kullanicidan Cekilecek Kredi miktarini girmesini ister.
            cin>>kc;
            //Ekrana "TL Kredi Cektiniz." yazdirir.
            cout<<kc<<"TL Kredi Cektiniz.";
            toplam=toplam+kc;
             // Ekrana Kullanicinin Guncel Parasini yazdirir.
            cout<<"\nGuncel Paraniz: "<<toplam<<"TL";
    }
    //Cikis yapma islemini ifade eder.
     else if(Yapmakistediginizislem==4)
        {
            exit(4);

        }
        else{
            cout<<"Girdiginiz Sayi Gecersiz";
        }
    }while(Yapmakistediginizislem==1,2,3,4);

}
