#include <iostream>
#include <fstream>

using namespace std;

/*
������� 3:
��� ��������� ����. � ������� ����������� ������.
����� ������ ���� �����, � ������� ����������� ������ ���������.
*/

int main()
{
    short lineNum = 0;
    short SubstrPos;
    string Substr, Str;
    ifstream fin;
    fin.open("Input.txt");
    cout << "Enter substring: ";
    cin >> Substr;
    while (!fin.eof()) {
        lineNum++;
        getline(fin, Str);
        SubstrPos = Str.find(Substr);
        if (SubstrPos != -1) {cout << lineNum << endl;}
    }
    fin.close();
    return 0;
}
