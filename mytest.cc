#include "mytest.h"
#include <string>
#include <iostream>

using namespace std;

int main(int argc, const char *argv[]) 
{ 
  
  // value to act as call to class MyTest
  MyTest foo1;
  
  // default debug level as string value
  std::string debug_level = "NONE";
  
  // if debug option given still set the debug level to that value
    if(argv[2])
  {
    debug_level = argv[2];
  }

  // store first argument as string value
  std::string word = argv[1];

  // if given argument is debug option argument then will execute debug options
      if (word == "-debug")
      {
            // FULL level prints out name and status then passes value to MyTest class as debug level
                if(debug_level == "FULL")
                {
                    std::cout << "The name of the class is: " << MyTest::NAME << "\n";
                    std::cout << "The current DEBUG level is: " << debug_level << "\n";
                    printf("FULL DETAILS\n");
                    foo1.setDebug(debug_level);
                } else
            // PARTIAL level prints out debug level then passes level to MyTest class
                 if(debug_level == "PARTIAL")
                {
                    std::cout << "The current DEBUG level is: " << debug_level << "\n";
                    printf("PARTIAL DETAILS\n");
                    foo1.setDebug(debug_level);
                } else
            // BRIEF level prints out debug level then passes level to MyTest class
                 if(debug_level == "BRIEF")
                 {
                    std::cout << "The current DEBUG level is: " << debug_level << "\n";
                    printf("BRIEF DETAILS\n");
                    foo1.setDebug(debug_level);
                 } else
            // default NONE status that prints out no debug level and passes that to MyTest class
                 if(debug_level == "NONE")
                 {
                    cout << "The current DEBUG level is: " << debug_level << "\n";
                    foo1.setDebug(debug_level);
                 } else
            // If debug option does not match options avalible will print error and explain options
                 {
                    std::cout << "Unknown option: Please enter in valid DEBUG option [FULL, PARTIAL, BRIEF, NONE]" << "\n";
                 }
      
       } else
       // checks that debug argument is correctly given
       {
            std::cout << "Warning: Not a valid argument try -debug" << "\n";
       }
        
  }
