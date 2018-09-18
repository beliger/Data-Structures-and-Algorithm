CXX = g++
CC = gcc

LDFLAGS  = -lgmock -lgmock_main -lgtest -lgtest_main -lpthread 
CXXFLAGS = -std=c++11

OBJ_DIR = ./obj

CC_OBJ = $(OBJ_DIR)/palindrome.o
		
CXX_OBJ = $(OBJ_DIR)/possible_combine.o \
			$(OBJ_DIR)/cxx_palindrome.o

UT_OBJ = $(OBJ_DIR)/ut_palindrome.o \
			$(OBJ_DIR)/ut_possible_combine.o

UT_RESULT = ut_algorithm

all : clean prepare $(UT_RESULT) run

.PHONY : prepare
prepare:
	@if [ ! -d $(OBJ_DIR)  ];then mkdir $(OBJ_DIR); fi


$(UT_RESULT) : $(CC_OBJ) $(CXX_OBJ) $(UT_OBJ)  
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

#c_src
$(OBJ_DIR)/%.o : ../c_src/%.c
	$(CC) -c $< -o $@

#cxx_src
$(OBJ_DIR)/%.o : ../cxx_src/%.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

#ut
$(OBJ_DIR)/%.o : %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY : run
run :
	-./$(UT_RESULT)

clean :
	rm -rf $(OBJ_DIR)
	rm -rf $(UT_RESULT)