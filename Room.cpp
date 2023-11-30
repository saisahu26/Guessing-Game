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



Room :: Room(char* title1) { //creating room class with char pointer for title

    title = new char[80];

    strcpy(title, title1); //copies the title from the char array

    // cout << " Inside room const" << endl;

    

}



char* Room :: getName() { //calls getname function from the headerfile which returns the title

    
    // cout << " Inside getName() " << title << endl;
    return title;

}

