//Berat Badan Ideal

#include <iostream>

using namespace std;

int main()
{
    double bb, tb, bbi, d;
    cout<<"Masukan tinggi badan anda (cm): ";
    cin>>tb;
    cout<<"Masukan berat badan anda (kg): ";
    cin>>bb;
    
    bbi=(tb-100)-((tb-100)*0.1);
    
    cout<<"Berat badan idealmu: "<<bbi<<"kg\n";
    
    if(bb>bbi)
    {
        d=bb-bbi;
        if(d<=3)
            cout<<"Beratmu cukup ideal!! Akan lebih baik jika bisa turun sebanyak: "<<d<<"kg\n";
        else 
            cout<<"OH TIDAK KAMU TERLALU GEMUK!!! Turunkan beratmu sebanyak: "<<d<<"kg\n";
    }
    
    if(bb<bbi)
    {
        d=bbi-bb;
        if(d<=3)
            cout<<"Beratmu cukup ideal!! Akan lebih baik jika bisa naik sebanyak: "<<d<<"kg\n";
        else 
            cout<<"OH TIDAK KAMU TERLALU KURUS!!! Naikan beratmu sebanyak: "<<d<<"kg\n";
    }
    
    if(bb==bbi)
    cout<<"HOREEE!! Beratmu sudah ideal.";
    

    return 0;
}
