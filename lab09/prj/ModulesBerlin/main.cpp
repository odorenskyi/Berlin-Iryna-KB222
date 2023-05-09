#include <iostream>
#include <Windows.h>
#include <conio.h> // для функції _getch()

using namespace std;

void calculateSalary(int workedDays) {
    SetConsoleOutputCP(1251);

    const int workHoursPerDay = 8;
    const double hourlyWage = 450.0;
    const double incomeTaxRate = 0.15;
    const double pensionFundRate = 0.02;
    const double socialInsuranceRate = 0.006;
    const double tempDisabilityInsuranceRate = 0.01;

    double grossSalary = hourlyWage * workHoursPerDay * workedDays / 2;
    double incomeTax = grossSalary * incomeTaxRate;
    double pensionFund = grossSalary * pensionFundRate;
    double socialInsurance = grossSalary * socialInsuranceRate;
    double tempDisabilityInsurance = grossSalary * tempDisabilityInsuranceRate;
    double netSalary = grossSalary - incomeTax - pensionFund - socialInsurance - tempDisabilityInsurance;

    cout << "Нарахована сума зарплатні працівника: " << grossSalary << " грн." << endl;
    cout << "Розмір вирахованих податків: " << incomeTax + pensionFund + socialInsurance + tempDisabilityInsurance << " грн." << endl;
    cout << "Сума до виплати: " << netSalary << " грн." << endl;
}

void convertSockSize(){

    int ukr_size;
    cout << "Введіть розмір шкарпеток за українькою системою: ";
    cin >> ukr_size;

    switch(ukr_size){
    case 23:
        cout << "Розмір шкарпетоку системі США: 8\n";
        cout << "Розмір шкарпетоку системі ЄС: 37/38";
        break;
    case 25:
        cout << "Розмір шкарпетоку системі США: 9\n";
        cout << "Розмір шкарпетоку системі ЄС: 39/40";
        break;
    case 27:
        cout << "Розмір шкарпетоку системі США: 10\n";
        cout << "Розмір шкарпетоку системі ЄС: 41/42";
        break;
    case 29:
        cout << "Розмір шкарпетоку системі США: 11\n";
        cout << "Розмір шкарпетоку системі ЄС: 43/44";
        break;
    case 31:
        cout << "Розмір шкарпетоку системі США: 12\n";
        cout << "Розмір шкарпетоку системі ЄС: 45/46";
        break;
    default:
        cout << "Неправильний розмір шкарпеток\n";
        break;
    }
}
int countBinaryDigit(unsigned int N) {

    int count = 0;
    int bit = N & 1; // отримуємо значення біту D_0

    for (unsigned int i = N; i > 0; i = i >> 1) {
        if ((i & 1) == bit) {
            count++;
        }
    }

    return count;
}
int main() {
    char choice;

    do {
        cout << "Enter 'V' to call calculation()\n";
        cout << "Enter 'n' to call calculateSalary()\n";
        cout << "Enter 'm' to call convertSockSize()\n";
        cout << "Enter 'q' to call countBinaryDigit()\n";
        cout << "Enter 'w' to exit\n";

        choice = _getch(); // отримання введеного символу без очікування рядка введення

        cout << endl; // перехід на новий рядок

        switch (choice) {
            case 'V':
                calculation();
                break;
            case 'n':
                void calculateSalary(int workedDays);
                break;
            case 'm':
                convertSockSize();
                break;
            case 'q':
                int countBinaryDigit(unsigned int N);
                break;
            case 'w':
            case 'W':
                return 0;
            default:
                cout << "\aInvalid input!\n"; // відтворення звукового сигналу про помилку
                break;
        }
    } while (true);
    }
