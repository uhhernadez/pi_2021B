#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string str ("There are two needles in this haystack with needles.");
  string str2 ("needle");

  size_t found = str.find(str2);
  if (found!=string::npos)
    cout << "first 'needle' found at: " << found << '\n';
  
  return 0;
}
