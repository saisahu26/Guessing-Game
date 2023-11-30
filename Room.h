//

//  Room.hpp

//  cpp

//

//  Created by Saikapish Sahu on 11/12/23.

//



#ifndef ROOM_H

#define ROOM_H

#include <iostream>

#include <stdio.h>

#include <cstring>

//#include "Room.h"





using namespace std;



class Room { //creates class Room

public:

  Room(char* name); //creates the room function for the cpp file

  char* getName(); //creates the getName function to return title

  Room createRoom(); //createRoom function to create the list of rooms

    

private:

  char* title; //char pointer for the title

    

};



#endif // ROOM_H
