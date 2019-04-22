
CC=gcc
CPP=g++
FC=gfortran

CFLAG=
CXXFLAG=
FCFLAG=

CLIBS=
CPPLIBS=
FLIBS=

OPTION=


PROGRAM= test


$(PROGRAM):
	$(FC) -c $(FCFLAGS) @< 

*.f:
	$(FC) -c $(FCFLAGS) @< 

*.c:
	$(CC) -c $(FCFLAGS) @< 

*.cpp:
	$(CPP) -c $(FCFLAGS) @< 

*.C:
	$(CPP) -c $(FCFLAGS) @< 

*.c:
	$(FC) -c $(FCFLAGS) @< 

test:
	$(FC) -c $(FCFLAGS) @< 


install:
	$(FC) -c $(FCFLAGS) @< 

.PHONY:test,install


