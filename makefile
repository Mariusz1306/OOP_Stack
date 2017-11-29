main: main.o stack.o
	gcc -Wall $^ -o $@

stack.o: stack.c stack.h
	gcc -c -Wall $< -o $@

main.o: main.c stack.h
	gcc -c -Wall $< -o $@

.PHONY: clean

clean:
	-rm stack.o main.o main
