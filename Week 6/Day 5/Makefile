#GNU make default shell is sh, set it to bash
SHELL := /bin/bash

OBJECTS = dict.o file-operations.o directory-operations.o
HEADERS = file-operations.h directory-operations.h
CFLAGS  = -Wall

FILE_OPER = file-operations.c file-operations.h
DIR_OPER = directory-operations.c directory-operations.h


#.PHONY avoids conflicts with files in the directory

.PHONY: all
all : mydict

mydict: $(OBJECTS)
	cc -o mydict $(CFLAGS) $(OBJECTS)
	
dict.o: dict.c $(HEADERS)
	cc -c $(CFLAGS) dict.c

file-operations.o: $(FILE_OPER)
	cc -c $(CFLAGS) file-operations.c

directory-operations.o: $(DIR_OPER)
	cc -c $(CFLAGS) directory-operations.c

.PHONY: clean
clean:
	rm -f $(OBJECTS)

#run the install.sh script
.PHONY: install
install: install.sh
	source install.sh
	






