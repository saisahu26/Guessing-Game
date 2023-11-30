// Zuul

//  Main.cpp

//  cpp

//

//  Created by Saikapish Sahu on 11/12/23.

//

//calling from c++ library 
#ifndef Room_h

#define Room_h

#include <iostream>

#include <stdio.h>

#include "Room.h"

#include "Item.h"

#include <vector>


#include <map>


using namespace std;

class Exit { //exit class to declare all of the possible movements
public:
  bool north;
  bool east;
  bool south;
  bool west;
  Room* westRoom;
  Room* southRoom;
  Room* northRoom;
  Room* eastRoom;
  void showExit() {
    if (north == true) {
      cout << "There is: " <<northRoom->getName() << "to the north of your location " << endl;
    }
    if (east == true) {
      cout << "There is: " << eastRoom->getName() << "to the east of your location " << endl;
    }
    if (south == true) {
      cout << "There is: " << southRoom->getName() << "to the south of your location" << endl;
    }
    if (west == true) {
      cout << "There is: " << westRoom->getName() << "to the west of your location" << endl;
    }
    
  }
};
  
vector<Room*> roomLs; //list of room vectors
map<Room*, Exit> gMap; //list of the room with their exits
map<Item*, Room*> iMap; //list of the items with their rooms
map<Item*, Room*> dropMap; //list of the sropped items

void createRoom(vector<Room*> &roomLs, map<Room*, Exit> &gMap, map<Item*, Room*> &iMap); //the createRoom function which sets and creates all of the rooms 
void move(vector<Room*> &roomLs, map<Room*, Exit> &gMap, map<Item*, Room*> &iMap); //the move function where all the commands occur




int main(){ //main function where everything is ran and called from

  cout << "Welcome to the Island, collect items and get to Shifty Shaft, only from there can you win the game!" << endl;
  cout << "Travel using the commands: north, south, east and west. Pick up and drop items or quit the game when needed! " << endl;
	createRoom(roomLs, gMap, iMap);
	move(roomLs, gMap, iMap);
        return 0;

    }

    /**

    * Create all the rooms and link their exits together.

    */

void createRoom(vector<Room*> &roomLs, map<Room*, Exit> &gMap, map<Item*, Room*> &iMap) {

  //declaring and initializing all of the rooms
    char* title1;

    title1 = new char [80];

    strcpy(title1, "Loot Lake");

    char* title2;

    title2 = new char [80];

    strcpy(title2, "Fatal Fields");

    char* title3;

    title3 = new char [80];

    strcpy(title3, "Tilted Towers");

    char* title4;

    title4 = new char [80];

    strcpy(title4, "Pleasent Park");

    char* title5;

    title5 = new char [80];

    strcpy(title5, "Greasy Grove");

    char* title6;

    title6 = new char [80];

    strcpy(title6, "Retail Row");

    char* title7;

    title7 = new char [80];

    strcpy(title7, "Snobby Shores");

    char* title8;

    title8 = new char [80];

    strcpy(title8, "Risky Reels");

    char* title9;

    title9 = new char [80];

    strcpy(title9, "Lucky Landing");

    char* title10;

    title10 = new char [80];

    strcpy(title10, "Wailing Woods");

    char* title11;

    title11 = new char [80];

    strcpy(title11, "Haunted Hills");

    char* title12;

    title12 = new char [80];

    strcpy(title12, "Junk Junction");

    char* title13;

    title13 = new char [80];

    strcpy(title13, "Paradise Palms");

    char* title14;

    title14 = new char [80];

    strcpy(title14, "Lonley Lodge");

    char* title15;

    title15 = new char [80];

    strcpy(title15, "Shifty Shafts");


    //setting values and names to all of the rooms 

    Room* room1 = new Room(title1);

    Room* room2 = new Room(title2);

    Room* room3 = new Room(title3);

    Room* room4 = new Room(title4);

    Room* room5 = new Room(title5);

    Room* room6 = new Room(title6);

    Room* room7 = new Room(title7);

    Room* room8 = new Room(title8);

    Room* room9 = new Room(title9);

    Room* room10 = new Room(title10);

    Room* room11 = new Room(title11);

    Room* room12 = new Room(title12);

    Room* room13 = new Room(title13);

    Room* room14 = new Room(title14);

    Room* room15 = new Room(title15);

    //pushing the rooms into the roomLs vector

    roomLs.push_back(room1);
    roomLs.push_back(room2);
    roomLs.push_back(room3);
    roomLs.push_back(room4);
    roomLs.push_back(room5);
    roomLs.push_back(room6);
    roomLs.push_back(room7);
    roomLs.push_back(room8);
    roomLs.push_back(room9);
    roomLs.push_back(room10);
    roomLs.push_back(room11);
    roomLs.push_back(room12);
    roomLs.push_back(room13);
    roomLs.push_back(room14);
    roomLs.push_back(room15);

    vector<Room*>::iterator it;

    //setting exits for each room based on the game map 
    Exit exit1;
    exit1.north = true;
    exit1.south = true;
    exit1.west = true;
    exit1.east = true;
    exit1.northRoom = room2;
    exit1.southRoom = room9;
    exit1.westRoom = room3;
    exit1.eastRoom = room6;
    pair <map<Room*, Exit>::iterator, bool> ptr;
    ptr = gMap.insert(pair<Room*, Exit>(room1, exit1));

    Exit exit2;
    exit2.north	= false;
    exit2.south = true;
    exit2.west = true;
    exit2.east = true;
    exit2.southRoom = room1;
    exit2.westRoom = room4;
    exit2.eastRoom = room8;
   // gMap.insert({room2, exit2});
    ptr = gMap.insert(pair<Room*, Exit>(room2, exit2));

    Exit exit3;
    exit3.north = true;
    exit3.south = false;
    exit3.west = true;
    exit3.east = true;
    exit3.northRoom = room4 ;
    exit3.westRoom = room7;
    exit3.eastRoom = room1;
    //gMap.insert({room3, exit3});
    ptr = gMap.insert(pair<Room*, Exit>(room3, exit3));

    Exit exit4;
    exit4.north = false;
    exit4.south = true;
    exit4.west = false;
    exit4.east = true;
    exit4.southRoom = room3;
    exit4.eastRoom = room3;
    //gMap.insert({room4, exit4});
    ptr = gMap.insert(pair<Room*, Exit>(room4, exit4));

    Exit exit5;
    exit5.north = false;
    exit5.south = false;
    exit5.west = false;
    exit5.east = true;
    exit5.eastRoom = room9;
    //gMap.insert({room5, exit5});
    ptr = gMap.insert(pair<Room*, Exit>(room5, exit5));

    Exit exit6;
    exit6.north = false;
    exit6.south = false;
    exit6.west = true;
    exit6.east = true;
    exit6.westRoom = room1;
    exit6.eastRoom = room14;
    //gMap.insert({room6, exit6});
    ptr = gMap.insert(pair<Room*, Exit>(room6, exit6));

    Exit exit7;
    exit2.north = true;
    exit2.south = false;
    exit2.west = false;
    exit2.east = true;
    exit2.northRoom = room11;
    exit2.eastRoom = room3;
    //gMap.insert({room7, exit7});
    ptr = gMap.insert(pair<Room*, Exit>(room7, exit7));

    Exit exit8;
    exit8.north = false;
    exit8.south = false;
    exit8.west = true;
    exit8.east = true;
    exit8.westRoom = room2;
    exit8.eastRoom = room10;
    //gMap.insert({room8, exit8});
    ptr = gMap.insert(pair<Room*, Exit>(room8, exit8));

    Exit exit9;
    exit9.north = true;
    exit9.south = false;
    exit9.west = true;
    exit9.east = true;
    exit9.northRoom = room1;
    exit9.westRoom = room5;
    exit9.eastRoom = room15;
    //gMap.insert({room9, exit9});
    ptr = gMap.insert(pair<Room*, Exit>(room9, exit9));

    Exit exit10;
    exit10.north = false;
    exit10.south = false;
    exit10.west = true;
    exit10.east = false;
    exit10.westRoom = room8;
    //gMap.insert({room10, exit10});
    ptr = gMap.insert(pair<Room*, Exit>(room10, exit10));

    //creating each item based on what room they are in
    char* item1;
    item1 = new char[80];
    strcpy(item1, "BoogieBomb");
    Item* boogieBomb = new Item(item1);
    pair <map<Item*, Room*>::iterator, bool> ptr1;
    ptr1 = iMap.insert(pair<Item*, Room*>(boogieBomb, room1));

    char* item2;
    item2 = new char[80];
    strcpy(item2, "Launchpad");
    Item* launchpad = new Item(item2);
    //iMap.insert({launchpad, item2});
    ptr1 = iMap.insert(pair<Item*, Room*>(launchpad, room2));

    char* item3;
    item3 = new char[80];
    strcpy(item3, "Medkit");
    Item* medkit = new Item(item3);
   // iMap.insert({medkit, item3});
    ptr1 = iMap.insert(pair<Item*, Room*>(medkit, room3));

    char* item4;
    item4 = new char[80];
    strcpy(item4, "ShieldPotion");
    Item* shieldPotion = new Item(item4);
   // iMap.insert({shieldPotion, item4});
    ptr1 = iMap.insert(pair<Item*, Room*>(shieldPotion, room4));

    char* item5;
    item5 = new char[80];
    strcpy(item5, "Grappler");
    Item* grappler = new Item(item5);
    //iMap.insert({grappler, item5});
    ptr1 = iMap.insert(pair<Item*, Room*>(grappler, room5));


    
}
    
void move(vector<Room*> &roomLs, map<Room*, Exit> &gMap, map<Item*, Room*> &iMap){
//    void move (vector<Room*> roomLs, vector<Room*> map) 

  // all of the variables used within 'move'
  Room* currentRoom = roomLs.front();
      bool play = true;
      char move [80];
      char moveVar[80];
      map<Item*, Room*> inventory;
      char* nullName = new char[80];
      *nullName = ' ';
 
      while(play) { //playing loop
           
	//this loop prints out what room you are in and what it contains if anything 
	bool emptyRoom = true; 
           map<Item*, Room*>::iterator ptr1;
           cout << "Currently in room " << currentRoom->getName() << endl ;
           cout << "This room " << currentRoom->getName() << " contains " ;
	   for(ptr1 = iMap.begin(); ptr1 != iMap.end(); ptr1++) {
              if (strcmp((ptr1->second)->getName(), currentRoom->getName()) == 0) {
                 if (strcmp(nullName, (ptr1->first)->getName()) != 0) {
                    cout << (ptr1->first)->getName() << " , " ;
                    emptyRoom = false;
                 }
                 else {
                 }
              }
           }
           if (emptyRoom == true) {
	     cout << " no Item " << endl << endl; //if no items are there it prints 'no items'
           }
           else {
                cout << " Item(s) " << endl << endl;
           }
 
           map<Room*, Exit>::iterator ptr; //this is the map vector which has all of the map componets such as the rooms
	   for(ptr = gMap.begin(); ptr != gMap.end(); ptr++) {
              if(ptr->first == currentRoom) {
	         (ptr->second).showExit();
                 break;
              }
           }
           cout << endl;

	   cout << "please enter move, drop, pick or quit" << endl; // the prompt that asks for the next movement 
	   cin >> moveVar;
	   cin.ignore(256 , '\n');

	   //based on what you type (move, pick, drop) it prompts to that loop
	   if(strcmp(moveVar, "move") ==0) {
	     cout << "Where do you want to go" << endl; //which exit will you take?
	         cin >> move;
	         //cin.ignore(256, '\n');
	         if(strcmp(move, "north") == 0) {
	             currentRoom = (ptr->second).northRoom;
	         }
	         else if(strcmp(move, "east") == 0) {
                     currentRoom = (ptr->second).eastRoom;
                 }
	         else if(strcmp(move, "south") == 0) {
                     currentRoom = (ptr->second).southRoom;
                 }
              	 else if(strcmp(move, "west") == 0) {
                      currentRoom = (ptr->second).westRoom;
                 }
                 else {

                      cout << " this exit not found from current room " << endl;
                 }
             }
         // }
           else if(strcmp(moveVar, "drop") ==0) { //if drop, it first prints out your inventory, then procedes to remove it from the imap vector by removing that room and changig it to the room that you are in and by removing it from the inventory vector
	      char* input = new char[80];
              cout << " inventory items are " ;
	      for(auto ptr1 = inventory.begin(); ptr1 != inventory.end(); ptr1++) {
                    cout << (ptr1->first)->getName() << "  " ;
              }
              cout << endl;

	      cout << "enter what item from the inventory you want to drop" << endl;
	      cin >> input;
	      //cin.ignore(256, '\n');
              bool found = false;


	      for(auto i = inventory.begin(); i != inventory.end(); i++) {
                if (strcmp(input,(i->first)->getName())  == 0) {
                   inventory.erase(i->first);
                   pair <map<Item*, Room*>::iterator, bool> ptr2;
                   Item* dropItem = new Item(input);
                   Room* itemDropRoom = new Room((currentRoom)->getName());
                   ptr2 = iMap.insert(pair<Item*, Room*>(dropItem, itemDropRoom));
                   found = true;
                   break;
                }

	      }
              if (found == false) {
		cout << " Drop item not found in the inventory " << endl; //if the entered item does not exist it prompts the user to enter again
              }

              else  {

                    if (inventory.size() != 0) {

                        cout << " Current Item Inventory after drop -> " << endl;
                    }

	            for(auto i = inventory.begin(); i != inventory.end(); i++) {

                        cout << (i->first)->getName() << " , " ; 
                    }
                    cout << endl;

              }
              
           }
           else if(strcmp(moveVar, "pick") ==0) { //if pick is chosen, it pushes the item into the inventory, removes it from imap and from that room
              char* input = new char[80];
              cout << "enter what do you want to pick" << endl;
              cin >> input;
              // cin.ignore(256, '\n');
              char* nullChar = new char[80];
              *nullChar = ' ';
              bool found = false;
              for(auto i = iMap.begin(); i != iMap.end(); i++) {
	          if(strcmp(input, (i->first)->getName())  == 0) {
                       pair <map<Item*, Room*>::iterator, bool> ptr1;
                       Item* dropItem = new Item((i->first)->getName());
                       ptr1 = inventory.insert(pair<Item*, Room*>(dropItem, (i->second)));
                       (i->first)->setName(nullChar);
                       found = true;
                       break;
	          }
              }
              if (found == false) {

                 cout << " Pick item not found in the current Room " << endl;
              }
              else {
                 cout << " Current Item Inventory after pick " << endl;
	         for(auto i = inventory.begin(); i != inventory.end(); i++) {

                     cout << (i->first)->getName() << " , " ; 
                 }
                 cout << endl;
              }
        }
	   else if(strcmp(moveVar, "quit") ==0) { //if quit is entered it breaks form the game ending it

             cout << " Game ended " << endl;
             break;

        }
	if(currentRoom == roomLs[15]) {
	  cout << "Victory Royale! You won the game!" <<endl; //when you enter room15 which is Shifty Shafts, the game prompts you to a win, ending it
	  play = false;
	}
      }
    }

    





#endif // ROOM_H
