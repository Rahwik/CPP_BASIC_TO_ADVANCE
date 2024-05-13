#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Item
{
private:
    string name;
    float price;
    int qty;

public:
    Item() {} // Default constructor for the Item class
    Item(string n, float p, int q); // Constructor with parameters for Item
    friend istream &operator>>(istream &is, Item &i); // Overloaded input operator
    friend ostream &operator<<(ostream &os, const Item &i); // Overloaded output operator
};

int main()
{
    int n;
    cout << "Enter number of Items: ";
    cin >> n; // Read the number of items to be entered by the user

    vector<Item> list; // Create a vector to store Item objects

    cout << "Enter All Items: " << endl;
    for (int i = 0; i < n; i++)
    {
        Item item; // Create an Item object to hold user input
        cout << "Enter Item " << i + 1 << " Name, price, and quantity: ";
        cin >> item; // Read item data from the user
        list.push_back(item); // Add the item to the vector
    }

    ofstream fos("Items.txt"); // Open a file stream for writing
    for (const Item &item : list)
    {
        fos << item << endl; // Write each item to the file
    }

    Item item;
    ifstream fis("Items.txt"); // Open a file stream for reading
    for (int i = 0; i < n; i++)
    {
        fis >> item; // Read item data from the file
        cout << "Item " << i << ":" << endl
             << item << endl; // Display the item's details
    }
}

Item::Item(string n, float p, int q)
{
    name = n;
    price = p;
    qty = q;
}

istream &operator>>(istream &is, Item &i)
{
    is >> i.name >> i.price >> i.qty; // Read item data from the input stream
    return is;
}

ostream &operator<<(ostream &os, const Item &i)
{
    os << "Name: " << i.name << endl; // Display the item's name
    os << "Price: $" << i.price << endl; // Display the item's price
    os << "Quantity: " << i.qty << endl; // Display the item's quantity
    return os;
}
