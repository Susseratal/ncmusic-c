ncm: ncm.o
	g++ ncm.o -o ncm -lncurses
	@ls --color

ncm.o: ncm.cpp
	g++ -c ncm.cpp

clean:
	@rm *.o ncm
	@ls --color

install:
	@echo "making..."
	make
	sudo mv ncm /usr/bin
	@rm *.o
	@ls --color

uninstall:
	@echo "uninstalling..."
	sudo rm /usr/bin/ncm
	@ls --color
