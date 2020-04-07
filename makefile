# Modified from Professor Thomas Kennedy's standard makefile
MAINPROG=observer
CPPS= main.cpp ForecastDisplay.cpp Observable.cpp WeatherData.cpp
TEST_CPPS=
DIR=${PWD}
ASST=$(notdir ${DIR})
ifneq (,$(findstring MinGW,$(PATH)))
DISTR=MinGW
EXE=.exe
LFLAGS=
else
DISTR=Unix
EXE=
LFLAGS=-fsanitize=leak,address -fuse-ld=gold
endif
#
########################################################################
# Macro definitions for "standard" C and C++ compilations
#
CPPFLAGS=-g -std=c++11 -D$(DISTR) -Wall -Wextra -Wpedantic
CFLAGS=-g
TARGET=$(MAINPROG)$(EXE)
LINK=g++ $(CPPFLAGS)
#
CC=gcc
CPP=g++
#
#
#  In most cases, you should not change anything below this line.
#
#  The following is "boilerplate" to set up the standard compilation
#  commands:
#


OBJS=$(CPPS:%.cpp=%.o)
DEPENDENCIES = $(CPPS:%.cpp=%.d)


%.d: %.cpp
	touch $@

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -MMD -o $@ -c $*.cpp

#
# Targets:
#
win: $(OBJS)
	$(LINK) $(FLAGS) -o $(TARGET) $(OBJS)

$(TARGET): $(OBJS)
	$(LINK) $(FLAGS) -o $(TARGET) $(OBJS) $(LFLAGS)


clean:
	-/bin/rm -f *.d *.o $(TARGET) $(TEST_TARGET)



make.dep: $(DEPENDENCIES)
	-cat $(DEPENDENCIES) > $@

include make.dep