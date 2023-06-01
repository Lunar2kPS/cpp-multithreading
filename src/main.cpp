#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::getline;

int main() {
    cout << "Hello world!" << endl;
    
    string input;
    getline(cin, input);

    cout << "You entered: " << input << endl;
}
