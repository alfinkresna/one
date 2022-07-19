#include <iostream>
#include <string.h>

void encrypt()
{
    char text[100];
    char x7;
    int i, key;

    std::cout << "\nMasukkan Pesan Untuk Dienkripsi : " << "\n" << std::endl;
    std::cin >> text;
    std::cout << "\nMasukkan Kunci : " << "\n" << std::endl;
    std::cin >> key;
    for (i = 0; text[i] != '\0'; ++i)
    {
        x7 = text[i];
        
        if (x7 >= 'a' && x7 <= 'z')
        {
            x7 = x7 + key;

            if (x7 > 'z')
            {
                x7 = x7 - 'z' + 'a' - 1;
            }

            text[i] = x7;
        }
        
        else if (x7 >= 'A' && x7 <= 'Z')
        {
            x7 = x7 + key;

            if (x7 > 'Z')
            {
                x7 = x7 - 'Z' + 'A' - 1;
            }

            text[i] = x7;
        }
    }

    std::cout << "\nPesan Terenkripsi : " << text << std::endl;
}

void decrypt()
{
    char text[100];
    char x7;
    int i, key;
    std::cout << "\nMasukkan Pesan Untuk Didekripsi : " << "\n" << std::endl;
    std::cin >> text;
    std::cout << "\nMasukkan Kunci : " << "\n" << std::endl;
    std::cin >> key;
    for (i = 0; text[i] != '\0'; ++i)
    {
        x7 = text[i];
        
        if (x7 >= 'a' && x7 <= 'z')
        {
            x7 = x7 - key;

            if (x7 < 'a')
            {
                x7 = x7 + 'z' - 'a' + 1;
            }

            text[i] = x7;
        }
        
        else if (x7 >= 'A' && x7 <= 'Z')
        {
            x7 = x7 - key;

            if (x7 < 'A')
            {
                x7 = x7 + 'Z' - 'A' + 1;
            }

            text[i] = x7;
        }
    }

    std::cout << "\nPesan Yang Didekripsi : " << text << std::endl;
}

int main(int argc, char *argv[])
{
    int choice;
    
    std::cout << "{1} Enkripsi \n\n{2} Dekripsi" << std::endl;
    std::cout << "\nPilih Menu : ";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        encrypt();
        break;
    case 2:
        decrypt();
        break;
    default:
        std::cout << "\n{!} Opsi Tidak Valid" << std::endl;
        break;
    }

    return 0;
}