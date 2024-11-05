#include <iostream>
#include "media.h"
using namespace std;

class music : public media { // creation of the child class music which has the parent media. stores information specifically for music
 public:
  music();
  char* getArtist();
  int getDuration();
  char* getPublisher();

  void print();
  
  char artist[80];
  int duration;
  char publisher[80];

  ~music();
};
