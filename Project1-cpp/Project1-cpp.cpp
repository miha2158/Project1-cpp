#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

void main()
{
	signed short int p = INT16_MAX;

	cout << p;

	p++;

	cout << p;





	
	/*
	string p = "123 456 8 79 111 5";

	istringstream iss(p);

	vector<string> tokens{ istream_iterator<string>{iss},
		istream_iterator<string>{} };

	for (auto token : tokens)
		cout << token << endl;
	*/
	/*
	static int c, q, d;
	static int arr[10];
	
	ifstream fin("input.txt");
	ofstream fout("output.txt");

	int temp;
	fin >> temp;
	fout << temp;

	fin.close();
	fout.close();
	
	string p = "1234";

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 10;
		arr[0] = 7;
		cout << " " << arr[i];

		q = arr[i];
		_asm
		{
			mov eax, q
			mov ebx, c
			add ebx, eax
			add c, eax
		}

	}
	cout << endl;

	_asm
	{
		l1:
		mov ebx, 9
		mov eax, arr[1]
		add eax, ebx
		add d, eax
		//loop l1;
	}

	//d = stoi(p);

	cout << "result: " << c << " " << d << endl;
	*/

	_getch();
}