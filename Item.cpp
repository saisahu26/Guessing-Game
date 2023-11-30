//

//  Item.cpp

//  cpp

//

//  Created by Saikapish Sahu on 11/13/23.

//



#include <stdio.h>

#include "Item.h"

#include <iostream>

#include <cstring>



using namespace std;



Item :: Item(char* name1) {

  name = new char[80]; //sets name to a char array

  strcpy(name, name1); //copies name from the item name

 //   cout << " Inside Item Const " << endl;

}

char* Item :: getName() { //calls getName which returns the name of the item

 //cout << " Inside Item getname " << name << endl;
 return name;
}

void Item :: setName(char* name1) { //cals setName which sets the name of the modified item

    strcpy(name, name1);
    //cout << " Inside Item setName() and after strcpy " << name << endl;

    return;
}

