#include <stdio.h>
main()
{
	/*Here I am defining the variables that will be used in the game*/
	int score = 0;
	int answer;
	char name[30];

	/*Following lines will be the introduction the game*/
	printf("\n >> Welcome to a movie quiz!!");
	printf("\n >In this quiz, you will be given a series of 10 questions about movies released in these recent years that EVERYONE must have seen!");
	printf("\n >By the end of quiz, you will be given a score based on how many questions you have answered correctly!");
	printf("\n >>> May The Force Be With You... <<<");

	union Que  // Defining my union
	{
		char str[50];  // allowing strings up to 50 
	};

	int main()
	{
		union Que thanks;  // Calling on my union and naming it thanks
		strcpy(thanks.str, "Welcome to my very first calculator. Thank you for trying it out");  // creating a output
		printf("%s\n", thanks.str); // Pasting my output

	/*This line will allow the user to put an input, which will be there name*/
	printf("\nPlease enter your name:");
	scanf("%s", name);
	printf("\n Hello %s", name);
	printf("\n***********************Lets Begin*******************");

	/*These next lines will consist of the question, followed by the the answers available*/
	printf("\nQ(1). What is now the highest growssing movie ever?");
	printf("\n [1]The Lion King");
	printf("\n [2]Avengers Endgame");
	printf("\n [3]Titanic");
	printf("\n [4]Star Wars: The Force Awakens");

	/*These decisions will allow the user to earn points if the their answer is correct or lose points if their answer is wrong*/
	scanf("%d", &answer);
	if (answer == 2)
	{
		printf("That's Correct!\n");
		score = score + 3;
		;
	}
	else
	{
		printf("Wrong Answer\n");
		score = score - 1;
	}

	printf("\nQ(2). What was the name of the movie in which it was about the creation about facebook?\n");
	printf("\n [1]Zombieland");
	printf("\n [2]Good Fellas");
	printf("\n [3]Titanic");
	printf("\n [4]The Social Network");

	scanf("%d", &answer);

	if (answer == 4)
	{
		printf("That's Correct!\n");
		score = score + 3;
		;
	}
	else
	{
		printf("Wrong Answer\n");
		score = score - 1;
	}

	printf("\nQ(3). What movie did Gerard Butler not star in?\n");
	printf("\n [1]300");
	printf("\n [2]P.S. I Love You");
	printf("\n [3]Angel Has Fallen");
	printf("\n [4]Geostorm");

	scanf("%d", &answer);

	if (answer == 2)
	{
		printf("That's Correct!\n");
		score = score + 3;
		;
	}
	else
	{
		printf("Wrong Answer\n");
		score = score - 1;
	}






return 0;

}