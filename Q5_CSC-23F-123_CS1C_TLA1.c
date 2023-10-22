#include <stdio.h>
#include <math.h>
int armStrong()
{
  int number1, number2, number3, input, sum_arm = 0, reminder_arm, reminder_cube, original_input_value;
  printf("enter your three Digits number \n");
  scanf("%d", &input);
  original_input_value = input;

  number1 = input / 100;
  number2 = (input / 10) % 10;
  number3 = input % 10;

  if (input >= 100 && input < 1000)
  {

    while (input > 0)
    {
      reminder_arm = input % 10;
      sum_arm = sum_arm + (reminder_arm * reminder_arm * reminder_arm);
      input = input / 10;
    }
    if (original_input_value == sum_arm)
    {
      printf("%d\n %d\n %d\n ", number1, number2, number3);
      printf("This is ArmStrong Number");
    }
    else
    {

      printf("This is not ArmStrong Number");
    }
  }
  else
  {
    printf("error");
  }
}

int digitSum()
{
  int num1, sum_of_number = 0, square, cube, reminder_num;

  printf("enter four digit number number \n");
  scanf("%d", &num1);
  while (num1 > 0)
  {
    reminder_num = num1 % 10;
    sum_of_number = sum_of_number + reminder_num;
    num1 = num1 / 10;
  }

  square = pow(sum_of_number, 2);
  cube = pow(sum_of_number, 3);

  if (sum_of_number % 2 == 0)
  {
    printf("the number is %d and the square is %d", sum_of_number, square);
  }
  else
  {

    printf("the number is %d and the cube is %d", sum_of_number, cube);
  }

  return 0;
}

int swapNumber()
{
  int num1, num2;
  printf("enter num1 \n");
  scanf("%d", &num1);
  printf("enter num2 \n");
  scanf("%d", &num2);
  printf("num1 before swapping %d \n", num1);
  printf("num2 before swapping %d \n", num2);

  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;

  printf("num1 after swapping %d \n", num1);
  printf("num2 after swapping %d \n", num2);
  return 0;
}

int reverse()
{
  int number, reminder, reverse = 0;
  printf("enter a number ");
  scanf("%d", &number);
  if (number < 10)
  {
    printf("enter a number atleast two characte");
  }
  else
  {
    while (number != 0)
    {
      reminder = number % 10;
      reverse = reverse * 10 + reminder;
      number = number / 10;
    }

    printf("%d", reverse);
  }

  return 0;
}

int main()
{
  int x;

  printf("1- Armstrong number \n");
  printf("2- Digit Sum\n");
  printf("3- Swap Number \n");
  printf("4-Reverse num \n");
  printf("enter your number");
  scanf("%d", &x);

  switch (x)
  {
  case 1:
    armStrong();
    break;
  case 2:
    digitSum();
    break;
  case 3:
    swapNumber();
    break;
  case 4:
    reverse();
    break;

  default:
    printf("please enter the above number\n");

    // code block
  }
}
