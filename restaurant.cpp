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
    cout << "00Restaurant struct\n";

    // Milestone 1: for testing
    cout << "Milestone 1 Create 1 restaurant:\n";
    Restaurant testRestaurant = createRestaurant();
    cout << "\nYou entered:\n";
    outputRestaurant(testRestaurant);

    cout << "Milestone 2 Create 4 restaurants:\n\n";

    // Create four Restaurant 
    Restaurant r1 = createRestaurant();
    Restaurant r2 = createRestaurant();
    Restaurant r3 = createRestaurant();
    Restaurant r4 = createRestaurant();

    cout << " All Restaurants\n";
    cout << "Restaurant #1\n";
    outputRestaurant(r1);
    cout << "\nRestaurant #2\n";
    outputRestaurant(r2);
    cout << "\nRestaurant #3\n";
    outputRestaurant(r3);
    cout << "\nRestaurant #4\n";
    outputRestaurant(r4);

    return 0;


}
Restaurant createRestaurant() {
    Restaurant temp;

    cout << "Enter restaurant name: ";
    getline(cin, temp.name);

    cout << "Enter address: ";
    getline(cin, temp.address);

    cout << "Enter cuisine type: ";
    getline(cin, temp.cuisine);

    cout << "Enter rating (1-5): ";
    cin >> temp.rating;

    while (temp.rating < 1 || temp.rating > 5) {
        cout << "rating must be 1-5";
        cin >> temp.rating;
    }

}


