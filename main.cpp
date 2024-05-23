#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    int choice, value;
    do {
        cout << "\n1. Dodaj liczbe do kolejki" << endl;
        cout << "2. Usun wartosc z kolejki" << endl;
        cout << "3. Sprawdz pierwsza wartosc z kolejki" << endl;
        cout << "4. Sprawdz czy kolejka jest pusta" << endl;
        cout << "5. Sprawdz czy kolejka jest pelna" << endl;
        cout << "6. Koniec programu" << endl;
        cout << "Wybierz opcje: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Podaj liczbe do dodania: ";
                cin >> value;
                dodaj(value);
                break;
            case 2:
                value = usun();
                if (value != -1)
                    cout << "Usunieto wartosc: " << value << endl;
                break;
            case 3:
                value = pierwszaWartosc();
                if (value != -1)
                    cout << "Pierwsza wartosc w kolejce: " << value << endl;
                break;
            case 4:
                if (czyPusta())
                    cout << "Kolejka jest pusta" << endl;
                else
                    cout << "Kolejka nie jest pusta" << endl;
                break;
            case 5:
                if (czyPelna())
                    cout << "Kolejka jest pelna" << endl;
                else
                    cout << "Kolejka nie jest pelna" << endl;
                break;
            case 6:
                cout << "Koniec programu" << endl;
                break;
            default:
                cout << "Niepoprawna opcja" << endl;
                break;
        }
    } while (choice != 6);

    return 0;
}