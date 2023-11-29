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

class Item {

public:

    Item(char* name);

    char* getName();
 
    void setName(char* name1);

protected:

    char* name;

};

#endif
