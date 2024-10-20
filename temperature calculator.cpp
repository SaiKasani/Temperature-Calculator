#include <iomanip>
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

void standard_output()
{
    int fahr;
    int order;
    int celsius;
    int lower_value;
    int upper_value;

    cout << '\n';
    cout << "[+] Enter Order value: ";
    cin >> order;

    cout << '\n';
    cout << "[+] Enter Lower Value: ";
    cin >> lower_value;

    cout << '\n';
    cout << "[+] Enter Upper Value: ";
    cin >> upper_value;

    fahr = lower_value;

    cout << '\n';
    cout << "\t\t\t\t\t         ";
    cout << "--- Temperature ---" << '\n';

    cout << '\n';
    cout << "\t\t\t\t\t    "
         << "+----------------------------+" << '\n'
         << "\t\t\t\t\t    "
         << "| Fahrenheit       Celsius   |" << '\n'
         << "\t\t\t\t\t    "
         << "+--------------|-------------+";

    while (fahr <= upper_value)
    {
        celsius = 5 * (fahr - 32) / 9;

        cout << '\n';
        cout << "\t\t\t\t\t    ";
        cout << "|     " << fahr << "\t\t " << celsius << "     |";
        cout << '\n';
        cout << "\t\t\t\t\t    ";
        cout << "+--------------|-------------+";

        fahr += order;
    }
}

void user_specific_output()
{
    string option;
    float fahr_input;
    float fahr_value;
    float celsius_input;
    float celsius_value;

    cout << "\t\t\t\t\t       "
         << "--- Available Options ---" << '\n';
    cout << "\t\t\t     "
         << '\n'
         << "\t\t\t     "
         << "+-----------------------------------------------------------+" << '\n'
         << "\t\t\t     "
         << "| Press F to convert temperature from Fahrenheit to Celsius |" << '\n'
         << "\t\t\t     "
         << "| --------------------------------------------------------- |" << '\n'
         << "\t\t\t     "
         << "| Press C to convert temperature from Celsius to Fahrenheit |" << '\n'
         << "\t\t\t     "
         << "+-----------------------------------------------------------+";

    cout << "\n\n";
    cout << "[:] Enter Option: ";
    cin >> option;

    if (option == "C" || option == "c")
    {
        cout << '\n';
        cout << "[+] Enter Temperature in Celsius: ";
        cin >> celsius_input;

        fahr_value = (9.0 / 5.0) * celsius_input + 32;

        cout << '\n';
        cout << "\t\t\t\t\t            ";
        cout << "--- Result ---" << '\n';
        cout << '\n';
        cout << "\t\t\t\t\t    "
             << "+----------------------------+" << '\n'
             << "\t\t\t\t\t    "
             << "|   Celsius       Fahrenheit |" << '\n'
             << "\t\t\t\t\t    "
             << "+--------------|-------------+";

        cout << '\n';
        cout << "\t\t\t\t\t    ";
        cout << "|     " << celsius_input << "\t   |      " << setprecision(3) << fahr_value << "\t |";
        cout << '\n';
        cout << "\t\t\t\t\t    ";
        cout << "+----------------------------+";
    }
    else if (option == "F" || option == "f")
    {
        cout << '\n';
        cout << "[+] Enter Temperature in Fahrenheit: ";
        cin >> fahr_input;

        celsius_value = 5 * (fahr_input - 32) / 9;

        cout << '\n';
        cout << "\t\t\t\t\t            ";
        cout << "--- Result ---" << '\n';
        cout << '\n';
        cout << "\t\t\t\t\t    "
             << "+----------------------------+" << '\n'
             << "\t\t\t\t\t    "
             << "|  Fahrenheit       Celsius  |" << '\n'
             << "\t\t\t\t\t    "
             << "+--------------|-------------+";

        cout << '\n';
        cout << "\t\t\t\t\t    ";
        cout << "|     " << fahr_input << "\t   |    " << setprecision(3) << celsius_value << "\t |";
        cout << '\n';
        cout << "\t\t\t\t\t    ";
        cout << "+----------------------------+";
    }
    else
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        cout << "\n[:] #Msg: Error --1" << '\n';
        cout << "[:} Fault: Invalid option Input!" << '\n';
    }
}

int main()
{
    string user_input;

    cout << "\t\t\t\t\t    ";
    cout << "--- TEMPERATURE CALCULATOR ---";
    cout << "\n\n";
    cout << "\n\t\tDeveloped By:";
    cout << " Easter Maxwell (Oct 11, 2022)";
    cout << "\n\t\t In Collaboration with:";
    cout << " Nemonet (TYP) (Nov 16, 2022)";
    cout << "\n\n\n\n";

    cout << "\t\t\t\t\t"
         << "+------------------------------------+" << '\n'
         << "\t\t\t\t\t"
         << "| Press 0 to display standard input |" << '\n'
         << "\t\t\t\t\t"
         << "| ---------------------------------- |" << '\n'
         << "\t\t\t\t\t"
         << "| Press X to display specific output |" << '\n'
         << "\t\t\t\t\t"
         << "+------------------------------------+" << "\n\n";

    cout << "[:] Enter option: ";
    cin >> user_input;

    if (user_input == "0" || user_input == "o" || user_input == "O")
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        standard_output();
    }
    else if (user_input == "X" || user_input == "x" || user_input == "*")
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        user_specific_output();
    }
    else
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        cout << "\n[:] #Msg: Error --1" << '\n';
        cout << "[:} Fault: Invalid option Input!" << '\n';
    }

    return 0;
}
