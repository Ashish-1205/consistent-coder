#include<simplecpp>

main_program
{
turtleSim();
repeat(4){
  repeat(4){
    repeat(4){forward(20); right(90);wait (1);}
    penUp();forward(30); penDown(); wait(1);
  }
  penUp(); forward(-120); right(90);wait(1); forward(30); right(270); penDown();wait(1);
}
wait(2);
}
