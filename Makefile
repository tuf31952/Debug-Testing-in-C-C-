# define a target for the application
#
all: MyTest.exe
#
mytest.exe: mytest.cc mytest_00.cc
  g++ -g -O2 -lm mytest.cc mytest_00.cc -o mytest.exe
#
mytest.o: mytest.cc mytest.h Makefile
  g++ -O2 -c mytest.cc -o mytest.o
#
mytest_00.o: mytest_00.cc mytest.h Makefile
  g++ -O2 -c mytest_00.cc -o mytest_00.o
#
clean:
  rm -f mytest.o mytest_00.o mytest.exe
  #
  # end of file