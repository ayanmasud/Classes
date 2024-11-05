#include <iostream>
#include "videogames.h"

// stores possible functions for the child class videogames
videogames::videogames() {
  
}
char* videogames::getPublisher() {
  return publisher;
}
char* videogames::getRating() {
  return rating;
}
void videogames::print() {
  cout << "Videogame: Title: " << getTitle() << ", Year: " << getYear() << ", Publisher: " << getPublisher() << ", Rating: " << getRating() << endl;
}

// destructor
videogames::~videogames(){

}
