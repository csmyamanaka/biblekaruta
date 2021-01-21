# Bible Karuta Game - Makefile
# M. Yamanaka
# email: myamanaka@live.com
# website: csmyamanaka.com
# license: MIT (See included "LiCENSE" file for details)

CC=gcc
LFLG=-lSDL2
FILES=main.c biblekaruta.c crosshair.c
OUT=BibleKaruta

all: $(OUT)

$(OUT): $(FILES)
	$(CC) $^ $(LFLG) -o $@

clean:
	rm -f $(OUT)
