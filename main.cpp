#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //konstans valtozo neve hibas
    std::cout << '1-100 ertekek duplazasa' //hianyza sorvegjel, szoveg nem dupla idezojelek kozt talalhato, soremeles hianya
    for (int i = 0;) //hianyos ciklusfej
    {
        b[i] = i * 2; //hianyzo dereferencia
    }
    for (int i = 0; i; i++) //hianyos ciklusfej
    {
        std::cout << "Ertek:" //hianyzo sorvegjel
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //int helyett double hasznalata, tizedesjegy levagas elkerulese vegett
    for (int i = 0; i < N_ELEMENTS, i++) //','-t ';'-re kell cserelni
    {
        atlag += b[i] //hianyzo sorvegjel, hianyzo dereferencia
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //hianyzo destruktor
    return 0;
}
