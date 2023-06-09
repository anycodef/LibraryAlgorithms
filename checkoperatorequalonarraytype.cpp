# include <array>
# include <iostream>

using namespace std;

int main() {
  
  array<int, 2> a = {2, 3};
  array<int, 2> b = {2, 3};

  cout << (a == b) << endl;


  return 0;
}
