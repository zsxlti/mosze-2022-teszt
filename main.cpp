#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //konstans valtozo neve hibas
    std::cout << "1-100 ertekek duplazasa" << std::endl; //hianyzo sorvegjel, szoveg nem dupla idezojelek kozt talalhato, soremeles szebbe esztetikusabba teszi a kiirast
    for (int i = 1; i <= N_ELEMENTS; i++) //hianyos ciklusfeltetel, i-nek 1-nek kell lennie
    {
        b[i] = i * 2;
    }
    for (int i = 1; i<= N_ELEMENTS; i++) //hianyos ciklusfeltetel
    {
        std::cout << "Ertek:"; //hianyzo sorvegjel, ertek kiirasa hianyzik
        std::cout << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag; //int helyett double hasznalata, tizedesjegy levagas elkerulese vegett
    for (int i = 1; i <= N_ELEMENTS; i++) //','-t ';'-re kell cserelni, ciklusvaltozo minden esetben 1-tol kell, hogy induljon
    {
        atlag += b[i]; //hianyzo sorvegjel
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //hianyzo destruktor
    delete[] b;
    std::cout << "Ropog az alma a fogam alatt" << std::endl;
    return 0;
}
