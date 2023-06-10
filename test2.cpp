# include <iostream>

using namespace std;

struct Node {
  int data = 6;
};

int main() {

  Node* a = new Node();
  
  cout << a -> (data / 2) << endl;

  return 0;
}
