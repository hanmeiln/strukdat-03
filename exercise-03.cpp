/*
Nama program    : Exercise 01
Nama            : Hana Meilina Fauziyyah
NPM             : 140810180012
Tanggal buat    : 13 Maret 2019
Deskripsi       : Segiempat
*************************************************/

#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

typedef struct {
    float panjang;
    float lebar;
} segiempat;

void input(segiempat *s);
float keliling(segiempat s);
float luas(segiempat s);
float diagonal(segiempat s);
void print(segiempat);

int main(){
    segiempat* sg;
    sg = new segiempat;
    input(sg);
    print(*sg);
}

void input(segiempat *s){
    int p,l;
    cout<<"Masukkan panjang : ";
    cin>>s->panjang;
    cout<<"Masukkan lebar : ";
    cin>>s->lebar;
}

float keliling(segiempat s){
    return (2*(s.panjang+s.lebar));
}

float luas(segiempat s){
    return (s.panjang*s.lebar);
}

float diagonal(segiempat s){
    return(sqrt(s.panjang*s.panjang+s.lebar*s.lebar));
}

void print(segiempat s){
    cout<<"Keliling : "<<keliling(s)<<endl;
    cout<<"Luas : "<<luas(s)<<endl;
    cout<<"Diagonal : "<<diagonal(s)<<endl;
}
