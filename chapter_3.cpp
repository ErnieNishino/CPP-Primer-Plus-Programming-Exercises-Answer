#include <iostream>

int main() {
    using namespace std;

    // Problem No.1
    // const int transfer = 100;
    // int cm, ans_m, ans_cm;
    // cout << "Please input your stature with cm" << endl;
    // cin >> cm;
    // ans_cm = cm%transfer;
    // ans_m = cm/transfer;
    // cout << ans_m << "." << ans_cm << endl;

    // Problem No.2
    // double height, weight;
    // double bmi;
    // cout << "Please enter your height(inch)" << endl;
    // cin >> height;
    // height *= 0.0254;
    // cout << "Please enter your weight(pound)" << endl;
    // cin >> weight;
    // weight *= 2.2;
    // bmi = weight / (height * height);
    // cout << "Your BMI is " << bmi << endl;

    // Problem No.3
    // const double transfer = 60.0;
    // int degree, minutes, seconds;
    // double ans;
    // cout << "Enter a latitude in degree, minutes and seconds" << endl;
    // cout << "First, enter the degree" << endl;
    // cin >> degree;
    // cout << "Next, enter the minutes of arc" << endl;
    // cin >> minutes;
    // cout << "Finally, enter the seconds of arc" << endl;
    // cin >> seconds;
    // ans = degree + minutes/transfer + seconds/transfer/transfer;
    // cout << degree << " degrees" << minutes << " minutes" << seconds << " seconds = " << ans << " degrees";

    // Problem No.4
    // long long second;
    // cout << "Enter the number of seconds: " << endl;
    // cin >> second;
    // int days, hours, minutes, seconds;
    // days = second/86400;
    // hours = (second-days*86400)/3600;
    // minutes = (second-days*86400-hours*3600)/60;
    // seconds = second-days*86400-hours*3600-minutes*60;
    // cout << second << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " <<  seconds << " seconds.";

    // Problem No.5;
    // long long population_of_world, population_of_us;
    // double ans;
    // cout << "Enter the world's population " << endl;
    // cin >> population_of_world;
    // cout << "Enter the population of us" << endl;
    // cin >> population_of_us;
    // ans = population_of_us*1.0 / population_of_world;
    // cout << "The population of the US is " << ans*100 << "% of the world population";

    // Problem No.6
    // double mile, gallon, m_per_g;
    // cout << "Please enter how many miles you have driven: ";
    // cin >> mile;
    // cout << "And how many gallons of gasoline you have used: ";
    // cin >> gallon;
    // m_per_g = mile / gallon;
    // cout << "The miles per gallon your car is: " << m_per_g;

    // Problem No.7
    // double eu_sty, us_sty;
    // cout << "Please enter an automobile gasoline consumption figure in the European style (liters per 100 kilometers): ";
    // cin >> eu_sty;
    // us_sty = 1926.34 / (8 * eu_sty);
    // cout << "The U.S. style of miles per gallon: " << us_sty;

    return 0;
}