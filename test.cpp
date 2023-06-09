# include <iostream>
# include <list>

using namespace std;

int main() {
  list<int> a = {2,3,4,2};

  for (auto i = a.begin(); i != a.end(); i++) {

    cout << *i << endl;
  }

  return 0;
}
