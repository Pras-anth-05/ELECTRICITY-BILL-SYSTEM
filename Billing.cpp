#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int consumerNo, units;
    float bill = 0;

    cout << "===== ELECTRICITY BILL SYSTEM =====" << endl;

    cout << "Enter Consumer Name: ";
    cin >> name;

    cout << "Enter Consumer Number: ";
    cin >> consumerNo;

    cout << "Enter Units Consumed: ";
    cin >> units;

    if(units <= 100)
        bill = units * 1.5;
    else if(units <= 200)
        bill = (100 * 1.5) + (units - 100) * 2.5;
    else if(units <= 300)
        bill = (100 * 1.5) + (100 * 2.5) + (units - 200) * 4;
    else
        bill = (100 * 1.5) + (100 * 2.5) + (100 * 4) + (units - 300) * 6;

    cout << "\n===== BILL RECEIPT =====" << endl;
    cout << "Consumer Name   : " << name << endl;
    cout << "Consumer Number : " << consumerNo << endl;
    cout << "Units Consumed  : " << units << endl;
    cout << "Bill Amount     : Rs." << bill << endl;

    if(bill > 1000)
        cout << "Status          : High Consumption" << endl;
    else
        cout << "Status          : Normal Consumption" << endl;

    cout << "\nThank You!" << endl;

    return 0;
}
