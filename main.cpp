#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;

struct duom {
	string name;
	string surname;
	int n;
	float vv=0;
	int egz;
};

int main()
{
	duom E; duom Em[5];
	vector <duom> Ev;

	cout << "Please enter name: ";
	cin >> E.name;

	cout << "Please enter surname: ";
	cin >> E.surname;

	cout << "Please enter the number of homeworks: ";
	cin >> E.n;

	if (E.n<1)
	{
		cout << "the number is incorrect";
		return 0;
	}


	for(int i = 0; i < E.n; i++) {
		int r;
		cout << "Please enter grade of "<< i+1 <<" homework: ";
		cin >> r;
		if (10 < r < 0)
		{
			cout << "the number is incorrect";
			return 0;
		}
		E.vv = E.vv + (float)r;
	}
	cout << "Please enter the grade of exam: ";
	cin >> E.egz;
	float vidd = E.vv / E.n;

	float gg = vidd * 0.4 + E.egz * 0.6;
	cout << "Vardas		" << "Pavarde		" << "Galutinis (Vid.)" << std ::endl;
	cout << "---------------------------------------------" << std :: endl;
	cout << E.name <<"		"<< E.surname << "		 " << gg << " " ;


	return 0;
}
