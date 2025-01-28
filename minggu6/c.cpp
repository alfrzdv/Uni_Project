#include <iostream> 
 
int main() { 
  int count = 0; 
  for (int i = 0; i < 10; i++) { 
    count++; 
  } 
  std::cout << "The loop was executed " << count << " times." << std::endl; 
  return 0; 
} 