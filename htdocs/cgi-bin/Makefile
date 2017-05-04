CC = mipsel-openwrt-linux-gcc
CFLAGS = -O2 -Wall -I ..

all: cgiget_mine cgipost_mine 

cgiget_mine: cgiGetMine.c
	$(CC) $(CFLAGS) -o cgiget_mine cgiGetMine.c

cgipost_mine: cgiPostMine.c
	$(CC) $(CFLAGS) -o cgipost_mine cgiPostMine.c

clean:
	rm -f cgiget_mine cgipost_mine *~
