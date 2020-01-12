#include<stdio.h>
#include<string.h>


int getwords(char *base , char target[100][200]){

int n=0,i=0,j=0;
 for(i=0;1;i++){
 if(base[i]!=' ') target[n][j++]=base[i];
else if(base[i]==' '|| base[i]=='('){ target[n][j++]='\0';
 n++; j=0;
} if (base[i]=='\0')break;
}

if(n==0) return 1;
return n;
}

int main(){

FILE *fp=fopen("D:\WORK\20184058\program.txt","r");

char babe[100];
char target[100][200];
int  key[34]={0};

while(fgets(babe,sizeof(babe),fp)!=NULL){

int i,n = getwords(babe,target);
for(i=0;i<n;i++){ strcpy(babe,target[i]);

printf("%s\n",babe);
if(babe=="void") key[0]++;

if(babe=="default") key[1]++;

if(babe=="if") key[2]++;

if(babe=="else") key[3]++;

if(babe=="for") key[4]++;

if(babe=="while") key[5]++;

if(babe=="sizeof") key[7]++;

if(babe=="continue") key[8]++;

if(babe=="break") key[9]++;

if(babe=="int") key[10]++;

if(babe=="double") key[11]++;

if(babe=="do") key[12]++;

if(babe=="switch") key[13]++;

if(babe=="case") key[14]++;

if(babe=="float") key[15]++;

if(babe=="char") key[16]++;
}
}

fclose(fp);

printf("void is %d times\n",key[0]);
printf("char is %d times\n",key[16]);
printf("float is %d times\n",key[15]);
printf("case is %d times\n",key[14]);
printf("switch is %d times\n",key[13]);
printf("do is %d times\n",key[12]);
printf("double is %d times\n",key[11]);
printf("int is %d times\n",key[10]);
printf("break is %d times\n",key[9]);
printf("continue is %d times\n",key[8]);
printf("sizeof is %d times\n",key[7]);
printf("while is %d times\n",key[5]);
printf("for is %d times\n",key[4]);
printf("else is %d times\n",key[3]);
printf("if is %d times\n",key[2]);
printf("default is %d times\n",key[1]);

return 0;
}
