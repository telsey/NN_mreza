// NN_proracun.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;







class dionica {
public:
	dionica(int tip, int duljina)
	{
		this.tip = tip;
		this.duljina = duljina
	}
	
	int tip, duljina;
};

class odcjep {
	dionica dionica;

};



int main()
{
	//Inicijalizacija
	int standard_potrošnje = 0;
	int broj_dionica = 0;
	int broj_odcjepa;




	
	cout << "Upiši broj odcjepa: ";
	cin >> broj_odcjepa;



	
	vector <int> broj_dionica_po_odcjepu_V;

	int bdpo;
	for (int i = 0; i < broj_odcjepa; i++) {
		cout << "Broj dionica odcjepa: " << i + 1<< "\n";
		cin >> bdpo;
		broj_dionica_po_odcjepu_V.push_back(bdpo);
	}

	cout << "\n" << "\n";
	cout << broj_dionica_po_odcjepu_V[0];
	cout << "\n" << "\n";
	cout << broj_dionica_po_odcjepu_V[1];



	

	vector <dionica> dionice;

	map <int, odcjep> mreza;



	int tip, duljina;

	for (int i = 0; i < broj_odcjepa; i++) {
		for (int j = 0; j < broj_dionica_po_odcjepu_V[i]; j++) {
			cout << "Unesi tip vodič za dionicu " << i + 1 << "." << j + 1 << ": " << "\n";
			cin >> tip;
			cout << "Unesi duljinu dionice " << i + 1 << "." << j + 1 << ": " << "\n";
			cin >> duljina;

			dionica nova_dionica(tip, duljina);

			dionice.push_back(nova_dionica);
		}
	}

	cout << "\n" << "\n";
	cout << dionice[0].tip;
	cout << "\n" << "\n";
	cout << dionice[0].duljina;



}






/*
	cout << "Odaberi standard potrošnje:\n 1)Visoki standard \n 2)Srednji viši standard \n 3)Srednji niži standard\n 4)Nizak standard\n";
	while (standard_potrošnje < 1 || standard_potrošnje > 4) {
		cin >> standard_potrošnje;
	}
	*/
