all:
	mkdir sin/
	cd src/ && make
	cd src/ && make clean
clean:
	rm -r sin
run:
	cd sin && ./sinx


