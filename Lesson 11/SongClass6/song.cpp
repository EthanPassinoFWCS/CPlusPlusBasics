#include "song.hpp"
#include <iostream>

std::string Song::get_title() {
  return title;
}

std::string Song::get_artist() {
  return artist;
}

Song::~Song() {
  std::cout << "Goodbye Drama!";
}
// Constructor
Song::Song(std::string new_title, std::string new_artist) 
: title(new_title), artist(new_artist) {}