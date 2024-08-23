#include<stdio.h>
int main()
{
    int score=0;
    int answer;

    printf("Welcome to the quiz game!");

    //Question 1
    printf("\n1.What is the capital of india ?\n");
    printf("1) Chennai\n");
    printf("2) Delhi\n");
    printf("3) Nagpur\n");
    printf("4) Mumbai\n");

    printf("\n Enter your answer(1-4):");
    scanf("%d",&answer);

    if(answer == 2)
    {
        printf("Correct!");
        score++;
    }
    else
    {
        printf("Incorrect! The correct answer is Delhi.");
    }

    //Question 2
    printf("\n2.What is the national animal of india ?\n");
    printf("1) Lion\n");
    printf("2) Leopard\n");
    printf("3) Horse\n");
    printf("4) Tiger\n");

    printf("\n Enter your answer(1-4):");
    scanf("%d",&answer);

    if(answer==4)
    {
        printf("Correct!");
        score++;
    }
    else
    {
        printf("Incorrect! The correct answer is Tiger.");
        
    }

    //Question 3
    printf("\n3.Which planet is known as red planet ?\n");
    printf("1) Mars\n");
    printf("2) Jupitar\n");
    printf("3) Earth\n");
    printf("4) Saturn\n");

    printf("\n Enter your answer(1-4):");
    scanf("%d",&answer);

    if(answer==1)
    {
        printf("Correct!");
        score++;
    }
    else
    {
        printf("Incorrect! The correct answer is Mars.");
    }


    //Final score
    printf("\n Your final score is:%d out of 3 \n",score);

    if(score==3)
    {
        printf("Excellent! You got all answers right!\n");
    }
    else if(score==2)
    {
        printf("Good job! You got 2 out of 3 correct!\n");
    }
    else if(score==1)
    {
        printf("You got 1 correct better luck next time.\n");
    }
    else
    {
        printf("You didn't get any correct.Try again!");
    } 
    return 0;
}