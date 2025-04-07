// What will be the output of the following program?

#include <iostream>
using namespace std;

int main() {
    int x = 0;
    while (x < 10) {
        cout<< x <<endl;
        x++;
    }
    cin.get();
}

//the output of this program will be 0, 1, 2, 3, 4, 5, 6, 7, 8, 9.
//this is a loop that we are being tested on while loops and for loops.


// 🔍 Explanation:
// #include <iostream>

// This is a preprocessor directive that includes the standard input-output stream library so that we can use cout and cin.

// using namespace std;

// This allows us to use standard library names like cout, cin, and endl without prefixing them with std::.

// int main()

// This is the main function where the execution of the program begins.

// int x = 0;

// A variable x of type int is declared and initialized to 0.

// while (x < 10)

// A while loop is used to repeat a block of code as long as x is less than 10.

// cout << x << endl;

// This prints the current value of x, followed by a newline (because of endl).

// x++;

// Increments the value of x by 1 after printing.

// cin.get();

// Waits for the user to press Enter before ending the program. This is often used to pause the console window.
