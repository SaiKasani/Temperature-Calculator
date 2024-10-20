# Temperature-Calculator

This repository contains a C++ program for converting temperatures between Fahrenheit and Celsius. The program offers both standard output for a range of temperatures and user-specific conversions.

Features
Standard Output: Displays a table of Fahrenheit to Celsius conversions over a specified range.
User Input: Allows users to convert temperatures from Fahrenheit to Celsius or vice versa.
Error Handling: Provides feedback for invalid inputs.
Requirements
C++11 or later
A C++ compiler (e.g., g++, clang++)
How to Run
Clone this repository to your local machine:

bash
Copy code
git clone https://github.com/yourusername/temperature-calculator.git
cd temperature-calculator
Compile the code:

bash
Copy code
g++ -o temperature_calculator temperature_calculator.cpp
Run the executable:

bash
Copy code
./temperature_calculator
Usage
When prompted, enter 0 to display standard temperature conversions.
Enter X to convert a specific temperature.
Follow the on-screen instructions to input temperature values.
Example Output
mathematica
Copy code
[+] Enter Order value: 10
[+] Enter Lower Value: 0
[+] Enter Upper Value: 100

                  --- Temperature ---

                   +----------------------------+
                   | Fahrenheit       Celsius   |
                   +--------------|-------------+
                   |     0        -17          |
                   |     10       -12          |
                   |     20       -6           |
                   ...
