/*Write a program in C that computes and prints out the first six digits 
in the Fibonacci sequence. You will need to look up the definition of the Fibonacci sequence 
if you don't know it. The first two numbers in the sequence are 0 and 1, but your program should
compute the next four digits. Turn in your C program. Your C program must compile in order for it to be tested.*/

public int fibonacci(int index){
        if(n == 0 || n == 1) 
            return 1;
        return fibonacci(n-1) + fibonacci(n-2);
}

void main() {
    int i;
    for(i = 0; i < 6; i++) {
        if(i == 5) {
            printf("%i", fibonacci(i));
            break; }            
        printf("%i, ", fibonacci(i));
    }
}
