//Made by Toni Pajukanta,Ryhmä IIO14S1
#include <iostream>
using namespace std;

int main()
{
	int raha;
	int hinta;
	cout << "Anna rahamaara lompakossa ja lihapiirakan hinta" << endl;
	cin >> raha >> hinta;
	if (raha - hinta >= 0)
	{
		cout << "Jaljelle jai lompakkoon " << raha - hinta << " euroa." << endl;

	}
	else
		cout << "Aloita paastoamaan, ei ole rahaa tarpeeksi" << endl;



}