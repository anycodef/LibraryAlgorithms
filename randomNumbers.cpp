# include <iostream>
# include <time.h>

using namespace std;

int main() {

  srand(time(NULL));

  int limite_superior = 6;
  int limite_inferior = 2;

  int number = rand() % (limite_superior - limite_inferior + 1) + limite_inferior;

  cout << number << endl;

  
  return 0;
}

