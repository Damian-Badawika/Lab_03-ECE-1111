// file: /data/courses/ece_1111/current/labs/lab_03/badawika_damian/
//

#include<stdio.h>
//Local include files
//

int main(int argc, char** argv) {
  //Print top of table and table headers
  //
  fprintf(stdout,"--------------------------\n");
  fprintf(stdout,"| Dec | Hex | Oct | Char |\n");
  //Loop to print ASCII charachters for decimal values 0 - 256
  //
  for(long i = 0; i < 256;i++) {
    //values under 32 and above 126 can't be printed in the terminal, so print n/a
    //
    if(i < 33 || i> 126){
      fprintf(stdout,"| %4d | %3x | %3o | N/A |\n", i, i, i, i);
    }
    //Print decimal, hexadecimal, octal decimal, and character values for all other values
    //
    else {
      fprintf(stdout,"| %4d | %3x | %3o | %c |\n", i, i, i, i);
    }
  }
  //Print bottom of table
  //
  fprintf(stdout,"--------------------------\n");
  //Exit gracefully
  //
  return(0);
}
