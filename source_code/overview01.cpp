// overview01.cpp
// friend class

#include <iostream>
using namespace std;

// class declaration
class Pontikaros;

class Pithari {
private:
    int num_of_fruits;
    int num_of_biscuits;
    int num_of_pies;

public:
    // constructor to initialize numB to 1
    Pithari(int a, int b, int c) : num_of_fruits(a), num_of_biscuits(b), num_of_pies(c) {}

    // get values
    void show_content() {
        cout << num_of_fruits << " fruits\n" << num_of_biscuits << " biscuits\n" << num_of_pies << " pies\n";
    }

    // member function to add numA
    friend class Pontikaros;
};

class Pontikaros {
private:
    string name;
    bool hungry;
    int weight; // in kilos

public:
    // constructor
    Pontikaros(string input) : name(input), hungry(true), weight(2) {}

    void eat_from(Pithari* p) {
        if (hungry) {
            p->num_of_fruits -= 2;   // eat 2 fruits
            p->num_of_biscuits -= 3; // eat 2 biscuits
            p->num_of_pies -= 1;     // eat 1 pie

            hungry = false;
            weight += 3;

            cout << endl << name << " just ate from pithos\n";
        }
    }
};

int main() {
    Pithari pithos(50, 86, 12);
    Pontikaros Mitsos("Mitsos");

    cout << "Pithari before:\n";
    pithos.show_content();

    Mitsos.eat_from(&pithos);

    // <-01 add another Pontikara
    // <-01 eats from pithos

    // <-02 add another Pontikara
    // <-02 eats from pithos
    
    // <-03 add another Pontikara
    // <-03 eats from pithos

    // <-04 add another Pontikara
    // <-04 eats from pithos

    // <-05 add another Pontikara
    // <-05 eats from pithos

    // <-06 add another Pontikara
    // <-06 eats from pithos

    // <-07 add another Pontikara
    // <-07 eats from pithos

    // <-08 add another Pontikara
    // <-08 eats from pithos
    
    // <-09 add another Pontikara
    // <-09 eats from pithos

    // <-10 add another Pontikara
    // <-10 eats from pithos
    
    
    cout << "\nPithari after:\n";
    pithos.show_content();

    return 0;
}
