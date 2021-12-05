#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
//#include "boost/asio.hpp"

using namespace std;
//using namespace boost::asio;

int random(const int& min, const int& max) {
    return (rand() % (max - min + 1)) + min;
}

void generate(const int& n) {
    srand(time(nullptr));
    int n1 = random(1, 9);
    int n2 = random(1,9);
    while (n1 == n2) n2 = random(1, 9);

    if (n == n1) throw (string) "you win";
    if (n == n2) throw (string) "you lose";
}

int main() {
    int attempts = 0;
    do {
        int n;
        cout << ">>"; cin >> n;
        try {
            attempts+=1;
            generate(n);
        }
        catch (const string& x) {
            cout << x << endl << "attempts: " << attempts << endl;
            return 0;
        }
        cout << "nothing" << endl;
    } while (true);
}