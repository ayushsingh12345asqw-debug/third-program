#include<stdio.h>
int main ()
{
    int secret=25;
    int guess;
int attempt = 0;
printf("====NUMBER GUESSING GAME\n");
printf("Guess a number between 1 to 50:");
scanf("%d", &guess);
while (guess != secret)
{
 attempt++;
if (guess > secret)
{
    printf("To HIGH! Try Again.\n");         }
else
{
  printf("Too Low! Try Again.\n");
}
printf("\nGuess a number between 1 and 50:");
scanf("%d", &guess);
}
attempt++;
printf("\nCongratulations! You guessedthe correct number.\n");
printf("Total Attempt : %d\n", attempt);
printf("==== GAME OVER ====");
return 0;
}