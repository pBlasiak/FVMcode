// FVMcode.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "SquareFace.h"

using namespace std;

int main()
{
	Vertex aa(100, 100, 100);
	SquareFace a(aa, 100);
	cout << a.label() << endl;
	cout << a.faceNum() << endl;
	SquareFace b(a);
	cout << b.label() << endl;
	cout << a.faceNum() << endl;
	SquareFace c(aa, 111);
	cout << c.label() << endl;
	cout << a.label() << endl;
	cout << a.faceNum() << endl;
	cout << b.faceNum() << endl;
	cout << c.faceNum() << endl;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
