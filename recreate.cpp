#include <iostream>
#include <stdint.h>
#include <thread>
#include <semaphore.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <vector>

using namespace std;
class Character{
private:
  char value;
  vector<double> probability;
  vector<char> nextKin;
public:
  Character(char c);
  void setValue(char c);
  char returnValue(void);
};
