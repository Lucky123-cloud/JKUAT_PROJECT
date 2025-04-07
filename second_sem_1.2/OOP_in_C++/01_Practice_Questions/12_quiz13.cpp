#include <iostream>
using namespace std;

class Vector {
public:
    double x;
    double y;

    double surface() {
        double s;
        s = x * y;
        if (s < 0) s = -s;
        return s;
    }
};

int main() {
    Vector a;
    a.x = 3;
    a.y = 4;
    cout << "The surface of a: " << a.surface() << endl;
    return 0;
}


// The surface of a: 12 - this is the answer.