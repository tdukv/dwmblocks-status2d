PREFIX ?= /usr/local

output: dwmblocks.c blocks.h
	cc `pkg-config --cflags x11` `pkg-config --libs x11` dwmblocks.c -o dwmblocks
clean:
	rm -f *.o *.gch dwmblocks
install: output
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	cp -f dwmblocks $(DESTDIR)$(PREFIX)/bin
	cp -f blocks/sh/dwmblocks* $(DESTDIR)$(PREFIX)/bin
	cp -f blocks/bash/dwmblocks* $(DESTDIR)$(PREFIX)/bin
	cp -f monitors/dwmblocks* $(DESTDIR)$(PREFIX)/bin
	cp -f startdwmblocks $(DESTDIR)$(PREFIX)/bin
	chmod 755 $(DESTDIR)$(PREFIX)/bin/dwmblocks*
	chmod 755 $(DESTDIR)$(PREFIX)/bin/startdwmblocks
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dwmblocks*
	rm -f $(DESTDIR)$(PREFIX)/bin/startdwmblocks
