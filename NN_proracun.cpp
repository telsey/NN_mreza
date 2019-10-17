// NN_proracun.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>


using namespace std;



class Mreza {
public:
	int odcjep, dinica, tip, duljina;

	Mreza(int odcjep, int dionica, int tip, int duljina){
		this->dinica = dionica;
		this->odcjep = odcjep;
		this->tip = tip;
		this->duljina = duljina;
	}
};



class Povezanost {
public:
	int pov_odcjep;
	int pov_dionica;

	Povezanost(int pov_odcjep, int pov_dionica) {
		this->pov_odcjep = pov_odcjep;
		this->pov_dionica = pov_dionica;
	}
};



int main()
{
	int broj_dionica, broj_odcjepa, temp, tip, duljina;

	//Unos broja odcjepa
	cout << "Upiši broj odcjepa: ";
	cin >> broj_odcjepa;

	//Unos broja dionica za svaki odcjep
	vector <int> VEC_broj_dionica_po_odcjepu;

	for (int i = 1; i < broj_odcjepa + 1; i++) {
		cout << "Koliko dionica ima odcjep " << i << " : ";
		cin >> temp;
		VEC_broj_dionica_po_odcjepu.push_back(temp);
	}



	//Povezanost__________________________INFO -> ako se odcjep spaja na 0 znači da je spojen na TS____________________________________________________________________________________________________________________________________

	vector <int> v_povezanost;

	
	//Upisuje povezanost odcjepa
	for (int i = 1; i < broj_odcjepa + 1; i++) {
		cout << "Odcjep " << i << " se spaja na odcjep: ";
		cin >> temp;
		v_povezanost.push_back(temp);  
	}


	
	vector <Povezanost> povezanost;


	//Upisuje početnu točku odcjepa
	for (int i = 1; i < broj_odcjepa + 1; i++) {
		if (v_povezanost[i - 1] != 0) {
			cout << "Odcjep " << i << " se spaja na odcjep " << v_povezanost[i - 1] << " u točki: ";
			cin >> temp;
			Povezanost novi_objekt(v_povezanost[i - 1], temp);
			povezanost.push_back(novi_objekt);
		}
		else {
			Povezanost novi_objekt(0, 0);
			povezanost.push_back(novi_objekt);
		}
			
	}


	//ispis povezanosti
	for (int i = 0; i < broj_odcjepa; i++) {
		cout << "Odcjep broj " << i << " se spaja na odcjep " << povezanost[i].pov_odcjep  << " u točki " << povezanost[i].pov_odcjep  << "." << povezanost[i].pov_dionica  << "\n";
	}

	//_________________________________________________________________________________________________________________________________________________________________________________________



	vector <Mreza> mreza;


	for (int i = 0; i < broj_odcjepa; i++) {
		for (int j = 0; j < VEC_broj_dionica_po_odcjepu[i]; j++) {

			cout << "Unesi tip vodič za dionicu " << i + 1 << "." << j + 1 << ": ";
			cin >> tip;
			cout << "Unesi duljinu dionice " << i + 1 << "." << j + 1 << ": ";
			cin >> duljina;

			Mreza nova_dionica (i, j, tip, duljina);
			mreza.push_back(nova_dionica);
		}
	}

	cout << endl;


	int size = mreza.size();

	
	for (int i = 0; i < size; i++) {
		
		cout << "Odcjep broj " << mreza[i].odcjep + 1 << " dionica broj " << mreza[i].dinica + 1 << " , tip vodiča: " << mreza[i].tip << " duljine: " << mreza[i].duljina << " m " << "\n";
		
	}
}






/*
	cout << "Odaberi standard potrošnje:\n 1)Visoki standard \n 2)Srednji viši standard \n 3)Srednji niži standard\n 4)Nizak standard\n";
	while (standard_potrošnje < 1 || standard_potrošnje > 4) {
		cin >> standard_potrošnje;
	}
	*/


