#include <iostream>
#include <Windows.h>
#include <conio.h> // ��� ������� _getch()
#include "../MODULESbERLIN/BERLIN_LIB.H"
using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    int workedDays;
    cout << "������ ������� ������������� ��� �� ���� ��� ����: ";
    cin >> workedDays;
    calculateSalary(workedDays);

    convertSockSize();

    unsigned int N;
    cout << "������ ���������� ����� �� 0 �� 7483650:\n";
    cin >> N;

    int count = countBinaryDigit(N);
    cout << "ʳ������ �������� " << (count == 0 ? "����" : "�������") << " � ���� " << N << ": " << count << endl;

    return 0;

}



