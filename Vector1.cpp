// ConsoleApplication1.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


int main()
{	
	int suma = 0;
	string a;
	int tab[4][50];
	ifstream file("Meas_log_500.txt", ios::in);
	if (file.is_open()) {
		for (int j = 0; j < 50; j++) {
			for (int i = 0; i < 4; i++)
			{
				file >> a;
				tab[i][j]=stoi(a);
				cout << tab[i][j] << " ";
			}
			cout << endl;
		}
		file.close();
	}
	else
	{
		cout << "Fail";
	}
	for (int i = 0; i < 50; i++)
	{
		suma += tab[0][i];
	}
	cout << suma / 50;
	
	system("pause");
	return 0;
}

/*while (getline(file, line))
{
for (int i = 1; i < 4; i++)
{
for (int j = 1; j < 50; j++)
{
tab[i][j] =
}
}
}*/