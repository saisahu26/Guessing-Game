//

//  Item.h

//  cpp

//

//  Created by Saikapish Sahu on 11/12/23.

//



#ifndef ITEM_H
#define ITEM_H

#include <iostream>

using namespace std;

class Item  { //creates item class

public:

    Item(char* name);

  char* getName(); //creates getName cuntion to get the item name
 
  void setName(char* name1); //creates the set name function to set the name of the title after pick up or drop

protected:

    char* name;

};

#endif
