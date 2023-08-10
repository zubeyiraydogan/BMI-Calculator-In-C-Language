#include <stdio.h>
#include <math.h>
/* to run the project type "make zubeyir" and then type "./zubeyir"in the terminal*/
/*Made By Zubeyir Aydogan*/
int main(void)
{
float height, weight, bmi;
printf("Wellcome, We're Trying To Figure Out What Is Your BMI And Make It Optimal For Being Fit, So Just Answer What We Asking Then We Will Give You Some Tips To Be Healthy\n");

printf("Enter Your Height(Meter):\n "); scanf("%f", &height);
printf("Enter Your Weight:\n "); scanf("%f", &weight);
bmi = weight / (height * height);

  if(bmi < 18.5)
    {
        printf("Your Body Mass Index Is %f \n", bmi);
        printf("Your BMI classification is: Underweight\n");
        printf("Health Risk: Minimum\n");
        printf("You Should: Eat Foods That Contains More Calories Or Eat More So That Your Body Has Enough Energy To Gain Weight\n");
    }
    else if(bmi >= 18.6 && bmi <= 24.9)
    {
        printf("Your Body Mass Index Is %f \n", bmi);
        printf("Your BMI classification is: Normal\n");
        printf("Health Risk: Minimum\n");
        printf("You Should: Maintain Your Body Weight And If You Excersize You Can Add A Little Surplus Calories(100-200 Extra Calories) To Gain Weight But Thats Gonna Be Muscle Gain Not Fat \n");
    }


    else if(bmi >= 25 && bmi <= 29.9)
    {
        printf("Your Body Mass Index Is %f \n", bmi);
        printf("Your BMI classification is: Overweight\n");
         printf("Health Risk: Increased\n");
          printf("You Should: Eat Less Calories Than You Burn, Doing Excersizes Like Weightlifting, Running, Cardio\n");
    }
    else if(bmi >= 30 && bmi <= 34.9)
    {
        printf("Your Body Mass Index Is %f \n", bmi);
        printf("Your BMI classification is: Obese\n");
        printf("Health Risk: High\n");
        printf("You Should: Eat Less Calories Than You Burn, Doing Excersizes Like Weightlifting, Running, Cardio\n");
    }
    else if(bmi >= 35 && bmi <= 39.9)
    {
        printf("Your Body Mass Index Is %f \n", bmi);
        printf("Your BMI classification is: Severely Obese\n");
        printf("Health Risk: Very High\n");
        printf("You Should: Eat Less Calories Than You Burn, Doing Excersizes Like Weightlifting, Running, Cardio\n");
    }

    else if(bmi >= 40 && bmi <= 210)
    {
        printf("Your Body Mass Index Is %f \n", bmi);
        printf("Your BMI category is: Morbidly Obese\n");
          printf("Health Risk: Extremely High\n");
           printf("You Should: Eat Less Calories Than You Burn, Doing Excersizes Like Weightlifting, Running, Cardio\n");
    }
    else
    {
        printf("Please Enter An Integer\n");
    }

    return 0;
}
