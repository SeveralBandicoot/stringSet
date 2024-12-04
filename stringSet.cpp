#include <iostream>
#include <set>

using namespace std;

int main() {
  string searchElement = "soccer";
  set<string> stringSet;

  stringSet.insert("golf");
  stringSet.insert("football");
  stringSet.insert("soccer");
  stringSet.insert("baseball");
  stringSet.insert("basketball");

  cout << "Elements of set: ";
  for (set<string>::iterator it = stringSet.begin(); it != stringSet.end(); ++it) { // using iterator it to print contents of set 
    cout << *it << " ";
  }
  cout << endl;

  set<string>::iterator it = stringSet.find(searchElement);
  if (it != stringSet.end()) {
    cout << "Element '" << searchElement << "' found in the set." << endl;
  }
}