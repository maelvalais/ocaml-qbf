
PICOSAT=picosat-960/
QUANTOR=quantor-3.2/

all:
	cd "$(PICOSAT)" ; ./configure ; make
	cd "$(QUANTOR)" ; ./configure --picosat="../$(PICOSAT)" ; make

clean:
	make -C "$(PICOSAT)" clean
	make -C "$(QUANTOR)" clean

.PHONY: all clean
