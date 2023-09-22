/*
    @author Leviathenn
*/
#include <stdio.h>
#include <stdlib.h>


void string2hexString(char* input, char* output)
{
    int loop;
    int i;

    i = 0;
    loop = 0;

    while (input[loop] != '\0') {
        sprintf((char*)(output + i), "%02X", input[loop]);
        loop += 1;
        i += 2;
    }
    //insert NULL at the end of the output string
    output[i++] = '\0';
}



int main(int argc, char const *argv[]){
    

    float SectionHeader[] = {0x2e,0x53,0x45,0x43,0x54,0x49,0x4f,0x4e,0x20,0x4f,0x44,0x4f,0x48,0x45,0x41,0x44,0x45,0x52};

    char* inputD = "Hello, World!";
    char* outputD;

    string2hexString(inputD, outputD);

    puts(outputD);    
    

    
    return 0;
}