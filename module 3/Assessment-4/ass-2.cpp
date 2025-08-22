#include <iostream>
#include <string>
using namespace std;

// menu item class
class menu_item 
{
public:
    string name;
    float price;

    menu_item(string n = "", float p = 0.0) 
    {
        name = n;
        price = p;
    }
};

// order class
class order 
{
private:
    float total;

public : 
    order() 
    {
        total = 0;
    }

    void add_item(string item_name, float price, int qty) 
    {
        float cost = price * qty;
        total += cost;
        cout << qty << " * " << item_name << " Subtotal: Rs. " << cost << endl;
    }

    void show_total(string customer_name) 
    {
        cout << "\n-----------------------------\n";
        cout << "Customer name: " << customer_name << endl;
        cout << "Total bill: Rs. " << total << endl;
        cout << "Thank you for your order!\n";
        cout << "-----------------------------\n";
    }
};

// function declaration
menu_item show_sub_menu(string category);

// main
int main() 
{
    string customer_name;
    cout << "Welcome to the food ordering system!\n";
    cout << "Enter your name: ";
    cin >> customer_name;

    order my_order;
    int main_choice;
    char more;

    do 
    {
        cout << "\n---- Main Menu ----\n";
        cout << "1. Sandwich\n";
        cout << "2. Manchurian\n";
        cout << "3. Frankie\n";
        cout << "4. Burgers\n";
        cout << "5. Pizza\n";
        cout << "Enter your choice: ";
        cin >> main_choice;

        string category;
        switch (main_choice) 
        {
            case 1: category = "sandwich"; break;
            case 2: category = "manchurian"; break;
            case 3: category = "frankie"; break;
            case 4: category = "burgers"; break;
            case 5: category = "pizza"; break;
            default:
                cout << "Invalid category.\n";
                continue;
        }

        // first get selected item
        menu_item selected_item = show_sub_menu(category);

        if (selected_item.name != "") 
        {
            int qty;
            cout << "Enter quantity: ";
            cin >> qty;
            my_order.add_item(selected_item.name, selected_item.price, qty);
        }

        cout << "Do you want to order more? (y/n): ";
        cin >> more;

    } while (more == 'y' || more == 'Y');

    my_order.show_total(customer_name);
    return 0;
}

// function to show sub menu
menu_item show_sub_menu(string category) 
{
    menu_item item;
    int choice;

    if (category == "sandwich") 
    {
        cout << "\n--- Sandwich Menu ---\n";
        cout << "1. Grilled Sandwich - Rs. 80\n";
        cout << "2. Club Sandwich - Rs. 100\n";
        cout << "3. Aloo Mattar Sandwich - Rs. 90\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) item = menu_item("Grilled Sandwich", 80);
        else if (choice == 2) item = menu_item("Club Sandwich", 100);
        else if (choice == 3) item = menu_item("Aloo Mattar Sandwich", 90);
        else cout << "Invalid choice.\n";
    }

    else if (category == "manchurian") 
    {
        cout << "\n--- Manchurian Menu ---\n";
        cout << "1. Dry Manchurian - Rs. 120\n";
        cout << "2. Gravy Manchurian - Rs. 130\n";
        cout << "3. Paneer Manchurian - Rs. 150\n";
        cout << "4. Baby Corn Manchurian - Rs. 140\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) item = menu_item("Dry Manchurian", 120);
        else if (choice == 2) item = menu_item("Gravy Manchurian", 130);
        else if (choice == 3) item = menu_item("Paneer Manchurian", 150);
        else if (choice == 4) item = menu_item("Baby Corn Manchurian", 140);
        else cout << "Invalid choice.\n";
    }

    else if (category == "frankie") 
    {
        cout << "\n--- Frankie Menu ---\n";
        cout << "1. Paneer Cheese Frankie - Rs. 100\n";
        cout << "2. Veg Frankie - Rs. 80\n";
        cout << "3. Corn Veg Frankie - Rs. 90\n";
        cout << "4. Cottage Cheese Frankie - Rs. 110\n";
        cout << "5. Chilli Paneer Frankie - Rs. 120\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) item = menu_item("Paneer Cheese Frankie", 100);
        else if (choice == 2) item = menu_item("Veg Frankie", 80);
        else if (choice == 3) item = menu_item("Corn Veg Frankie", 90);
        else if (choice == 4) item = menu_item("Cottage Cheese Frankie", 110);
        else if (choice == 5) item = menu_item("Chilli Paneer Frankie", 120);
        else cout << "Invalid choice.\n";
    }

    else if (category == "burgers") 
    {
        cout << "\n--- Burgers Menu ---\n";
        cout << "1. Classic Veg Burger - Rs. 70\n";
        cout << "2. Royal Paneer Grilled Burger - Rs. 110\n";
        cout << "3. Tandoori Burger - Rs. 100\n";
        cout << "4. Schezwan Burger - Rs. 90\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) item = menu_item("Classic Veg Burger", 70);
        else if (choice == 2) item = menu_item("Royal Paneer Grilled Burger", 110);
        else if (choice == 3) item = menu_item("Tandoori Burger", 100);
        else if (choice == 4) item = menu_item("Schezwan Burger", 90);
        else cout << "Invalid choice.\n";
    }

    else if (category == "pizza") 
    {
        cout << "\n--- Pizza Menu ---\n";
        cout << "1. Italian Pizza - Rs. 200\n";
        cout << "2. Margherita - Rs. 180\n";
        cout << "3. Peppy Paneer - Rs. 220\n";
        cout << "4. Farm House - Rs. 240\n";
        cout << "5. BBQ Pizza - Rs. 250\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) item = menu_item("Italian Pizza", 200);
        else if (choice == 2) item = menu_item("Margherita", 180);
        else if (choice == 3) item = menu_item("Peppy Paneer", 220);
        else if (choice == 4) item = menu_item("Farm House", 240);
        else if (choice == 5) item = menu_item("BBQ Pizza", 250);
        else cout << "Invalid choice.\n";
    }

    return item;
}

