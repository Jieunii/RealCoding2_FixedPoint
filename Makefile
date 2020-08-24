SRCS := $(wildcard *.c)
OBJS := $(SRCS:.c=.o)

CC := gcc
CFLAGS = -Wall -g -Iheaderfile -lm -D_FX_SYSTEM=_FX_S4716 -D_FX_CALCULATION_TYPE=_FX_DOUBLE
SYSTEM := _FX_S4716
TYPE := _FX_DOUBLE

fx_ajou : $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS) -D_FX_SYSTEM=$(SYSTEM) -D_FX_CALCULATION_TYPE=$(TYPE)

clean: 
	-rm $(OBJS)
	-rm fx_ajou

dep:
	gccmakedep $(SRCS)
