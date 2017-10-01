#include <sys/time.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char **argv){
	unsigned long int sec = time(NULL) + 3;
     while(1){
     	if (time(NULL) >= sec) {
     		break;
		}
     	system(argv[0]);
	 }
        return 0;
}

