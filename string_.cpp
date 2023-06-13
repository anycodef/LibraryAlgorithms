# include <iostream>
# include <list>

using namespace std;

int main () {

  string word("PEDRO");
  list<char> pseudoString = {'J', 'O', 'S', 'U', 'E'};
  list<char>::iterator it = pseudoString.begin();
  it++;
  it++;

  cout << "pseudoString: " << *it << endl;

  cout << word.size() << endl;

  return 0;
}
