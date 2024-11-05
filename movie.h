#include <iostream>
#include "media.h"
using namespace std;

class movie : public media { // creation of the child class movie which has the parent media. stores information specifically for movies
 public:
  movie();
  char* getDirector();
  int getDuration();
  char* getRating();

  void print();

  char director[80];
  int duration;
  char rating[80];

  ~movie();
};
