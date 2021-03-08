#ifndef coffee
#define coffee
std::string make_coffee(bool milk = false, bool sugar = false) {
  std::string coffe = "Here's your coffee";
  if (milk && sugar) {
    coffe += " with milk and sugar";
  } else if (milk) {
    coffe += " with milk";
  } else if (sugar) {
    coffe += " with sugar";
  }
  return coffe + ".\n";
}
#endif