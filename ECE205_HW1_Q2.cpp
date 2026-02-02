/*q2 workers hours*/
#include <iostream>
using namespace std;

double hours_worked;
int number_of_dependents;

int main()
{
    cout << "Enter the number of hours you worked this week: ";
    cin >> hours_worked;
    cout << "Enter the number of dependents from the console: ";
    cin >> number_of_dependents;

    const double Hourly_Rate = 36.75;
    const double Overtime_Mult_rate = 1.5;
    const double SocialSecurity_rate = 0.06;
    const double FederalIncome_rate = 0.15;
    const double StateTax_rate = 0.04;
    const double Bethlehem_rate = 0.01;
    const double Union = 20.0;
    const double Additional_dependents = 40.0;

    double non_overtime;
    double overtime;

    if (hours_worked <= 40.0) 
    {
        non_overtime = hours_worked;
        overtime = 0.0;
    }
    else
    {
        non_overtime = 40.0;
        overtime = hours_worked - 40.0;
    }

    double total_pay;
    total_pay = (non_overtime * Hourly_Rate) + (overtime * Hourly_Rate * Overtime_Mult_rate);

    double Tax_socialsecurity = total_pay * SocialSecurity_rate;
    double Tax_federalincome = total_pay * FederalIncome_rate;
    double Tax_state = total_pay * StateTax_rate;
    double Tax_Bethlehem = total_pay * Bethlehem_rate;

    double dependent_deduction = 0.0;
    if (number_of_dependents >= 2)
    {
        dependent_deduction = Additional_dependents;
    }

    double total_taxes = Tax_socialsecurity + Tax_federalincome + Tax_state + Tax_Bethlehem + Union + dependent_deduction;
    double paycheck = total_pay - total_taxes;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Total Pay: " << total_pay << endl;
    cout << "Social Security: " << Tax_socialsecurity << endl;
    cout << "Federal Income: " << Tax_federalincome << endl;
    cout << "State Tax: " << Tax_state << endl;
    cout << "Bethlehem Local Tax: " << Tax_Bethlehem << endl;
    cout << "Union Dues: " << Union << endl;
    cout << "Additional Dependents: " << dependent_deduction << endl;
    cout << "Net Pay: " << paycheck << endl;

    return 0;

}
