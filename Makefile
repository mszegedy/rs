CC=g++
CFLAGS=-c -Wall
LDFLAGS=-lSDL -lSDL_image
SOURCES=./engine.cc ./math/Vec.cc
OBJECTS=$(SOURCES:.cc=.o)
EXECUTABLE=game

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) -o $@ $(OBJECTS) $(LDFLAGS)
%.o: %.cc
	(cd $(dir $<); $(CC) $(CFLAGS) $(patsubst %.o,%.cc,$(notdir $<)))
clean:
	find . -name *.o -print0 | xargs -0 rm
