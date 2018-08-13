// ConsoleApplication1.cpp: definiuje punkt wejœcia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	fstream file;
	file.open("dupa.txt", ios::in);

	if (file.is_open()==false)
	{
		cout << "File doesn't exist";
		exit(0);
	}

	string line;
	double tab[4][50];

	while (getline(file, line))
	{
		for (int i = 1; i < 4; i++)
		{
			for (int j = 1; j < 50; j++)
			{
				tab[i][j] = 
			}
		}
	}

	file.close();
	system("pause");
	return 0;
}

