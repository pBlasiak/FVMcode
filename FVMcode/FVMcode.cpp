// FVMcode.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "SquareFace.h"
#include "Vertex.h"

using namespace std;

int main()
{
	Vertex r(2, -3, 5);
	Vertex o;
	Vertex A(10,10,2);
	Vertex B(-10,-5,1);
	Vertex C(2,-2,-2);
	Vertex D(1,-2,3);
	Vertex E(2,3,1);
	Vertex i(1, 0, 0);
	Vertex j(1, 0, 0);
	Edge AA(o, D);
	Edge BB(o, r);
	cout << AA * BB << endl;
	SquareFace f(AA, BB);
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
