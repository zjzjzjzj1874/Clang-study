CC := gcc
ECHO := @echo

INCLUDE_DIR := -Isrc/base

CFLAGS := 
CFLAGS += $(INCLUDE_DIR)
CFLAGS += -Wall

SOURCES := main.c
SOURCES += src/base/func.c
SOURCES += src/base/ptr.c

EXEC := main

OBJS := $(patsubst %.c, %.o, $(SOURCES))

all : $(EXEC)

$(EXEC) : $(OBJS)
    # $(ECHO) Linking: $@
	$(CC) -o $@ $^

%.o : %.c
    # $(ECHO) Compiling: $@
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm $(OBJS)
	rm ${EXEC}