#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

// Структура для управління запасами
struct Elements {
    vector<string> names = { "mozzarella", "salami", "pineapple", "tomato", "pepper", "chicken" };
    vector<float> quantities = { 2000, 1000, 500, 800, 600, 700 };

    // Віднімання інгредієнтів із запасів
    bool DeductIngredients(const vector<string>& ingrNames, const vector<float>& ingrQuantities) {
        for (size_t i = 0; i < ingrNames.size(); i++) {
            const string& ingredient = ingrNames[i];
            float requiredQuantity = ingrQuantities[i];

            bool found = false;
            for (size_t j = 0; j < names.size(); j++) {
                if (names[j] == ingredient) {
                    found = true;
                    if (quantities[j] < requiredQuantity) {
                        cout << "Not enough " << ingredient << " in stock!" << endl;
                        return false;
                    }
                    break;
                }
            }
            if (!found) {
                cout << "Ingredient " << ingredient << " not found in stock!" << endl;
                return false;
            }
        }

        for (size_t i = 0; i < ingrNames.size(); i++) {
            for (size_t j = 0; j < names.size(); j++) {
                if (names[j] == ingrNames[i]) {
                    quantities[j] -= ingrQuantities[i];
                    break;
                }
            }
        }

        return true;
    }

    // Показ запасів
    void ShowStock() const {
        cout << "Current stock:" << endl;
        for (size_t i = 0; i < names.size(); i++) {
            cout << names[i] << ": " << quantities[i] << " grams" << endl;
        }
    }
};

// Клас Pizza
class Pizza {
    string name;
    vector<string> ingredients;
    vector<float> quantities;
    float mass;
    float price;

public:
    Pizza() : name("No name"), mass(0), price(0) {}

    Pizza(string n, vector<string> ingr, vector<float> qty, float m, float p)
        : name(n), ingredients(ingr), quantities(qty), mass(m), price(p) {}

    void Show() const {
        cout << "Pizza: " << name << endl;
        cout << "Ingredients: ";
        for (size_t i = 0; i < ingredients.size(); i++) {
            cout << ingredients[i] << " (" << quantities[i] << "g), ";
        }
        cout << endl;
        cout << "Mass: " << mass << " grams" << endl;
        cout << "Price: $" << price << endl;
    }

    bool Order(Elements& stock) {
        return stock.DeductIngredients(ingredients, quantities);
    }

    
    bool SaveToFile(const string& path) const {
        ofstream file(path, ios::app);
        if (file.is_open()) {
            file << name << ", ";
            for (size_t i = 0; i < ingredients.size(); i++) {
                file << ingredients[i] << " (" << quantities[i] << "g)";
                if (i < ingredients.size() - 1) file << ", ";
            }
            file << ", " << mass << ", " << price << endl;
            file.close();
            return true;
        }
        cout << "Failed to save pizza to file!" << endl;
        return false;
    }

  
    static vector<Pizza> LoadFromFile(const string& path) {
        ifstream file(path);
        vector<Pizza> pizzas;
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                cout << line << endl; 
            }
            file.close();
        }
        else {
            cout << "Failed to open file!" << endl;
        }
        return pizzas;
    }
};

void Menu(Elements& stock) {
    vector<Pizza> pizzas;
    string filename = "pizzas.txt";
    int choice;

    while (true) {
        system("cls");
        cout << "[1] - Show stock;\n[2] - Create and order a pizza;\n[3] - Show pizzas;\n[4] - Save to file;\n[5] - Load from file;\n[6] - Exit;\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            stock.ShowStock();
            system("pause");
            break;

        case 2: {
            string name;
            int count;
            vector<string> ingrNames;
            vector<float> ingrQuantities;
            float mass, price;

            cin.ignore();
            cout << "Enter pizza name: ";
            getline(cin, name);

            cout << "Enter number of ingredients: ";
            cin >> count;

            for (int i = 0; i < count; i++) {
                string ingredient;
                float quantity;
                cout << "Enter ingredient #" << (i + 1) << ": ";
                cin >> ingredient;
                cout << "Enter quantity (g): ";
                cin >> quantity;
                ingrNames.push_back(ingredient);
                ingrQuantities.push_back(quantity);
            }

            cout << "Enter mass (g): ";
            cin >> mass;
            cout << "Enter price: $";
            cin >> price;

            Pizza newPizza(name, ingrNames, ingrQuantities, mass, price);
            if (newPizza.Order(stock)) {
                pizzas.push_back(newPizza);
                cout << "Pizza ordered successfully!" << endl;
            }
            else {
                cout << "Failed to order pizza due to insufficient stock!" << endl;
            }
            system("pause");
            break;
        }

        case 3:
            if (pizzas.empty()) {
                cout << "No pizzas ordered yet!" << endl;
            }
            else {
                for (const auto& pizza : pizzas) {
                    pizza.Show();
                }
            }
            system("pause");
            break;

        case 4:
            for (const auto& pizza : pizzas) {
                if (!pizza.SaveToFile(filename)) {
                    cout << "Failed to save some pizzas to file!" << endl;
                }
            }
            cout << "Pizzas saved to file!" << endl;
            system("pause");
            break;

        case 5:
            pizzas = Pizza::LoadFromFile(filename);
            system("pause");
            break;

        case 6:
            return;

        default:
            cout << "Invalid choice! Try again." << endl;
            system("pause");
            break;
        }
    }
}

int main() {
    Elements stock;
    Menu(stock);
}
