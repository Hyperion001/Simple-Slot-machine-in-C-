#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    char symbols[] = {'$', '#', '@', '&', '*', '+', '-', '%', '!'};
  
 srand(time(0));

    char line1 = symbols[rand() % 9];
    char line2 = symbols[rand() % 9];
    char line3 = symbols[rand() % 9];

    cout << "Line 1: " << line1 << endl;
    cout << "Line 2: " << line2 << endl;
    cout << "Line 3: " << line3 << endl;

    if (line1 == line2 && line2 == line3) {
        cout << "Congratulations! You won!" << endl;
    } else {
        cout << "Sorry, you didn't win this time." << endl;
    }

    return 0;
}
