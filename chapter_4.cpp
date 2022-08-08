#include <iostream>
#include <string>
#include <cstring>
#include <array>
using namespace std;

int main() {
    // Problem No.1
    // char last_name[20];
    // char first_name[20];
    // char grade;
    // int age;
    // cout << "What is your first name? ";
    // cin.getline(first_name, 20);
    // cout << "What is your last name? ";
    // cin.getline(last_name, 20);
    // cout << "What letter grade do you deserve? ";
    // cin >> grade;
    // cout << "What is your age? ";
    // cin >> age;
    // cout << "Name: " << last_name << ", " << first_name << endl;
    // cout << "Grade: " << (char)(grade+1) << endl;
    // cout << "Age: " << age << endl;

    // Problem No.2
    // string name, dessert;
    // cout << "Enter your name:\n";
    // getline(cin, name);
    // cout << "Enter your favorite dessert:\n";
    // getline(cin, dessert);
    // cout << "I have some delicious " << dessert;
    // cout << " for you " << name << ".\n";

    // Problem No.3
    // char name[40], first_name[20], last_name[20];
    // strcpy(name, "");
    // cout << "Enter your first name: ";
    // cin.getline(first_name, 20);
    // cout << "Enter your last name: ";
    // cin.getline(last_name, 20);
    // strcat(name, last_name);
    // strcat(name, ", ");
    // strcat(name, first_name);
    // cout << "Here's the information in a single string: " << name << endl;

    // Problem No.4
    // string first_name, last_name, name;
    // cout << "Enter your first name: ";
    // getline(cin, first_name);
    // cout << "Enter your last name: ";
    // getline(cin, last_name);
    // name = last_name + ", " + first_name;
    // cout << "Here's the information in a single string: " << name << endl;

    // Problem No.5
    // struct CandyBar {
    //     char brand[20];
    //     double weight;
    //     int Calorie;
    // };
    // CandyBar snack = {
    //     "Mocha Munch",
    //     2.3,
    //     350
    // };
    // cout << "The snack's name is " << snack.brand << ", and the weight is " << snack.weight << ", and the calorie is " << snack.Calorie;

    // Problem No.6
    // struct CandyBar {
    //     char brand[20];
    //     double weight;
    //     int Calorie;
    // };
    // CandyBar new_snack[3] ={
    //     {"chocolate", 5.3, 160},
    //     {"chewing gum", 1.2, 100},
    //     {"beef", 9.6, 800}
    // };
    // cout << new_snack[0].brand << ": "<< new_snack[0].weight << ", " << new_snack[0].Calorie << endl;
    // cout << new_snack[1].brand << ": "<< new_snack[1].weight << ", " << new_snack[1].Calorie << endl;
    // cout << new_snack[2].brand << ": "<< new_snack[2].weight << ", " << new_snack[2].Calorie << endl;

    // Problem No.7
    // struct pizza
    // {
    //     char company[20];
    //     double diameter;
    //     double weight;
    // };
    // pizza pizza_1;
    // cout << "Please enter the company's name: ";
    // cin.getline(pizza_1.company, 20);
    // cout << "Please enter the pizza's diameter: ";
    // cin >> pizza_1.diameter;
    // cout << "please enter the pizza's weight: ";
    // cin >> pizza_1.weight;
    // cout << pizza_1.company << ": " << pizza_1.diameter << ", " << pizza_1.weight;

    // Problem No.8
    // struct pizza
    // {
    //     char company[20];
    //     double diameter;
    //     double weight;
    // };
    // pizza *pizza_2 = new pizza;
    // cout << "Please enter the pizza's diameter: ";
    // cin >> (*pizza_2).diameter;
    // cin.get();
    // cout << "Please enter the company's name: ";
    // cin.getline((*pizza_2).company, 20);
    // cout << "please enter the pizza's weight: ";
    // cin >> (*pizza_2).weight;
    // cout << (*pizza_2).company << ": " << (*pizza_2).diameter << ", " << (*pizza_2).weight;
    // delete pizza_2;

    // Problem No.9
    // struct CandyBar {
    //     char brand[20];
    //     double weight;
    //     int Calorie;
    // };
    // CandyBar *snack_1 = new CandyBar;
    // strcpy((*snack_1).brand, "amazing brand");
    // (*snack_1).weight = 114514;
    // (*snack_1).Calorie = 514114;
    // cout << (*snack_1).brand << ": " << (*snack_1).weight << ", " << (*snack_1).Calorie;
    // delete snack_1;

    // Problem No.10
    // array<double, 4> run;
    // cout << "Please enter your 50m grade: " << endl;
    // cout << "First: ";
    // cin >> run[0];
    // cout << "Second: ";
    // cin >> run[1];
    // cout << "Third: ";
    // cin >> run[2];
    // run[3] = (run[0] + run[1] + run[2]) / 2;
    // cout << "Your finnal grade: " << run[3];

    return 0;
}