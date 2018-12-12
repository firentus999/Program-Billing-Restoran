#include<iostream
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
    int kode,pri,jml,total,kembalian,bayar;
    char mad;
    cout<<"============SILAHKAN MEMESAN !===========\n";
    cout<<"MENU MAKANAN                 HARGA"<<endl;
    cout<<"=========================================\n"<<endl;
    cout<<"1. AYAM GORENG               Rp.10.000"<<endl;
    cout<<"2. NASI GORENG               Rp.8000"<<endl;
    cout<<"3. MIE PANGSIT               Rp.15.000"<<endl;
    cout<<"4. AYAM PENYET               Rp.15.000"<<endl;
    cout<<"5. NASI CAMPUR               Rp.8000"<<endl;
    cout<<"6. ES JERUK                  Rp.5000"<<endl;
    cout<<"7. TEH MANIS                 Rp.4000"<<endl;
    cout<<"8. AIR PUTIH                 Rp.3000"<<endl;

    cout<<'\n'<<"Masukan Pilihan Anda :";cin>>kode;
   system("cls");
    switch (kode)
    {
    case 1:
        cout<<"AYAM GORENG"<<endl;
        pri=10000;
        cout<<"Masukan Jumlah :";cin>>jml;
        total=pri*jml;
        cout<<"Total Harganya yaitu : Rp."<<total<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"kembalian : Rp."<<kembalian<<endl;
        system("CLS");
        cout<<"==============================================\n"<<endl;
        cout<<"total    = Rp." <<total;cout<<endl;
        cout<<"bayar    = Rp." <<bayar;cout<<endl;
        cout<<"kembalian  = Rp." <<kembalian;cout<<endl;
        cout<<"=====TERIMA KASIH SUDAH BERKUNJUNG DITEMPAT KAMI=======\n";
        cout<<"==============================================\n"<<endl;break;
    case 2:
        cout<<"NASI GORENG"<<endl;
        pri=8000;
        cout<<"Masukan Jumlah :";cin>>jml;
        total=pri*jml;
        cout<<"Total Harganya yaitu : Rp."<<total<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"kembalian : Rp."<<kembalian<<endl;
        system("CLS");
        cout<<"==============================================\n"<<endl;
        cout<<"total    = Rp." <<total;cout<<endl;
        cout<<"bayar    = Rp." <<bayar;cout<<endl;
        cout<<"kembalian  = Rp." <<kembalian;cout<<endl;
        cout<<"=====TERIMA KASIH SUDAH BERKUNJUNG DITEMPAT KAMI=======\n";
        cout<<"==============================================\n"<<endl;break;
    case 3:
        cout<<"MIE PANGSIT"<<endl;
        pri=15000;
        cout<<"Masukan Jumlah :";cin>>jml;
        total=pri*jml;
        cout<<"Total Harganya yaitu : Rp."<<total<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"kembalian : Rp."<<kembalian<<endl;
        system("CLS");
        cout<<"==============================================\n"<<endl;
        cout<<"total    = Rp." <<total;cout<<endl;
        cout<<"bayar    = Rp." <<bayar;cout<<endl;
        cout<<"kembalian  = Rp." <<kembalian;cout<<endl;
        cout<<"=====TERIMA KASIH SUDAH BERKUNJUNG DITEMPAT KAMI=======\n";
        cout<<"==============================================\n"<<endl;break;
    case 4:
        cout<<"AYAM PENYET"<<endl;
        pri=15000;
        cout<<"Masukan Jumlah :";cin>>jml;
        total=pri*jml;
        cout<<"Total Harganya yaitu : Rp."<<total<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"kembalian : Rp."<<kembalian<<endl;
        system("CLS");
        cout<<"==============================================\n"<<endl;
        cout<<"total    = Rp." <<total;cout<<endl;
        cout<<"bayar    = Rp." <<bayar;cout<<endl;
        cout<<"kembalian  = Rp." <<kembalian;cout<<endl;
        cout<<"=====TERIMA KASIH SUDAH BERKUNJUNG DITEMPAT KAMI=======\n";
        cout<<"==============================================\n"<<endl;break;
    case 5:
        cout<<"NASI CAMPUR"<<endl;
        pri=8000;
        cout<<"Masukan Jumlah :";cin>>jml;
        total=pri*jml;
        cout<<"Total Harganya yaitu : Rp."<<total<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"kembalian : Rp."<<kembalian<<endl;
        system("CLS");
        cout<<"==============================================\n"<<endl;
        cout<<"total    = Rp." <<total;cout<<endl;
        cout<<"bayar    = Rp." <<bayar;cout<<endl;
        cout<<"kembalian  = Rp." <<kembalian;cout<<endl;
        cout<<"=====TERIMA KASIH SUDAH BERKUNJUNG DITEMPAT KAMI=======\n";
        cout<<"==============================================\n"<<endl;break;
    case 6:
        cout<<"ES JERUK"<<endl;
        pri=5000;
        cout<<"Masukan Jumlah :";cin>>jml;
        total=pri*jml;
        cout<<"Total Harganya yaitu : Rp."<<total<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"kembalian : Rp."<<kembalian<<endl;
        system("CLS");
        cout<<"==============================================\n"<<endl;
        cout<<"total    = Rp." <<total;cout<<endl;
        cout<<"bayar    = Rp." <<bayar;cout<<endl;
        cout<<"kembalian  = Rp." <<kembalian;cout<<endl;
        cout<<"=====TERIMA KASIH SUDAH BERKUNJUNG DITEMPAT KAMI=======\n";
        cout<<"==============================================\n"<<endl;break;
    case 7:
        cout<<"TEH MANIS"<<endl;
        pri=5000;
        cout<<"Masukan Jumlah :";cin>>jml;
        total=pri*jml;
        cout<<"Total Harganya yaitu : Rp."<<total<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"kembalian : Rp."<<kembalian<<endl;
        system("CLS");
        cout<<"==============================================\n"<<endl;
        cout<<"total    = Rp." <<total;cout<<endl;
        cout<<"bayar    = Rp." <<bayar;cout<<endl;
        cout<<"kembalian  = Rp." <<kembalian;cout<<endl;
        cout<<"=====TERIMA KASIH SUDAH BERKUNJUNG DITEMPAT KAMI=======\n";
        cout<<"==============================================\n"<<endl;break;
    case 8:
        cout<<"AIR PUTIH"<<endl;
        pri=3000;
        cout<<"Masukan Jumlah :";cin>>jml;
        total=pri*jml;
        cout<<"Total Harganya yaitu : Rp."<<total<<endl;
        cout<<"DIBAYAR :Rp.";
        cin>>bayar;
        kembalian=bayar-total;
        cout<<"kembalian : Rp."<<kembalian<<endl;
        system("CLS");
        cout<<"==============================================\n"<<endl;
        cout<<"total    = Rp." <<total;cout<<endl;
        cout<<"bayar    = Rp." <<bayar;cout<<endl;
        cout<<"kembalian  = Rp." <<kembalian;cout<<endl;
        cout<<"===========================================\n"<<endl;
        cout<<"=====TERIMA KASIH SUDAH BERKUNJUNG DITEMPAT KAMI=======\n";
    }
        return 0;


    }
