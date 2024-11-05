#ifndef MEDIA_H // header guard requirements for the parent class
#define MEDIA_H
#include <iostream>

using namespace std;

class media { // creation of the parent class media. stores information all media shares
 public:
  media();
  char* getTitle();
  int getYear();

  virtual void print(); // virtual so that it can access the print functions in the other 3 classes
  
  char title[80];
  int year;

  virtual ~media(); 
};

#endif //MEDIA_H
