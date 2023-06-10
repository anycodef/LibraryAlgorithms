# include <iostream>
# include <list>
# include <time.h>

using namespace std;

struct Node {
  int a;
};

int main() {
  srand(time(NULL));

  list<Node*> listNode;
  Node* pointer = NULL;

  for (int i = 0; i < 10; i++) {
    pointer = new Node();
    pointer -> a = rand() % 6;
    listNode.push_back(pointer);
  }

  for (Node* i: listNode) {
    cout << i -> a << endl;
  }

  listNode.unique();

  cout << endl;

  for (Node* i: listNode) {
    cout << i -> a << endl;
  }

  return 0;
}
