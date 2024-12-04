/*

String Set

12/4/2024

@AJ Enrique Arguello

Objectives: Create an STL Integer Set of random words

Using an iterator, Display all the names in the Set

Did the program automatically sort the words?

Invoke the find command/function and search for a name within your set

*/

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