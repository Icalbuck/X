#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    bool mibool = true;
    float mifloat = 10.25;
    int mint = 5;
    char michar = 'a';
    bool *puntbool;
    float *puntfloat;
    int *puntint;
    char *puntchar;
    puntbool=&mibool;
    *puntbool=mibool;
    puntfloat=&mifloat;
    *puntfloat=mifloat;
    puntint=&mint;
    *puntint=mint;
    puntchar=&michar;
    *puntchar=michar;
    cout << "DATOS VARIABLES" << endl;
    cout << "VARIABLE" << " / " << "TIPO" << " / " << "VALOR" << " / " << "DIRECCION" << " / " << "TAMA" << (char)165 << "O" << endl;
    cout << "mibool" << " / " << "bool" << " / " << mibool << " / " << &mibool << " / " << sizeof(mibool) << endl;
    cout << "mifloat" << " / " << "float" << " / " << mifloat << " / " << &mifloat << " / " << sizeof(mifloat) << endl;
    cout << "mint" << " / " << "int" << " / " << mint << " / " << &mint << " / " << sizeof(mint) << endl;
    cout << "michar" << " / " << "char" << " / " << michar << " / " << (void *)puntchar << " / " << sizeof(michar) << endl;
    system("pause");
    cout << "DATOS DE LOS APUNTADORES" << endl;
    cout << "PUNTERO" << " / " << "VARIABLE" << " / " << "VALOR" << " / " << "DIRECCION" << " / " << "TAMA" << (char)165 << "O" << endl;
    cout << "puntbool" << " / " << "mibool" << " / " << puntbool << " / " << &puntbool << " / " << sizeof(puntbool) << endl;
    cout << "puntfloat" << " / " << "mifloat" << " / " << puntfloat << " / " << &puntfloat << " / " << sizeof(puntfloat) << endl;
    cout << "puntint" << " / " << "mint" << " / " << puntint << " / " << &puntint << " / " << sizeof(puntint) << endl;
    cout << "puntchar" << " / " << "michar" << " / " << puntchar << " / " << (void *)&puntchar << " / " << sizeof(puntchar) << endl;

}
