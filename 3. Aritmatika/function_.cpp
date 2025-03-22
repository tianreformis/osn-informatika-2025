//function akan menerima parameter
//function adalah kewajiban dari suatu function
/*
    function perkaliandua bilangan, butuh dua parameter (bilangan pertama dan bilangan)
*/

#include <iostream>
#include <cmath>
using namespace std;
//function custom 
int perkalianDuaBilangan(int angka1, int angka2){ //declare parameter
    int hasil = angka1 * angka2;
    return hasil;
}

float volumeKubus(float sisi){
    //float hasil = sisi * sisi * sisi;
    float hasil = pow(sisi,3);
    return hasil;
}

//main funcion
int main(){
    //cout<<perkalian_dua_bilangan(10,3); //passing data into parameter
    float hasilVolumeKubus = volumeKubus(5); //descructure (mengubah func jadi variabel biasa)
    cout<< "Volume kubus: "<< hasilVolumeKubus<<endl;
    return 0;
}