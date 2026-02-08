// COMSC-210 | Lab3a | Seoyeon An
#include <iostream>
#include <string>

using namespace std;

struct Restaurant {
    string name;
    string address;
    string cuisione;
    int rating;
    bool reservation;
};

//function prototypes
Restaurant createRestaurant();
void outputRestaurant(const Restaurant& r);

int main() {
    cout << "restaurant struct\n" ;


}
