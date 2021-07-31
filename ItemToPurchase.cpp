//
// Created by chapm on 7/11/2021.
//

#include "ItemToPurchase.h"
#include "iostream"

using namespace std;

//Implement default constructor

ItemToPurchase::ItemToPurchase()

{

    itemName = " ";

    itemPrice = 0;

    itemQuantity = 0;

    itemDescription = " ";

}


//Implementation of the SetItemName function

void ItemToPurchase::SetName(string name)

{

    itemName = name;

}

//Implementation of the SetPrice function

void ItemToPurchase::SetPrice(int itemPrice)

{

    this->itemPrice = itemPrice;

}

//Implementation of the SetQuantity function

void ItemToPurchase::SetQuantity(int itemQuantity)

{

    this->itemQuantity = itemQuantity;

}

//Implementation of the SetDescription function

void ItemToPurchase::SetDescription(string description)

{

    itemDescription = description;

}

//Implementation of the GetName function

string ItemToPurchase::GetName()

{

    return itemName;

}


//Implementation of the GetPrice function

int ItemToPurchase::GetPrice()

{

    return itemPrice;

}

//Implementation of the GetQuantity function

int ItemToPurchase::GetQuantity()

{

    return itemQuantity;

}
//Implementation of the GetDescription function

string ItemToPurchase::GetDescription()

{

    return itemDescription;

}

void ItemToPurchase::PrintItemDescription() {
    cout << GetName() << ":" << GetDescription();

}

void ItemToPurchase::PrintItemCost() {
    cout << ItemToPurchase().GetName() << " " <<ItemToPurchase().GetQuantity() << " @ $" <<ItemToPurchase().GetPrice() << " = $" <<(ItemToPurchase().GetQuantity()*ItemToPurchase().GetPrice()) << endl;
}
