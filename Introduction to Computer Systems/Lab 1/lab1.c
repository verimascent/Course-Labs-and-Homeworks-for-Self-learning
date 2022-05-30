#include <stdio.h>

// 1. Given the following variable declaration and initialization, show
// how you can use 3 different format strings in printf to display that
// display the value of val in different ways.
void question1(){
  int val;
  val = 97;

  printf("Question 1: my answer to question 1 is:\n");
  printf("%*s(1)You can use %%d to display signed decimal integer: %d.\n",
    4, "", val);
  printf("%*s(2)You can use %%i to display signed decimal integer: %i.\n",
    4, "", val);
  printf("%*s(3)You can use %%u to display unsigned decimal integer: %u.\
    \n\n", 4, "", val);
}

// 2. What is the maximum value that can be stored in a C unsigned int
// variable(unsigned)?
void question2(){
  unsigned int val2 = 0;
  int size;
  size = sizeof(val2);
  for (int unsigned i = 0, count = 1; i < size * 8; i++)
  {
    val2 += count;
    count *= 2;
  }

  printf("Question 2: my answer to question 2 is: %u.\n", val2);
  printf("%*sThe size of unsigned integer is %d bytes.\n", 4, "", size);
  printf("%*sThis answer can be verified by examining the result of the \
expression:\n", 4, "");
  printf("%*s%u + 1 = %u\n", 8, "", val2, val2 + 1);
  printf("%*sThis expression overflows. So %u must be the maximum.\n\n",
    4, "", val2);
}

// 3. What is the maximum positive value that can be stored in a C int
// variable(signed)?
void question3(){
  int val3 = 0;
  int size = sizeof(val3);
  for (int i = 0, count = 1; i < size * 8 - 1; i++)
  {
    val3 += count;
    count *= 2;
  }

  printf("Question 3: my answer to question 3 is: %d.\n", val3);
  printf("%*sThe size of unsigned integer is %d bytes.\n", 4, "", size);
  printf("%*sThis answer can be verified by examining the result of the \
expression:\n", 4, "");
  printf("%*s%d + 1 = %d\n", 8, "", val3, val3 + 1);
  printf("%*sThis expression overflows. So %d must be the maximum.\n\n",
    4, "", val3);
}

// 4. What arithmetic operation is equivalent to left shifting an
// unsigned int value by 1?
void question4(){
  int unsigned val4 = 1;
  int unsigned val4_2 = val4 << 1;
  int multiple = val4_2 / val4;

  printf("Question 4: my answer to question 4 is: multiply by %d.\n",
    multiple);
  printf("%*sThis can be verified by examining the result of the \
expression: (x << 1) / x. \n", 4, "");
  printf("%*swhen x is the unsigned %d, shift it left by 1. It becomes \
%d.\n", 4, "", val4, val4_2);
  printf("%*s%d / %d == %d, which is the exact answer.\n\n", 4, "",
    val4_2, val4, multiple);
}

// 5. What arithmetic operation is equivalent to left shifting an
// unsigned int value by 2?
void question5(){
  int unsigned val5 = 1;
  int unsigned val5_2 = val5 << 2;
  int multiple = val5_2 / val5;

  printf("Question 5: my answer to question 5 is: multiply by %d.\n",
    multiple);
  printf("%*sThis can be verified by examining the result of the \
expression: (x << 2) / x. \n", 4, "");
  printf("%*swhen x is the unsigned %d, shift it left by 2. It becomes \
%d.\n", 4, "", val5, val5_2);
  printf("%*s%d / %d == %d, which is the exact answer.\n\n", 4, "",
    val5_2, val5, multiple);
}

// 6. What arithmetic operation is equivalent to right shifting an
// unsigned int value by 1?
void question6(){
  int unsigned val6 = 4;
  int unsigned val6_2 = val6 >> 1;
  int multiple = val6 / val6_2;

  printf("Question 6: my answer to question 6 is: divide by %d.\n",
    multiple);
  printf("%*sThis can be verified by examining the result of the \
expression: (x >> 1) / x. \n", 4, "");
  printf("%*swhen x is the unsigned %d, shift it right by 1. It becomes \
%d.\n", 4, "", val6, val6_2);
  printf("%*s%d / %d == %d, which is the exact answer.\n\n", 4, "",
    val6, multiple, val6_2);
}

int main() {
  question1();
  question2();
  question3();
  question4();
  question5();
  question6();
  return 0;
}
