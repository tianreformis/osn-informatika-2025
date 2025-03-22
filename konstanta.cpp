#include <iostream>
#define phi 3.14 //const
#include <math.h>
using namespace std;

float volumeBola(float jariJari){ //
    //float hasil = 4/3 * phi * jariJari * jariJari * jariJari;
    float hasil = (4/3 * phi) * (pow(jariJari,3));

    return hasil;
}

int main(){
    float jariJari;
    cin>>jariJari;
    float hasilVolumeBola = volumeBola(jariJari); //descructure (mengubah func jadi variabel biasa)
    cout<< "Volume bola: "<< hasilVolumeBola<<endl;
    return 0;
}