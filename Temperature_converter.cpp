#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    int choice;
    double temperature;

    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        double converted = celsiusToFahrenheit(temperature);
        cout << "Temperature in Fahrenheit: " << converted << "°F" << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        double converted = fahrenheitToCelsius(temperature);
        cout << "Temperature in Celsius: " << converted << "°C" << endl;
    } else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}