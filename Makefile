CFLAGS = -Wall -g `pkg-config --cflags glib-2.0 gobject-2.0`

LDFLAGS = `pkg-config --libs glib-2.0 gobject-2.0`

EXEC =  kitty

SRC =  main.c animal_cat.c animal_tiger.c animal_predator.c animal_lion.c

OBJ =  main.o animal_cat.o animal_tiger.o animal_predator.o animal_lion.o

$(EXEC): $(OBJ)
	 $(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS)

%.o: %.c
	 $(CC) -c -o $@ $< $(CFLAGS)

.PHONY: clean

clean:
	 rm -f $(OBJ) $(EXEC)