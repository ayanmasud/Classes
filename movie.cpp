#include <iostream>
#include "movie.h"

// stores possible functions for the child class movie
movie::movie() {

}
char* movie::getDirector() {
  return director;
}
int movie::getDuration() {
  return duration;
}
char* movie::getRating() {
  return rating;
}
void movie::print() {
  cout << "Movie: Title: " << getTitle() << ", Director: " << getDirector() << ", Year: " << getYear() << ", Duration: " << getDuration() << ", Rating: " << getRating() << endl;
}

// destructor
movie::~movie(){

}
