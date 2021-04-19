#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void main()
{

	FILE* f_ptr;
	f_ptr = fopen("output.txt", "w");
	if (f_ptr == NULL) {
		printf("could not write to file");
		return;
	}
	fprintf(f_ptr, "Thank You for Playing My Game! Hope You Had Alot Of Fun!!\n");
	fflush(f_ptr);
	fclose(f_ptr);


	/*Here I am defining the variables that will be used in the game*/
	int score = 0;
	int answer;
	char name[100];

	/*Here I'm defining my union to state a title my movie trivia game*/
	union Que
	{
		char str[200]; /*200 strings shall do it*/
	};

	{
		union Que thanks;
	strcpy(thanks.str, "Welcome to a movie trivia game! Thank you for playing and may odds play in your favor...");
	printf("%s\n", thanks.str);
	}

	struct StudentData {
		char* stu_name;
		int stu_id;
		int stu_age;
	};
	
		; {
		struct StudentData student;

		student.stu_name = "VictorPerez";
		student.stu_id = 20600566;
		student.stu_age = 20;

		printf("Creator of this quiz:");
		printf("\nStudent Name: %s", student.stu_name);
		printf("\nStudent ID: %d", student.stu_id);
		printf("\nStudent Age: %d", student.stu_age);

	}

	

	/*Following lines will be the introduction the game*/
	printf("\n >> Welcome to a movie quiz!!");
	printf("\n >In this quiz, you will be given a series of 10 questions about movies released in these recent years that EVERYONE must have seen!");
	printf("\n >By the end of quiz, you will be given a score based on how many questions you have answered correctly!");
	printf("\n >>> May The Force Be With You... <<<");

	/*This line will allow the user to put an input, which will be there name*/
	printf("\nPlease enter your name:");
	scanf("%s", name);
	printf("\n Hello %s", name);
	printf("\n***********************Lets Begin*******************");

	/*These next lines will consist of the question, followed by the the answers available*/
	printf("\nQ(1). What is now the highest grossing movie ever?");
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

	printf("\nQ(4). Did Toy Story 4 win an Oscar in 2019?\n");
	printf("\n [1] Yes");
	printf("\n [2] Didn't come out yet");
	printf("\n [3] Never got nominated");
	printf("\n [4] No");

	scanf("%d", &answer);

	if (answer == 1)
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

	printf("\nQ(5). What movie franchise went from drifting in tokyo to flying in space?\n");
	printf("\n [1] Avengers");
	printf("\n [2] NO FRANCHISE");
	printf("\n [3] Shrek");
	printf("\n [4] Fast & Furious");

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

	printf("\nQ(6). Who is the king of the monsters?\n");
	printf("\n [1] King Kong");
	printf("\n [2] Godzilla");
	printf("\n [3] The Rock");
	printf("\n [4] Mickey Mouse");

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

	printf("\nQ(7). Who owns the right to the Avengers and the X-Men?\n");
	printf("\n [1] Sony");
	printf("\n [2] Food Network");
	printf("\n [3] Disney");
	printf("\n [4] Fox");

	scanf("%d", &answer);

	if (answer == 3)
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

	printf("\nQ(8). What is a nickname for the Academy Awards?\n");
	printf("\n [1] The Oscars");
	printf("\n [2] Both 3 & 4");
	printf("\n [3] The Grammy");
	printf("\n [4] The Movie Awards");

	scanf("%d", &answer);

	if (answer == 1)
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

	printf("\nQ(9). Who was the the only non-jedi in the original Star Wars trilogy to use a lightsaber?\n");
	printf("\n [1] Luke");
	printf("\n [2] Chuy");
	printf("\n [3] Fin");
	printf("\n [4] Han Solo");

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

	printf("\nQ(10). What is the highest grossing animated film in history?\n");
	printf("\n [1] Toy Story 4");
	printf("\n [2] Frozen");
	printf("\n [3] Shrek 2");
	printf("\n [4] Frozen 2");

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

	printf("\nQ(11). LAST QUESTION... What is Stephen King's top-grossing movie?\n");
	printf("\n [1] The Shining");
	printf("\n [2] Pet Sematary");
	printf("\n [3] The Mist");
	printf("\n [4] IT");

	scanf("%d", &answer);

	if (answer == 1)
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

	printf(" Congrats of finishing the game! What was your total score?");

	scanf("%d", &answer);

	if (answer == 7,8,9,10,11)
	{
		printf("Well Well... you do watch your movies! You have passed!");

	}
	else
	{
		printf("If I were you, I would go back and watch your movies again...")
			;
		;
	}






return 0;

}