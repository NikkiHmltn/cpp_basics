// This is a comment, same as JS
// programs start with main()

// Putting this at the top allows the program to get input and put output
#include <iostream>
using namespace std;

// program execution begins
// int main() {
//     // first you create the variable 
//     int wage;
//     // then you can assign a value to it
//     wage = 20;
//     // cout statements output various values
//     cout << "Salary is ";
//     cout << wage * 40 * 52
//     // endl moves the output cursor to the next line on the screen
//     cout << endl;
//     // return 0 ends the program with 0 telling the OS the program ended without error
//     return 0
// }
// expected output is: Salary is 41600 (with the cursor on the next line)


// int main() {
//     int wage;
//     // could be nice to ask the user what you expect from them!
//     cout << "Enter your wage as a number here: ";
//     cout << endl;
//     // cin "inputs" a user's typed value(s) and stores it as the variable "wage"
//     cin >> wage;

    // "cout" = "characters out", which is outputting text to the console
//     cout << "Salary is ";
//     cout << wage * 40 * 52;
//     cout << endl;

//     return 0;
// }

// int main() {

//     int wage;
//     wage = 20;
//     // super cool trick for a sort of 'string interpolation' in C++
//     cout << "Wage is: " << wage << endl;
//     cout << "Goodbye."<< endl;

//     return 0;
// }

// int main() {
//    int stop;
//    int result;
//    int a;
//    int b;

//    cin >> stop;
//    result = 0;

//    for (a = 0; a < 3; ++a) {
//       cout << a << ": ";
//       for (b = 0; b < 2; ++b) {
//          result += a + b;
//          if (result > stop) {
//             cout << "_ ";
//             continue;
//          }
//          cout << result << ",";
//       }
//       cout << endl;
//    }

//    return 0;
// }