#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; // Javítva a konstans neve
    std::cout << "1-100 értékek duplázása" << std::endl;

    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = (i + 1) * 2; // Az i + 1 használata a 1-100 közötti értékekhez
    }

    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Érték: " << b[i] << std::endl;
    }

    std::cout << "Átlag számítása: " << std::endl;
    int atlag = 0; // Inicializálni kell az atlag változót
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Átlag: " << atlag << std::endl;

    delete[] b; // memória felszabadítása
    return 0;
}