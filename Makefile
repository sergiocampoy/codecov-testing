.PHONY: all clean precompile compile run coverage report

BLU=\n\033[34;3m
RST=\033[00m

all: compile run coverage report

clean:
	@echo "$(BLU)Cleaning...$(RST)"
	rm -rf *.gcda *.gcno *.gcov *.out *.o coverage.info out

precompile:
	@echo "$(BLU)Compiling source...$(RST)"
compile: precompile main.out

run: compile
	@echo "$(BLU)Running program...$(RST)"
	./main.out

coverage: run
	@echo "$(BLU)Generating coverage analytics...$(RST)"
	gcov -b -u module1
	gcov -b -u module2
	gcov -b -u main

report: coverage
	@echo "$(BLU)Generating html reports...$(RST)"
	lcov --capture --directory . --output-file coverage.info -rc lcov_branch_coverage=1
	genhtml coverage.info --output-directory out --branch-coverage

# Compile stuff
main.o: main.c
	gcc -fprofile-arcs -ftest-coverage -c main.c

module1.o: module1.c
	gcc -fprofile-arcs -ftest-coverage -c module1.c -I.

module2.o: module2.c
	gcc -fprofile-arcs -ftest-coverage -c module2.c -I.

main.out: main.o module1.o module2.o
	gcc -fprofile-arcs -ftest-coverage main.o module1.o module2.o -o main.out
