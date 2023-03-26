#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

class TBook {
public:
	string Name;
	string Author;
	int Count;
};

int main() {
	setlocale(LC_ALL, "ru");
	const int s = 3;
	TBook books[s];
	ifstream fin;
	fin.open("book.txt");
	if (fin.is_open()) {
		for (int i = 0; i < s; i++) {
			string temp;
			getline(fin, books[i].Name);
			getline(fin, books[i].Author);
			getline(fin, temp);
			books[i].Count = stoi(temp);
		}
		fin.close();
	}
	else return 1;

	string name;
	cout << "������� �������� �����: ";
	getline(cin, name);
	bool Thereis = false;
	for (int i = 0; i < s; i++) {
		if (books[i].Name == name) {
			cout << "Name: " << books[i].Name << endl;
			cout << "Author: " << books[i].Author << endl;
			cout << "Count: " << books[i].Count << endl;
			Thereis = true;
			break;
		}
	}
	if (!Thereis) {
		cout << "��������,����� ����� � ��� ���!" << endl;
	}

	string author;
	cout << "������� ��� ������: ";
	cin >> author;
	Thereis = false;
	for (int i = 0; i < s; i++) {
		if (books[i].Author == author) {
			cout << "Name: " << books[i].Name << endl;
			cout << "Author: " << books[i].Author << endl;
			cout << "Count: " << books[i].Count << endl;
			Thereis = true;
			break;
		}
	}
	if (!Thereis) {
		cout << "��������,������ ������ � ��� ���!" << endl;
	}

	int count;
	cout << "������� ���-�� ����: ";
	cin >> count;
	Thereis = false;
	for (int i = 0; i < s; i++) {
		if (books[i].Count == count) {
			cout << "Name: " << books[i].Name << endl;
			cout << "Author: " << books[i].Author << endl;
			cout << "Count: " << books[i].Count << endl;
			Thereis = true;
			break;
		}
	}
	if (!Thereis) {
		cout << "��������,������ ���-�� ���� � ��� ���!" << endl;
	}

	return 0;
}
