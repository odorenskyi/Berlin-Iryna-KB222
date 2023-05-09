#include <iostream>
#include <Windows.h>
#include <conio.h> // для функції _getch()
#include "../MODULESbERLIN/BERLIN_LIB.H"
using namespace std;

int main() {
    SetConsoleOutputCP(1251);

    int workedDays;
    cout << "Введіть кількість відпрацьованих днів за звітні два тижні: ";
    cin >> workedDays;
    calculateSalary(workedDays);

    convertSockSize();

    unsigned int N;
    cout << "Введіть натуральне число від 0 до 7483650:\n";
    cin >> N;

    int count = countBinaryDigit(N);
    cout << "Кількість двійкових " << (count == 0 ? "нулів" : "одиниць") << " у числі " << N << ": " << count << endl;

    return 0;

}



