//
// Created by chapm on 7/11/2021.
//

#ifndef UNTITLED17_ITEMTOPURCHASE_H
#define UNTITLED17_ITEMTOPURCHASE_H


#include <string>
#include <vector>

using namespace std;

class ItemToPurchase {
public:

//Declare default constructor

    ItemToPurchase();


//Declare SetItemName function

    void SetName(string itemName);

//Declarae SetItemPrice function

    void SetPrice(int itemPrice);

//Declare SetItemQuantity function

    void SetQuantity(int itemQuantity);

//Declare SetItemDescription function

    void SetDescription(string itemDescription);

//Declarae GetItemName function

    string GetName();

//Declare GetPrice function

    int GetPrice();

//Declare GetItemQuantity function

    int GetQuantity();

//Declare GetItemDescription function

    string GetDescription();

//Declare PrintItemCost function

    static void PrintItemCost();

//Declare PrintItemDescription

    void PrintItemDescription();

private:

//Declare itemName as

//type of string

    string itemName;

//Declare itemPrice as

//type of integer

    int itemPrice;

//Declare itemQuantity as

//type of integer

    int itemQuantity;

//Declare itemDescription as
//type of string

    string itemDescription;

};



#endif //UNTITLED17_ITEMTOPURCHASE_H
