#include <iostream>

using namespace std;

//Girilen paraya göre kullanılacak en az banknotu ve hangi banknottan kaç tane kullanıldığını yazan program
//Banknotlar = 100-50-10-1

int main()
{

    while(1)
    {
        int banknot_sayisi = 0, para, deger,deger1,deger2,banknot_100,banknot_50,banknot_10;

        cout << "Parayi giriniz(Cikmak icin parayi 0 giriniz!) : " ;
        cin >> para ;
    
        if(para == 0 )
        {
            cout << "Gule Gule" ;
            break;
        }


        deger = para % 100;
        banknot_100 = int(para / 100);
        banknot_sayisi += banknot_100;

        deger1 = deger % 50;
        banknot_50 = int(deger / 50);
        banknot_sayisi += banknot_50;

        deger2 = deger1 % 10;
        banknot_10 = int(deger1 / 10);
        banknot_sayisi += banknot_10;

        banknot_sayisi += deger2;

        cout << "Toplam banknot sayisi :" << banknot_sayisi << endl; 
        cout << "100'luk banknot sayisi :" << banknot_100 << endl;
        cout << "50'lik banknot sayisi :" << banknot_50 << endl;
        cout << "10'luk banknot sayisi :" << banknot_10 << endl;
        cout << "1'lik banknot sayisi :" << deger2 << endl;
    }
}

