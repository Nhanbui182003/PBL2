#include "Listsp.h"
#include <iostream>
#include <string>
using namespace std;

Listsp :: Listsp(){
    head = NULL;
    last = NULL;
}

Listsp:: ~Listsp(){
    delete head;
    delete last;
}

