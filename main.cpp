/*A database that includes video games, music, and movies.
  Author: Ayan Masud
  Date: 11/5/2024
 */

#include <iostream>
#include <cstring>
#include "music.h"
#include "media.h"
#include "videogames.h"
#include "movie.h"
#include <vector>
#include <iomanip>

using namespace std;

void add(vector<media*> &s);
void search(vector<media*> &s);
void del(vector<media*> &s);

int main() {
  vector<media*> storage; // this media vector holds the videogames, music, and movies

  while (true) {
    cout << endl << "'ADD', 'SEARCH', 'DELETE', or 'QUIT'? ";
    char cmd[7];
    cin.getline(cmd, 7); // gets the users input for whether they want to add, search, delete, or quit
    if (strcmp(cmd, "ADD") == 0) {
      add(storage);
    }
    else if (strcmp(cmd, "SEARCH") == 0) {
      search(storage);
    }
    else if (strcmp(cmd, "DELETE") == 0) {
      del(storage);
    }
    else if (strcmp(cmd, "QUIT") == 0) {
      break;
    }
    else {
      cout << endl << "Invalid command." << endl;
    }
  }
  
  return 0;
}

void add(vector<media*> &s) { // function that gets information about the videogame, music, or movie and adds it to the media vector
  char input[3];
  cout << endl << "Add Video Game 'VG', Music 'M', or Movie, 'MV': ";
  cin.getline(input, 3); // gets the users input for which type of media they want to add
  if (strcmp(input, "VG") == 0) {
    videogames* vg = new videogames(); // creates a new videogame

    cout << "Enter Title: "; // gets information about it
    cin >> vg->title;
    cout << "Enter Year: ";
    cin >> vg->year;
    cout << "Enter Publisher: ";
    cin >> vg->publisher;
    cout << "Enter Rating: ";
    cin >> vg->rating;
    cout << endl;

    s.push_back(vg); // pushes it into the media vector to store it
  }
  else if (strcmp(input, "M") == 0) {
    music* m = new music(); // creates a new music
    
    cout << "Enter Title: "; // gets information about it
    cin >> m->title;
    cout << "Enter Artist: ";
    cin >> m->artist;
    cout << "Enter Year: ";
    cin >> m->year;
    cout << "Enter Duration: ";
    cin >> m->duration;
    cout << "Enter Publisher: ";
    cin >> m->publisher;
    cout << endl;

    s.push_back(m); // pushes it into the media vector to store it
  }
  else if (strcmp(input, "MV") == 0) {
    movie* mv = new movie(); // creates a new movie

    cout << "Enter Title: "; // gets information about it
    cin >> mv->title;
    cout << "Enter Director: ";
    cin >> mv->director;
    cout << "Enter Year: ";
    cin >> mv->year;
    cout << "Enter Duration: ";
    cin >> mv->duration;
    cout << "Enter Rating: ";
    cout << endl;

    s.push_back(mv); // pushes it into the media vector to store it
  }
}

void search(vector<media*> &s) { // function that can find you the media stored in the media vector based off the title and year
  vector<media*>::iterator it; // media vector iterator

  char input2[2];
  cout << "Search by Title 'T' or Year 'Y': ";
  cin.getline(input2, 2); // gets user input to see whether they want to search by title or year

  if (strcmp(input2, "T") == 0) {
    char input3[80];
    cout << "Enter the Title: ";
    cin.getline(input3, 80); // if they chose to search by title, they input the title here
    for (it = s.begin(); it < s.end(); it++) { // goes through the media vector using the iterator to check if any of the title data in there aligns with the title inputted
      if (strcmp((*it)->title, input3) == 0) {
	(*it)->print(); // prints that media. this is a virtual function in the media files so that it can access the videogame, music, and movie print functions so we can reference them straight through the media vector
      }
    }
  }
  else if (strcmp(input2, "Y") == 0) {
    int input4;
    cout << "Enter the Year: ";
    cin >> input4; // if they chose to search by year, they input the year here
    for (it = s.begin(); it < s.end(); it++) { // goes through the media vector using the interator to check if any of the year data in there aligns with the year inputted
      if ((*it)->year == input4) {
        (*it)->print(); // prints that media
      }
    }

  }
}

void del(vector<media*> &s) { // function that can delete the media stored in based off the title of the media
  vector<media*>::iterator it;

  char input5[80];
  cout << "Enter the Title to delete: ";
  cin.getline(input5, 80); // gets the title of the media they want to delete

  cout << "Would you like to delete the following?" << endl;
  for (it = s.begin(); it < s.end(); it++) {
    if (strcmp((*it)->title, input5) == 0) {
      (*it)->print(); // prints the media that it will delete so that you can confirm whether you want to delete it or not

      char input6[2];
      cout << "Yes 'Y' or No 'N': ";
      cin.getline(input6, 2); // if they say yes, it will get deleted
      if (strcmp(input6, "Y") == 0) {
	delete (*it); // removes from memory
	s.erase(it); // removes from vector
      }
    }
  }
}
