#include "stdafx.h"
#include "iostream"
#include "string"
#include "fstream"

using namespace std;

int main()
{
	static int c, q, d;
	static int arr[10];
	
	ifstream fin("input.txt");
	ofstream fout("output.txt");

	int temp;
	fin >> temp;
	fout << temp;

	fin.close();
	fout.close();
	
	/*
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

	cin.get();*/
    return 0;
}