#include<stdio.h>
#include<stdlib.h>

int countI[32];

const char *keywords[] = {
    "auto", 
    "break", 
    "case", 
    "char", 
    "continue", 
    "do", 
    "default", 
    "const", 
    "double", 
    "else", 
    "enum", 
    "extern", 
    "for", 
    "if", 
    "goto", 
    "float", 
    "int", 
    "long", 
    "register", 
    "return", 
    "signed", 
    "static", 
    "sizeof", 
    "short", 
    "struct", 
    "switch", 
    "typedef", 
    "union", 
    "void", 
    "while", 
    "volatile", 
    "unsigned"
};


int isKey(char* str)
{
    
int i=0;

for(i;i<32;i++)
{
    if(strcmp(str,keywords[i])==0)
        {
            countI[i] += 1;
            return 1;
        }   
}
}





int main()
{

FILE *fptr ;

fptr = fopen("program.txt","r");

char str[32];

int count = 0;
int i =0;
for(i;i<32;i++)
countI[i]=0;

while(fscanf(fptr,"%s",str) != -1){
    int j = isKey(str);             
    
}

for(i=0;i<32;i++)
printf("%s %d \n",keywords[i],countI[i]);

}
