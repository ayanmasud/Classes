#include <iostream>
#include "music.h"

// stores possible functions for the child class music
music::music() {

}
char* music::getArtist() {
  return artist;
}
int music::getDuration() {
  return duration;
}
char* music::getPublisher() {
  return publisher;
}

void music::print() {
  cout << "Music: Title: " << getTitle() << ", Artist: " << getArtist() << ", Year" << getYear() << ", Duration: " << getDuration() << ", Publisher: " << getPublisher() << endl; 
}

// destructor
music::~music(){

}
