// With  an example  demonstrate  how the new and delete keywords are used with pointers in dynamic memory  allocation

//first of, this two delete and new are used to dynamically allocate and deallocate memory during runtime,
//when one is unsure of the size of data you'll need at compile time.

//new - allocates memory on the heap and returns a pointer to it.
//delete - frees that memory to prevent memory leaks.


//example using new and delete with pointers
#include <iostream>
using namespace std;

int main() {
    //dynamically allocate memory for an integer
    int *ptr = new int;

    //assign a value to the dynamically allocted memory
    *ptr = 42;

    //output the value
    cout << "Value stored at ptr: " << *ptr << endl;

    //free the dynamically allocted memory
    delete ptr;

    //avoid dangling pointer - pointer pointing to freed memory
    ptr = nullptr;
    
    return 0;
}