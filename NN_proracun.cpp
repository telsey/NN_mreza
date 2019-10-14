// NN_proracun.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <map>

using namespace std;



class mreza {
public:
	int odcjep, dinica, tip, duljina;

	mreza(int odcjep, int dionica, int tip, int duljina){
		this->dinica = dionica;
		this->odcjep = odcjep;
		this->tip = tip;
		this->duljina = duljina;
	}
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

	int bdpo_temp;
	for (int i = 0; i < broj_odcjepa; i++) {
		cout << "Broj dionica odcjepa: " << i + 1<< "\n";
		cin >> bdpo_temp;
		broj_dionica_po_odcjepu_V.push_back(bdpo_temp);
	}


	cout << "\n" << "\n";
	cout << broj_dionica_po_odcjepu_V[0];
	cout << "\n" << "\n";
	cout << broj_dionica_po_odcjepu_V[1];



	

	vector <mreza> Mreza;



	int tip, duljina;


	for (int i = 0; i < broj_odcjepa; i++) {
		for (int j = 0; j < broj_dionica_po_odcjepu_V[i]; j++) {

			cout << "Unesi tip vodič za dionicu " << i + 1 << "." << j + 1 << ": ";
			cin >> tip;
			cout << "Unesi duljinu dionice " << i + 1 << "." << j + 1 << ": ";
			cin >> duljina;


	
			mreza nova_dionica (i, j, tip, duljina);
			Mreza.push_back(nova_dionica);
		}
	}

	


	int size = Mreza.size();

	
	for (int i = 0; i < size; i++) {
		
		cout << "Odcjep broj " << Mreza[i].odcjep + 1 << " dionica broj " << Mreza[i].dinica + 1 << " , tip vodiča: " << Mreza[i].tip << " duljine: " << Mreza[i].duljina << " m " << "\n";
		

	}
	

}






/*
	cout << "Odaberi standard potrošnje:\n 1)Visoki standard \n 2)Srednji viši standard \n 3)Srednji niži standard\n 4)Nizak standard\n";
	while (standard_potrošnje < 1 || standard_potrošnje > 4) {
		cin >> standard_potrošnje;
	}
	*/