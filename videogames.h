#include <iostream>
#include "media.h"
using namespace std;

class videogames : public media { // creation of the child class videogame which has the parent media. stores information specifically for videogames
 public:
  videogames();
  char* getPublisher();
  char* getRating();
  void print();
  
  char publisher[80];
  char rating[80];

  ~videogames();
};
