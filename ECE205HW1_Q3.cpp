/*Q3 monthly payment plan */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double balance = 1000.0;
    const double interest_rate = 0.015;
    const double mandatory_monthly_payment = 50.0;
    double interest = 0.0;
    double interest_total = 0.0;
    double total_paid = 0.0;
    double principle = 0.0;
    int month = 0;

    cout << "Initial loan amount: $" << balance << endl;
    cout << "Monthly payment:     $" << mandatory_monthly_payment << endl << endl;

    cout << right << setw(8) << "Month #" << setw(12) << "Interest" << setw(12) << "Principal" << setw(10) << "Balance" << setw(16) << "Total Interest" << setw(14) << "Total Paid" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;

    while (balance > 0)
    {
        month++;
        interest = balance * interest_rate;
        
        double Currnet_months_payment;

        if (mandatory_monthly_payment >= balance + interest)
            Currnet_months_payment = balance + interest;
        else
            Currnet_months_payment = mandatory_monthly_payment;

        principle = Currnet_months_payment - interest;
        total_paid += Currnet_months_payment;
        balance = balance + interest - Currnet_months_payment;
        interest_total += interest;

        cout << right << setw(7) << fixed << setprecision(0) << month;

        if (interest >= 10)
            cout << right << setw(6) << "$" << setw(4) << setprecision(2) << interest;
        else
            cout << right << setw(7) << "$" << setw(3) << setprecision(2) << interest;

        if (principle >= 10)
            cout << right << setw(6) << "$" << setw(4) << setprecision(2) << principle;
        else
            cout << right << setw(7) << "$" << setw(3) << setprecision(2) << principle;

        if (balance >= 10)
            cout << right << setw(6) << "$" << setw(4) << setprecision(2) << balance;
        else
            cout << right << setw(7) << "$" << setw(3) << setprecision(2) << balance;

        if (interest_total >= 10)
            cout << right << setw(6) << "$" << setw(4) << setprecision(2) << interest_total;
        else
            cout << right << setw(7) << "$" << setw(3) << setprecision(2) << interest_total;

        if (total_paid >= 10)
            cout << right << setw(10) << "$" << setw(4) << setprecision(2) << total_paid;
        else
            cout << right << setw(11) << "$" << setw(3) << setprecision(2) << total_paid;
        cout << endl;
    }
    return 0;
}
