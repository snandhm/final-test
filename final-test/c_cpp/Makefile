main：main.o my_stack.o 
gcc -o $@ $^
main.o：main.c my_stack.h 
gcc -c $<
my_stack.o：my_stack.c my_stack.h
gcc -c $<
clean :
         -rm main main.o my_stack.o mytool2.o
