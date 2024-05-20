#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
class Inventory {
private:
    vector<T> items;

public:
    // Add an item to the inventory
    void addItem(const T& item) {
        items.push_back(item);
    }

    // Remove an item from the inventory by its index
    void removeItem(int index) {
        if (index < 0 || index >= items.size()) {
            cout << "Invalid index!" << endl;
        } else {
            items.erase(items.begin() + index);
        }
    }

    // Display all items in the inventory
    void displayItems() const {
        if (items.empty()) {
            cout << "Inventory is empty!" << endl;
        } else {
            cout << "Current Inventory:" << endl;
            for (int i = 0; i < items.size(); ++i) {
                cout << i + 1 << ". " << items[i] << endl;
            }
        }
    }
};

int main() {
    Inventory<string> storeInventory;

    // Adding items to the inventory
    storeInventory.addItem("Apples");
    storeInventory.addItem("Bananas");
    storeInventory.addItem("Oranges");

    // Display current inventory
    storeInventory.displayItems();

    // Removing an item from the inventory
    storeInventory.removeItem(1); // Remove item at index 1 (Bananas)

    // Display inventory after removal
    storeInventory.displayItems();

    // Attempt to remove an item with an invalid index
    storeInventory.removeItem(5); // Invalid index

    return 0;
}
