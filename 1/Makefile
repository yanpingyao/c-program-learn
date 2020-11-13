SRC :=$(wildcard *.c)
OBJ :=$(patsubst %.c, %.o,$(wildcard *.c)) 
BIN :=$(patsubst %.o, %, $(OBJ))
#CXXFLAGS+=-std=c++11
#LDLIBS+=-lstdc++
all: $(BIN)
BIN: $(OBJ)
OBJ: $(SRC)
.PYTHON: clean cleanobj
clean: cleanobj;-rm -f $(BIN)
cleanobj: ;-rm -f $(OBJ)
