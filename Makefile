# C++ Compiler (Default: g++)
CXX = g++
CFLAGS = -Wall -Werror -std=c++11

# Librarys
INCLUDE = -I/usr/local/include -Iinclude
LDFLAGS = -L/usr/local/lib 
LDLIBS = -lcurl

# Details
SOURCES = src/*.cpp
OUT = asxquery
OUT_DIR = bin/

$(OUT_DIR):
	mkdir -p $@ && echo $(PREFIX)

.PHONY: clean
clean: 
	rm -rf bin/

all: clean $(OUT_DIR) build

build: $(SOURCES)
	$(CXX) -o $(OUT_DIR)$(OUT) $(INCLUDE) $(CFLAGS) $(LDFLAGS) $(LDLIBS) $(SOURCES)
