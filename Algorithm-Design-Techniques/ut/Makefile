CXX = g++
CC = gcc

LDFLAGS  = -lgmock -lgmock_main -lgtest -lgtest_main -lpthread 

OBJ_DIR = ./obj

CC_SRC = ../c_src/palindrome.c
CC_OBJ = $(OBJ_DIR)/palindrome.o

#CXX_SRC = ../cxx_src/
#CXX_OBJ = $(OBJ_DIR)/

UT_SRC = ut_palindrome.cc
UT_OBJ = $(OBJ_DIR)/ut_palindrome.o

UT_RESULT = ut_algorithm

all : clean prepare $(UT_RESULT) run

.PHONY : prepare
prepare:
	@if [ ! -d $(OBJ_DIR)  ];then mkdir $(OBJ_DIR); fi


$(UT_RESULT) : $(UT_OBJ) $(CC_OBJ) #$(CXX_SRC)
	$(CXX) -o $@ $^ $(LDFLAGS)

#c_src
$(CC_OBJ) : $(CC_SRC)
	$(CC) -c $(CC_SRC) -o $(CC_OBJ)

#cxx_src
$(CXX_OBJ) : $(CXX_SRC)
	$(CXX) -c $(CXX_SRC) -o $(CXX_OBJ)

#ut
$(UT_OBJ) : $(UT_SRC)
	$(CXX) -c $(UT_SRC) -o $(UT_OBJ)

.PHONY : run
run :
	-./$(UT_RESULT)

clean :
	rm -rf $(OBJ_DIR)
	rm -rf $(UT_RESULT)