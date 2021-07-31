#include <iostream>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"

int main() {
    ShoppingCart ShoppingCart;
    ShoppingCart.SetCustomerName();
    ShoppingCart.SetDate();
    cout << "Customer name: " << ShoppingCart.GetCustomerName() << endl;
    cout << "Today's date: " << ShoppingCart.GetDate() << endl;
    ShoppingCart.PrintMenu();











    return 0;
}
