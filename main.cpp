#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <exception>
//#include "boost/asio.hpp"

using namespace std;
//using namespace boost::asio;

int random(const int& min, const int& max) {
    return (rand() % (max - min + 1)) + min;
}

class Win: public exception {
  public:
    char* what() const noexcept override {
        return "You win!";
    }
};

class Lose: public exception {
  public:
    char* what() const noexcept override {
        return "You lose!";
    }
};

void generate(const int& n) {
    srand(time(nullptr));
    int n1 = random(1, 9);
    int n2 = random(1,9);
    while (n1 == n2) n2 = random(1, 9);

    if (n == n1) throw Win();
    if (n == n2) throw Lose();
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
        catch (const exception& x) {
            cout << x.what() << endl << "attempts: " << attempts << endl;
            return 0;
        }
        cout << "nothing" << endl;
    } while (true);
}