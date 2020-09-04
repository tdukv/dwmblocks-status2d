PREFIX ?= /usr/local
CC ?= cc

output: dwmblocks.c blocks.def.h blocks.h
	${CC} `pkg-config --cflags x11 --libs x11` dwmblocks.c -o dwmblocks

clean:
	rm -f *.o *.gch dwmblocks

install: output
	mkdir -p $(DESTDIR)$(PREFIX)/bin/dwmblocks
	cp -f dwmblocks $(DESTDIR)$(PREFIX)/bin/dwmblocks
	cp -f blocks/sh/dwmblocks* $(DESTDIR)$(PREFIX)/bin/dwmblocks
	cp -f blocks/bash/dwmblocks* $(DESTDIR)$(PREFIX)/bin/dwmblocks
	cp -f monitors/dwmblocks* $(DESTDIR)$(PREFIX)/bin/dwmblocks
	sed "s|PREFIX|${PREFIX}|g" < statusbar > $(DESTDIR)$(PREFIX)/bin/statusbar
	chmod 755 $(DESTDIR)$(PREFIX)/bin/dwmblocks/dwmblocks*
	chmod 755 $(DESTDIR)$(PREFIX)/bin/statusbar

uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dwmblocks/dwmblocks*
	rm -f $(DESTDIR)$(PREFIX)/bin/statusbar
	rmdir $(DESTDIR)$(PREFIX)/bin/dwmblocks
