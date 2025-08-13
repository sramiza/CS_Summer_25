#include <iostream>
#include <algorithm>

using namespace std;

class Product{
public:
    string name;
    string type;
    float price;

    Product(): name("N/A"), type("N/A"), price(0.0) {}

    Product(string Name, string Type, float Price){
        name = Name;
        type = Type;
        price = Price;
    }
};

bool sortPriceAscending(const Product& p1, const Product& p2){
    return p1.price < p2.price;
}

int main(){

    Product array[5] = {
        Product("Apple", "Food", 0.99),
        Product("iPhone", "Tech", 999),
        Product("Toaster", "Appliances", 199),
        Product("Microwave", "Appliances", 249),
        Product("Pan", "Utensil", 24),
    };

    
    string product;
    cout << "Enter product: " << endl;
    cin >> product;

    bool found = false;
    for (int i = 0; i < 5; i++)
    {
        if(array[i].name == product){
            cout << "The product is $" << array[i].price << endl;
            found = true;
            break;
        }
    }

    if (!found){
        cout << "Product not found in catalog." << endl;
    }

    sort(array, array + 5, sortPriceAscending);

    cout << "\nProducts in ascending order of price:\n";
    for (int i = 0; i < 5; i++) {
        cout << array[i].name << " - $" << array[i].price << endl;
    }

    cout << "\nManual sorting of products in descending order of price:\n";
    for (int i = 0; i < 5; i++) {
        
    }

    return 0;
}