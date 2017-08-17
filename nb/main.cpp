#include <iostream> // required to perform C++ stream I/O

using namespace std; // for accessing C++ Standard Library members

// function main begins program execution

int main () {
    
    int num ;
    int rem ;
    
    cout << " Input a five-digit number : ";
    cin >> num;;
    
    for (int i = 0; i < 5; i++) {
        rem = num %10;
        num = num / 10;
        cout << rem << endl;
    }
    
    return 0; // indicate that program ended successfully
    
} // end function main
