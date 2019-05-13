// mytest.h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <string>
#include <iostream>

using namespace std;
	
class MyTest {

public:

  // values passed to call a compute function
  enum ALGORITHM {CPU1, CPU2, CPU3};
  
  // values for debug levles FUll = 0, PARTIAL = 1, BRIEF = 2, NONE = 4
	enum debug_level {FULL, PARTIAL, BRIEF, NONE};
 
  // value used to store debug level
  int current_debug;

  // method used to convert string given argument to enum
  bool setDebug(std::string level) {
  
    debug_level_d = level;
    
       if(debug_level_d == "FULL")
       {
         current_debug = FULL;
         cout << "Compute option 1 will be displayed:" << "\n";
         compute(CPU1); 
       }else
       if(debug_level_d == "PARTIAL")
        {
         current_debug = PARTIAL;
         cout << "Compute option 2 will be displayed:" << "\n";
         compute(CPU2);
       }else
        if(debug_level_d == "BRIEF")
        {
         current_debug = BRIEF;
         cout << "Compute option 3 will be displayed:" << "\n";
         compute(CPU3);
       }else
        {
        current_debug = NONE;
        cout << "No compute option at this debug level" << "\n";
        }
        
    return true;
  }
	 
	// define the class name
	static const char* NAME;
	
	static const char* name() {
    return NAME;
		}
  
 // function that will call a certain compute function based on the debug level
 bool compute(int a) { 
         
         if(a == CPU1)
         {
           compute_1();
         } else
         if(a == CPU2)
         {
           compute_2();
         } else
         if(a == CPU3)
         {
           compute_3();
         }
         
         
      return true;
   }
	
 
  // declare a register to hold the current checksum
  float sum_d;
  
protected:

  // declare a static debug level for all class instantiations
  std::string debug_level_d;
  
public:

  // method value to hold internal values
  long debug(FILE* arg);
  
private:

  // reset values
  bool reset() {
    sum_d = 0;
    return true;
  }
  
  // Computes the addition of two numbers for FULL debug
  bool compute_1() {
  
    int sumOfTwoNumbers;
    
    sumOfTwoNumbers = 3 + 3;
    
    cout << "The addition of 3 and 3 is: " << sumOfTwoNumbers << "\n";
  
    return true;
  }
  
  // Computes the subtraction of two numbers for PARTIAL debug
    bool compute_2() {
  
    int subOfTwoNumbers;
    
    subOfTwoNumbers = 10 - 3;
    
    cout << "The subtraction of 3 from 10 is: " << subOfTwoNumbers << "\n";
  
    return true;
  }
  
  // Computes the multiplication of two numbers for BRIEF debug
    bool compute_3() {
  
    int multOfTwoNumbers;
    
    multOfTwoNumbers = 10 * 3;
    
    cout << "The multiplication of 10 and 3 is: " << multOfTwoNumbers << "\n";
  
    return true;
  }

};
