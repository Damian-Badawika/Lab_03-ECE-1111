//file: /data/courses/ece_1111/current/labs/lab_03/badawika_damian/mycat_02.cc
//

//Local include files
//
#include<stdio.h>

//This program prints each character of a file, similar to the Unix command "cat"
//
int main(int argc, char** argv){
  //Define variables
  //
  FILE*fp = fopen(argv[1],"r");

  char c;
  //Print each character of the file until it reaches the end of the file
  //
  while(c !=EOF){
    c = fgetc(fp);
    fprintf(stdout,"Next Character= %c\n",c);
  }
  //Close the file
  //
  fclose(fp);
  //Exit gracefully
  //
 return(0);
}
