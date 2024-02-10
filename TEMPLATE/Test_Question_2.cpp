#include <iostream>
#include <string>

using namespace std;

class Product {
public:
    Product(const string& name, double price) : name(name), price(price) {}

    // Getter methods
    string getName() const { return name; }
    double getPrice() const { return price; }

    // Virtual method for displaying product details
    virtual void displayDetails() const {
        cout << "Product: " << name << "\nPrice: $" << price << endl;
    }

    virtual ~Product() {}

private:
    string name;
    double price;
};

class Electronics : public Product {
public:
    Electronics(const string& name, double price, const string& brand)
        : Product(name, price), brand(brand) {}

    void displayDetails() const override {
        cout << "Electronics - ";
        Product::displayDetails();
        cout << "Brand: " << brand << endl;
    }

private:
    string brand;
};

class Clothing : public Product {
public:
    Clothing(const string& name, double price, const string& size)
        : Product(name, price), size(size) {}

    void displayDetails() const override {
        cout << "Clothing - ";
        Product::displayDetails();
        cout << "Size: " << size << endl;
    }

private:
    string size;
};

class Books : public Product {
public:
    Books(const string& name, double price, const string& author)
        : Product(name, price), author(author) {}

    void displayDetails() const override {
        cout << "Books - ";
        Product::displayDetails();
        cout << "Author: " << author << endl;
    }

private:
    string author;
};

int main() {
    string laptopName, brand;
    double laptopPrice;

    cout << "Enter Electronics Name: ";
    getline(cin, laptopName);

    cout << "Enter Electronics Price: $";
    cin >> laptopPrice;

	fflush(stdin);
    cout << "Enter Electronics Brand: ";
    getline(cin, brand);

    Electronics laptop(laptopName, laptopPrice, brand);

    string shirtName, size;
    double shirtPrice;

	fflush(stdin);
    cout << "\nEnter Clothing Name: ";
    getline(cin, shirtName);
    

    cout << "Enter Clothing Price: $";
    cin >> shirtPrice;

    fflush(stdin);
    cout << "Enter Clothing Size: ";
    getline(cin, size);

    Clothing shirt(shirtName, shirtPrice, size);
    
    string bookName, author;
    double bookPrice;
    fflush(stdin);

    cout << "\nEnter Book Name: ";
    getline(cin, bookName);

    cout << "Enter Book Price: $";
    cin >> bookPrice;
    
    fflush(stdin);
    cout << "Enter Book Author: ";
    getline(cin, author);

    Books novel(bookName, bookPrice, author);
    laptop.displayDetails();
    cout << "\n";
    shirt.displayDetails();
    cout << "\n";
    novel.displayDetails();

    return 0;
}

