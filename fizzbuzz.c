#include <stdio.h>

//再起+三項演算子
void showFizzBuzz(int num){
  (num > 1)?showFizzBuzz(num - 1):"";
  (num%15 == 0)?puts("FizzBuzz"):((num%3 == 0)?puts("Fizz"):((num%5 == 0)?puts("Buzz"):printf("%d\n",num)));
}

//if+三項演算子
void showFizzBuzz2(int num){
  int i;
  for(i=1;i<=num;i++){
    (i%15 == 0)?puts("FizzBuzz"):((i%3 == 0)?puts("Fizz"):((i%5 == 0)?puts("Buzz"):printf("%d\n",i)));
  }
}

//if+for
void showFizzBuzz3(int num){
  int i;
  for(i=1;i<=num;i++){
    if(i%15 == 0){
      puts("FizzBuzz");
    }else if(i%3 == 0){
      puts("Fizz");
    }else if(i%5 == 0){
      puts("Buzz");
    }else{
      printf("%d\n",i);
    }
  }
}

//switch+for
void showFizzBuzz4(int num){
  int i;
  for(i=1;i<=num;i++){
    switch(i%15){
      case 0:
        puts("FizzBuzz");
        break;
      case 3:
        puts("Fizz");
        break;
      case 5:
        puts("Buzz");
        break;
      case 6:
        puts("Fizz");
        break;
      case 9:
        puts("Fizz");
        break;
      case 10:
        puts("Buzz");
        break;
      case 12:
        puts("Fizz");
        break;
      default :
        printf("%d\n", i);
    }
  }
}

int main(){
  int num;
  puts("整数を入力してください。");
  scanf("%d",&num);
  puts("----------");
  showFizzBuzz(num);
  return 0;
}