#include<iostream>
#include <vector>

int addNum(int a,int b){ return a+b; }

int main(){

  // define an int-value
  int i= 5;                                  // explicit
  auto i1= 5;                                // auto
 
  // define a reference to an int
  int& b= i;                                 // explicit
  auto& b1= i;                               // auto
 
  // define a pointer to a function
  int (*add)(int,int)= addNum;               // explicit
  auto add1= addNum;                         // auto
  
  // iterate through a vector
  std::vector<int> vec;
  for (std::vector<int>::iterator it= vec.begin(); it != vec.end(); ++it){} 
  for (auto it1= vec.begin(); it1 != vec.end(); ++it1) {}

  // define a function pointer
  int (*addNum1)(int, int) = [] (int a, int b){return a + b;};

  // use type inference of the C++11 compiler
  auto addNum2 = [](int a, int b){return a + b;};

  std::cout << "\n";

  // use the function pointer
  std::cout << "addNum1(1, 2) = " << addNum1(1, 2) << std::endl;

  // use the auto variable
  std::cout << "addNum2(1, 2) = " << addNum2(1, 2) << std::endl;

  std::cout << "\n";

}