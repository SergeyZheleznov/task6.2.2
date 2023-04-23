#include "accounter.h"
#include <iostream>
#include <cstdio>
#include <stdlib.h>

Counter::Counter() { i = 1; }
Counter::Counter(int number) { this->i = number; }
void Counter::plus() { this->i = i + 1; }
void Counter::minus() { this->i = i - 1;}
void Counter::look() { std::cout << i << std::endl;}