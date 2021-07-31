//
// Created by chapm on 7/10/2021.
//

#ifndef UNTITLED17_SHOPPINGCART_H
#define UNTITLED17_SHOPPINGCART_H
#include <string>
#include <vector>
#include <iostream>
#include "ItemToPurchase.h"

using namespace std;
class ShoppingCart {

private:
    string customerName;
    string currentDate;

public:
    vector <ItemToPurchase> cartItems;

    ShoppingCart();

    void SetCustomerName();

    void SetDate();

    string GetCustomerName();

    string GetDate();

    void AddItem();

    void RemoveItem();

    void ModifyItem();

    void GetNumItemsInCart();

    void GetCostOfCart();

    void PrintTotal();

    void PrintDescriptions();

    void PrintMenu();


};


#endif //UNTITLED17_SHOPPINGCART_H
