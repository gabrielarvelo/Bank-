// GIT-Labor
// main.h

////////////////////////////////////////////////////////////////////////////////
// Header-Dateien
#include <iostream>		// Header für die Standard-IO-Objekte (z.B. cout, cin)
#include <stdlib.h>
#include <string>
// TODO: Fügen Sie hier weitere benötigte Header-Dateien der
// Standard-Bibliothek ein z.B.
// #include <string>

using namespace std;	// Erspart den scope vor Objekte der
						// C++-Standard-Bibliothek zu schreiben
						// z.B. statt "std::cout" kann man "cout" schreiben

// Inkludieren Sie hier die Header-Files Ihrer Klassen, z.B.
// #include "CFraction.h"

#include "CBank.h"
#include "CCustomers.h"
#include "CAccount.h"

// Hauptprogramm
// Dient als Testrahmen, von hier aus werden die Klassen aufgerufen
int main (void)
{
    // TODO: Fügen Sie ab hier Ihren Programmcode ein
	cout << "test gestarted." << endl << endl;
	//create a bank with his info
	CBank sparkasse(100,3000,400);

	//Create customers
	CCustomers Paul ("Paul Panther");//12
	CCustomers Whoppie ("Whoppie Goldberg");//15
	CCustomers Jonny ("Jonny Depp");//10
	CCustomers Gaby ("Gabriela Arvelo Saenz");//15

	//Adding Customers to the bank
	sparkasse.addClient(&Paul);
	sparkasse.addClient(&Whoppie);
	//sparkasse.addClient(&Jonny);
	sparkasse.addClient(&Gaby);

	//opening bank account
	sparkasse.addAccount(&Jonny, 1500);
	sparkasse.addAccount(&Paul, 400);
	sparkasse.addAccount(&Whoppie, 1800);
	sparkasse.addAccount(&Paul, 700);
	sparkasse.addAccount(&Whoppie, 5000);
	sparkasse.addAccount(&Gaby,5000);
	sparkasse.addAccount(&Gaby,5000);


//Printing full report
	sparkasse.print();

	//Printing just Accounts report
	//sparkasse.printaccounts();


	//Delete an Account
	 sparkasse.deleteAccount(123461);

	//Delete a Customer
	 sparkasse.deleteCustomer(Paul);



	//sparkasse.getpointertoCustomers(Paul);
	//sparkasse.getpointertoCustomers(Whoppie);

	//sparkasse.printaccounts();
	sparkasse.print();


	return 0;
}
