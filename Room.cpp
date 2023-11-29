//

//  Room.cpp

//  cpp

//

//  Created by Saikapish Sahu on 11/12/23.

//



#include "Room.h"

#include <iostream>

#include <cstring>



using namespace std;



Room :: Room(char* title1) {

    title = new char[80];

    strcpy(title, title1);

    // cout << " Inside room const" << endl;

    

}



char* Room :: getName() {

    
    // cout << " Inside getName() " << title << endl;
    return title;

}

