#include <iostream>
#include <array>
#include <cstring>
#include <string>
using namespace std;

int main() {
    // Problem No.1
    // int min, max, sum;
    // cout << "Please enter the min number: ";
    // cin >> min;
    // cout << "Please enter the max number: ";
    // cin >> max;
    // for (int i = min; i<=max; ++i) {
    //     sum += i;
    // }
    // cout << "the sum of " << min << " to " << max << " is: " << sum;

    // Problem No.2
    // array<long double, 101> factorials;
    // factorials[0] = factorials[1] = 1LL;
    // for (int i = 2; i<101; ++i) {
    //     factorials[i] = factorials[i-1] * i;
    // }
    // cout << "100! = " << factorials[100] << endl;

    // Problem No.3
    // int ch;
    // int count = 0;
    // cout << "Enter numbers, 0 to quit." << endl;
    // cin >> ch;
    // while (ch != 0) {
    //     count += ch;
    //     cin >> ch;
    // }
    // cout << "The sum of your entered number is: " << count << endl;

    // Problem No.4
    // int daphne = 100;
    // double cleo = 100.0;
    // int count = 0;
    // while (daphne >= cleo)
    // {
    //     daphne += 10;
    //     cleo *= 1.05;
    //     count++;
    // }
    // cout << count << " years later." << endl;
    // cout << "Daphne: " << daphne << endl;
    // cout << "Cleo: " << cleo << endl;

    // Problem No.5
    // array<string, 12> month = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    // array<int, 12> sold;
    // int all = 0;
    // cout << "Please enter the sold numbers: ";
    // for (int i = 0; i<12; ++i) {
    //     cin >> sold[i];
    // }
    // for (int j = 0; j<12; ++j) {
    //     cout << month[j] << ": " << sold[j] << endl;
    //     all += sold[j];
    // }
    // cout << "All: " << all << endl;

    // Problem No.6
    // array<string, 12> month = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    // int sold[3][12];
    // int all = 0;
    // string first2third[3] = {"First", "Second", "Third"};
    // cout << "Please enter the sold numbers: ";
    // for (int i = 0; i<3; ++i) {
    //     for (int j = 0; j<12; ++j) {
    //         cin >> sold[i][j];
    //     }
    // }
    // for (int m = 0; m<3; ++m) {
    //     cout << "The " << first2third[m] << " year" << endl;
    //     for (int k = 0; k<12; ++k) {
    //         cout << month[k] << ": " << sold[m][k] << endl;
    //         all += sold[m][k];
    //     }
    //     cout << endl;
    // }
    // cout << "All: " << all << endl;

    // Problem No.7
    // struct Car {
    //     string make;
    //     int year;
    // };
    // int i;
    // cout << "How many cars do you wish to catalog: ";
    // cin >> i;
    // Car car[i];
    // for (int j = 0; j<i; ++j) {
    //     cout << "Car #" << j+1 << ": " << endl;
    //     cout << "Please enter the make: ";
    //     cin >> car[j].make;
    //     cin.get();
    //     cout << "Please enter the made: ";
    //     cin >> car[j].year;
    //     cin.get();
    // }
    // cout << "Here is your collection: " << endl;
    // for (int j = 0; j<i; ++j) {
    //     cout << car[j].year << " " << car[j].make << endl;
    // }

    // Problem No.8
    // char ch[10];
    // int count = 0;
    // cout << "Enter words (to stop, enter the word done): " << endl;
    // cin >> ch;
    // while (strcmp(ch, "done") != 0) {
    //     ++count;
    //     cin >> ch;
    // }
    // cout << "You enter total of " << count << " words." << endl;

    // Problem No.9
    // string ch;
    // int count = 0;
    // cout << "Enter words (to stop, enter the word done): " << endl;
    // cin >> ch;
    // while (ch != "done") {
    //     ++count;
    //     cin >> ch;
    // }
    // cout << "You enter total of " << count << " words." << endl;

    // Problem No.10
    // int raw;
    // cout << "Enter a number of raws: ";
    // cin >> raw;
    // for (int i=1; i<=raw; ++i) {
    //     for (int j=0; j<raw-i; ++j) {
    //         cout << ".";
    //     }
    //     for (int k=0; k<i; ++k) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    return 0;
}