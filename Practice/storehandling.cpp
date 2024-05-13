#include <iostream>   // Include the input/output stream library
#include <fstream>    // Include the file stream library
#include <vector>     // Include the vector container from the C++ Standard Library

using namespace std;  // Use the standard C++ namespace to simplify code

class Item {
private:
    string name;
    float price;
    int qty;

public:
    Item() {}  // Default constructor
    Item(string n, float p, int q);  // Parameterized constructor
    friend ifstream& operator>>(ifstream& fis, Item& i);  // Friend function for reading from a file
    friend ofstream& operator<<(ofstream& fos, const Item& i);  // Friend function for writing to a file
    friend ostream& operator<<(ostream& os, const Item& i);  // Friend function for displaying to the console
};

int main() {
    int n;  // Number of items
    string name;
    float price;
    int qty;

    cout << "Enter number of Items: ";
    cin >> n;  // Read the number of items from the user

    vector<Item> itemList;  // Create a vector to store the items

    cout << "Enter All Items" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter Item " << i + 1 << " Name, Price, and Quantity: ";
        cin >> name >> price >> qty;  // Read item details from the user
        itemList.push_back(Item(name, price, qty));  // Add the item to the vector
    }

    ofstream fos("Items.txt");  // Open a file for writing
    for (const Item& item : itemList) {
        fos << item;  // Write each item to the file
    }

    Item item;
    ifstream fis("Items.txt");  // Open the file for reading
    cout << "Items read from file:" << endl;
    for (int i = 0; i < n; i++) {
        fis >> item;  // Read each item from the file
        cout << "Item " << i << ": " << item << endl;  // Display the item to the console
    }

    return 0;
}

Item::Item(string n, float p, int q) {
    name = n;
    price = p;
    qty = q;
}

ofstream& operator<<(ofstream& fos, const Item& i) {
    fos << i.name << endl << i.price << endl << i.qty << endl;  // Write item details to the file
    return fos;
}

ifstream& operator>>(ifstream& fis, Item& i) {
    fis >> i.name >> i.price >> i.qty;  // Read item details from the file
    return fis;
}

ostream& operator<<(ostream& os, const Item& i) {
    os << "Name: " << i.name << endl << "Price: " << i.price << endl << "Quantity: " << i.qty << endl;  // Display item details to the console
    return os;
}
