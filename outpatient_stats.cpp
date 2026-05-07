Nicholas Nicoloau - W2047568

Task 1

#include <iostream>
using namespace std;
int main()
{
	int age;
	int count0_19 = 0, count20_39 = 0, count40_69 = 0, count70_89 = 0, count90_109 = 0;

	while (true) {
		cout << "Please enter the age of outpatient's (Type -1 to stop):";
		cin >> age;
		if (age < 0) break;

		if (age >= 0 && age <= 19) count0_19++;
		else if (age >= 20 && age <= 39) count20_39++;
		else if (age >= 40 && age <= 69) count40_69++;
		else if (age >= 70 && age <= 89) count70_89++;
		else if (age >= 90 && age <= 109) count90_109++;
	}

	cout << "0-19 ";
	for (int i = 0; i < count0_19; i++) cout << "!";
	cout << endl;
	cout << "20-39 ";
	for (int i = 0; i < count20_39; i++) cout << "!";
	cout << endl;
	cout << "40-69 ";
	for (int i = 0; i < count40_69; i++) cout << "!";
	cout << endl;
	cout << "70-89 ";
	for (int i = 0; i < count70_89; i++) cout << "!";
	cout << endl;
	cout << "90-109 ";
	for (int i = 0; i < count90_109; i++) cout << "!";
	cout << endl;

	return 0;
}


Task 2 

#include <iostream>
using namespace std;
int main()
{
	int age;
	int count0_19 = 0, count20_39 = 0, count40_69 = 0, count70_89 = 0, count90_109 = 0;
	int highestage = 0, lowestage = 110;
	int totalop = 0;
	int below40 = 0;

	while (true) {
		cout << "Please enter the age of outpatient's (Type -1 to stop):";
		cin >> age;
		if (age < 0) break;

		totalop++;
		if (age < 40) below40++;
		if (age < lowestage) lowestage = age;
		if (age > highestage) highestage = age;

		if (age >= 0 && age <= 19) count0_19++;
		else if (age >= 20 && age <= 39) count20_39++;
		else if (age >= 40 && age <= 69) count40_69++;
		else if (age >= 70 && age <= 89) count70_89++;
		else if (age >= 90 && age <= 109) count90_109++;
	}

	cout << "0-19 ";
	for (int i = 0; i < count0_19; i++) cout << "!";
	cout << endl;
	cout << "20-39 ";
	for (int i = 0; i < count20_39; i++) cout << "!";
	cout << endl;
	cout << "40-69 ";
	for (int i = 0; i < count40_69; i++) cout << "!";
	cout << endl;
	cout << "70-89 ";
	for (int i = 0; i < count70_89; i++) cout << "!";
	cout << endl;
	cout << "90-109 ";
	for (int i = 0; i < count90_109; i++) cout << "!";
	cout << endl;


	cout << "Oldest age of patients' is: " << highestage << endl;
	cout << "Youngest age of patients' is: " << lowestage << endl;
	cout << "Total number of outpatients: " << totalop << endl;
	cout << "Total number below the age of 40: " << below40 << endl;

	return 0;
}


Task 3

#include <iostream>
using namespace std;

int main() {
    int age;
    int count0_19 = 0, count20_39 = 0, count40_69 = 0, count70_89 = 0, count90_109 = 0;

    while (true) {
        cout << "Please enter the age of outpatient's (Type -1 to stop):";
        cin >> age;
        if (age < 0) break;

        if (age >= 0 && age <= 19) count0_19++;
        else if (age >= 20 && age <= 39) count20_39++;
        else if (age >= 40 && age <= 69) count40_69++;
        else if (age >= 70 && age <= 89) count70_89++;
        else if (age >= 90 && age <= 109) count90_109++;
    }

    
    int maxCount = count0_19;
    if (count20_39 > maxCount) maxCount = count20_39;
    if (count40_69 > maxCount) maxCount = count40_69;
    if (count70_89 > maxCount) maxCount = count70_89;
    if (count90_109 > maxCount) maxCount = count90_109;

    
    cout << " 0-19   20-39   40-69   70-89  90-109\n";

    
    for (int i = maxCount; i > 0; i--) {
        if (count0_19 >= i) cout << "  !    "; else cout << "       ";
        if (count20_39 >= i) cout << "   !    "; else cout << "        ";
        if (count40_69 >= i) cout << "   !    "; else cout << "        ";
        if (count70_89 >= i) cout << "   !    "; else cout << "        ";
        if (count90_109 >= i) cout << "   !    "; else cout << "        ";
        cout << endl;
    }

    return 0;
}