
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

// Rewrite  the  above program using the  for control  construct 

#include <iostream>
using namespace std;

int main() {

 for (int x = 0; x < 10; x++) {
    cout << x << endl;
 }
 cin.get();
}