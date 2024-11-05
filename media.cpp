#include <iostream>
#include "media.h"

// stores possible functions with the parent class media
media::media() {
  
}
char* media::getTitle() {
  return title;
}
int media::getYear() {
  return year;
}

void media::print() {

}

// destructor. empty because I didn't set my variables as pointers
media::~media(){

}
