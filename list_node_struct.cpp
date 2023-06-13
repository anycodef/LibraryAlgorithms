# include <iostream>
# include <list>

using namespace std;

struct Node {
  int a = 0;
};

int main() {
  
  list<Node*> list_nodes;
  Node* profile = new Node();

  for (int i = 0; i < 4; i++) {
    profile -> a = i;
    list_nodes.push_back(profile)*;
  }

  cout << endl;
  for (Node* i : list_nodes) {
    cout << " -> " << i -> a << endl;
  }

  return 0;
}
