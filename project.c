/*

 INPUTE 1 = rock, 2 = paper, 3 = scissor

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int comCho, yourCho;
  srand(time(0));
  comCho= rand()%3+1;
  scanf("%d", &yourCho);
    if(yourCho == 1) {
        printf("you choose rock\n");
    }
    else if(yourCho == 2) {
        printf("you choose paper\n");
    }
    else if(yourCho == 3){
        printf("you choose scissor\n");
    }
    else{
        printf("plzz enter a number between 1-3\n");
    }
if(yourCho>0){
    if(comCho==1 && yourCho <=3){
      printf("compailer choose rock\n");
      if(comCho==1 && yourCho==1){
        printf("draw\n\n");
      }
      else if(comCho==1 && yourCho==2){
          printf("you win\n");
      }
      else if(comCho==1 && yourCho==3){
          printf("you lose\n");
      }
    }
    if(comCho==2 && yourCho <=3 ){
      printf("compailer choose paper\n");
      if(comCho==2 && yourCho==1){
        printf("you lose\n");
      }
      else if(comCho==2 && yourCho==2){
          printf("draw\n");
      }
      else if(comCho==2 && yourCho==3){
          printf("you win\n");
      }
    }
    if(comCho==3 && yourCho <=3){
      printf("compailer choose scissor\n");
      if(comCho==3 && yourCho==1){
        printf("you win\n");
      }
      else if(comCho==3 && yourCho==2){
          printf("you lose\n");
      }
      else if(comCho==3 && yourCho==3){
          printf("draw\n");
      }
    }
}
    return 0;
}