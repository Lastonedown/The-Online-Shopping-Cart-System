//
// Created by chapm on 7/10/2021.
//

#include "ShoppingCart.h"
#include "ItemToPurchase.h"
#include "iostream"
#include "vector"
#include "numeric"
using namespace std;

//Implement default constructor

ShoppingCart::ShoppingCart() {

    string customerName = "None";
    string currentDate = "January 1,2016";


}
//Implement SetCustomerNameFunction
    void ShoppingCart::SetCustomerName(){
        cout << "Enter customer's name:" << endl;
        getline(cin, customerName);
        this->customerName = customerName;
    }
//Implement SetDate function
    void ShoppingCart::SetDate(){
        cout << "Enter today's date:" << endl;
        getline(cin, currentDate);
        this->currentDate = currentDate;
    }
//Implement GetDate function
    string ShoppingCart::GetDate(){
        return currentDate;
    }
//Implement GetCustomerName function
    string ShoppingCart::GetCustomerName(){

        return customerName;
    }
//Implement AddItem function
    void ShoppingCart::AddItem(){
        ItemToPurchase newItem;
        string newItemName;
        string newItemDescription;
        int newItemPrice;
        int newItemQuantity;

        cout << "Enter the item name:" << endl;
        cin.ignore();
        getline(cin,newItemName);
        newItem.SetName(newItemName);
        cout << "Enter the item description:" << endl;
        getline(cin,newItemDescription);
        newItem.SetDescription(newItemDescription);

        cout << "Enter the item price:" << endl;
        cin >> newItemPrice;
        newItem.SetPrice(newItemPrice);
        cout << "Enter the item quantity" << endl;
        cin >> newItemQuantity;
        newItem.SetQuantity(newItemQuantity);
        cartItems.push_back(newItem);


    }
//Implement RemoveItem function
    void ShoppingCart::RemoveItem() {
        string itemToRemove;
        cout << "Enter name of item to remove:" << endl;
        cin.ignore();
        getline(cin, itemToRemove);
        if (cartItems.empty()) {
            cout << "Item not found in cart. Nothing removed.";
        }
        for (int i = 0; i < cartItems.size(); i++) {
            if (cartItems[i].GetName() == itemToRemove)
                cartItems.erase(cartItems.begin() + i);
        }
    }
//Implement PrintTotal function
    void ShoppingCart::PrintTotal() {
        cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl;
        if (cartItems.empty()){
           cout <<  "SHOPPING CART IS EMPTY" << endl;
        }else {
            GetNumItemsInCart();
        }
            for (int i = 0; i < cartItems.size(); i++) {
                cout << cartItems[i].GetName() << " " << cartItems[i].GetQuantity() << " @ " << cartItems[i].GetPrice()
                     << " = " << "$" << (cartItems[i].GetQuantity() * cartItems[i].GetPrice());
                cout << endl;
            }
        }
//Implement ModifyItem function
    void ShoppingCart::ModifyItem() {
        string itemToModify;
        int newQuantity;
        cout << "Enter the item name:" << endl;
        cin.ignore();
        getline(cin, itemToModify);

        if (cartItems.empty()){
            cout << "Item not found in cart. Nothing modified.";
        }
        for (int i = 0; i < cartItems.size(); i++) {
           if (cartItems[i].GetName() == itemToModify) {
                cout << "Enter new quantity:" << endl;
                cin >> newQuantity;
                cartItems[i].SetQuantity(newQuantity);
            } else{
               cout << "Item not found in cart. Nothing modified.";
           }
        }
    }

//Implement GetNumItemsInCart function
    void ShoppingCart::GetNumItemsInCart() {
            cout << "Number of items: " << cartItems.size() << endl;
        }
//Implement GetCostOfCart
void ShoppingCart::GetCostOfCart() {
    vector <float> itemTotals;
    float itemTotalPrice;
    float costOfCart;

    for(int i = 0; i < cartItems.size(); i++){
        itemTotalPrice = cartItems[i].GetQuantity() * cartItems[i].GetPrice();
        itemTotals.push_back(itemTotalPrice);
    }

        costOfCart = accumulate(itemTotals.begin(), itemTotals.end(), 0);
        cout << "Total: " << "$" << costOfCart;

}
//Implement PrintDescription function
void ShoppingCart::PrintDescriptions() {
    cout << "Item Descriptions" << endl;
    cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl;
    for(int i = 0; i < cartItems.size(); i++){
        cout << cartItems[i].GetName() << ": " << cartItems[i].GetDescription();
    }
}
//Implement PrintMenu function
void ShoppingCart::PrintMenu() {
    char choice;

    cout << "You have " << cartItems.size() << " items in your shopping cart" << endl;
    cout << "When you are done shopping type in the letter Q";


    do {
        cout << endl;
        cout << "Menu" << endl;
        cout << "a - Add item to cart" << endl;
        cout << "d - Remove item from cart" << endl;
        cout << "c - Change item quantity" << endl;
        cout << "i - Output items' descriptions" << endl;
        cout << "o - Output shopping cart" << endl;
        cout << "q - Quit" << endl;
        cout << endl;
        cout << "Choose an option:";
        cin >> choice;


        if (choice == 'A' || choice == 'a') {
            cout << "ADD ITEM TO CART" << endl;
            AddItem();
        }

        if (choice == 'D' || choice == 'd') {
            cout << "REMOVE ITEM FROM CART" << endl;
            RemoveItem();

        }

        if (choice == 'C' || choice == 'c') {
            cout << "CHANGE ITEM QUANTITY" << endl;
            ModifyItem();
        }

        if (choice == 'I' || choice == 'i'){
            cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
            PrintDescriptions();
        }

        if (choice == 'O' || choice == 'o') {
            cout << "OUTPUT SHOPPING CART" << endl;
            PrintTotal();
            GetCostOfCart();
        }
    } while (choice != 'Q' && choice != 'q');

    }
