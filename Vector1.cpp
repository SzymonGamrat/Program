// ConsoleApplication1.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;


int main()
{
	string a;
	ifstream file("Meas_log_500.txt", ios::in);
	if (file.is_open()) {
		vector<int>mensuration;
		int number{ 0 };
		while (file >> number)
		{
			mensuration.emplace_back(number);					
		}
		cout << "Size: " << mensuration.size() << endl;
		for (int k = 0; k < mensuration.size()/200; k++)
		{
			for (int j = 0; j < 4; j++)
			{
				int suma = 0;
					for (int i = j+k*200; i < 200+k*200; i += 4)
					{
						suma += mensuration[i];
					}
				cout << suma / 50 << " ";
			}
			cout << endl;
		}		
		file.close();
	}
	else
	{
		cout << "Fail";
	}

	
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