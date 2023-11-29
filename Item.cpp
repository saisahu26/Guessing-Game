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

    name = new char[80];

    strcpy(name, name1);

 //   cout << " Inside Item Const " << endl;

}

char* Item :: getName() {

 cout << " Inside Item getname " << name << endl;
 return name;
}

void Item :: setName(char* name1) {

    cout << " Inside Item setName() and before strcpy " << endl;
    strcpy(name, name1);
    cout << " Inside Item setName() and after strcpy " << name << endl;

    return;
}

