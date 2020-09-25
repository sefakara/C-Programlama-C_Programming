/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *\
*                       Sefa Kara  20/09/2020             *
*       Loops :                                           *
*       while (control expression) //non ZERO TRUE        *
*  						           //ZERO FALSE           *
*       do{                                               *
*       }while(control expression);                       *
*                                                         *
*       for(exp1;exp2;exp3){                              *
*       }                                                 *
*                                                         *
*       break and continue                                *
*       deyim ve dongulerin kullanimi ve ornekler         *
\* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //ardisik sayilarin toplami while dongusu ile
    int num, sum = 0;
    printf("Enter the number to sum: ");
    scanf("%d",&num);
    num++;
    while(num--)
        sum = num + sum;
    printf("sum : %d",sum);
    */


    /*
    //ardisik sayilarin toplami do while dongusu ile
    int num, sum = 0;
    printf("Enter the number to sum: ");
    scanf("%d",&num);
    do
        sum = num + sum;
    while(num--);
    printf("sum : %d",sum);
    */



    /*
    //ardisik sayilarin carpimi
    int num, fact = 1;
    printf("Enter the number to fact: ");
    scanf("%d",&num);
    while(num>0){
        fact *= num;
        num--;
    }
    printf("fact : %d",fact);
    */



    /*
    //ic ice dongu ornegi
    int st;
    printf("satir sayisi : ");
    scanf("%d",&st);
    for(int i=1;i<=st;++i){
        for(int j=1;j<=i;++j){
            printf("*");
        }
        printf("\n");
    }
    */



    /*
    // q karakterine basilinca sonlanan dongu
    char ch;
    while ((ch = getchar())!='q'){
        printf("%c",ch);
    }
    */



    /*
    //break deyimi kullanimi
    char  ch;
    for(;;){
        ch = getchar();
        if (ch == 'q')    // kosul saglanirsa sonsuz dongu kirilir
            break;
    }
    */



    /*
    //ASCII karakter kodunu ekrana yazan program
    int k;
    for(k=0;k<256;++k){
        printf("%c\n",k);
    }
    */



    /*
    // continue deyimi 1-100 arasinda 7'nin katlari
    for (int x=1;x<100;x++){
        if (x%7) //x%7==0 ise if'e girmez
            continue;
        printf("%d\n",x);
    }
    */


/*
    return 0;
}
*/

#include<stdio.h>
#include<string.h>
#include <stdbool.h>

// function declarations
const char * getCardName(struct Card card);
//void initPlayers(struct Player players[], int numPlayers);
void displayPlayerDeck(struct Player player, int playerNum);
void displayScores(struct Player players[], int numPlayers);
int getMetadataIndex();
void incrementMetadataIndex();
void deleteSave(int saveNum);

struct Card {
	/*
		Value: 2-10 -> 2-10 (face value)
		J, Q, K, A -> 11-14 respectively
	*/
	int value;
	/*
		Suit: Clubs, Diamonds, Hearts, Spades -> 0-3
		(actually has no significance in the game)
	*/
	int suit;
};

struct Player {
	struct Card deck[13];
	int points;
};


// used to translate card indexes to the face of the card easily
const char *  FACE_NAMES[] = {
	// note cards 0 and 1 do not exist
	"<invalid card value>",
	"<invalid card value>",
	"2",
	"3",
	"4",
	"5",
	"6",
	"7",
	"8",
	"9",
	"10",
	"Jack",
	"Queen",
	"King",
	"Ace"
};

// used to translate suit numbers to names easily
const char * SUIT_NAMES[] = {
	"Clubs",
	"Diamonds",
	"Hearts",
	"Spades"
};

// Converts a card value and suit to it's full name
// e.g. 11, 3 -> Jack of Spades
const char * getCardName(struct Card card) {
	char *cardName = (char*)malloc(18 * sizeof(char));
	sprintf(cardName, "%s of %s", FACE_NAMES[card.value], SUIT_NAMES[card.suit]);
	return cardName;
}

void main() {
	// variables
	int numPlayers;
	int roundNum;
	int playerTurn;
	int chosenCard;
	//The cards chosen by the players to be played for a round.
	struct Card chosenCards[10];
	int i, j, k;
	// The array of players. Only indexes up to (numPlayers - 1 ) to be used.
	struct Player players[10];
	int cardNum;
	int numPlayersWithCard;
	int cardValue;
	int highestCard;
	int playerWithCard;
	int roundWinner;
	int roundWinnings;
	// points carried over to the next round (because of a tie)
	int carryPoints;
	int playerPoints;
	int highestPoints;
	int highestPointsPlayer;
	char optionsInput[10];
	char option;
	FILE *saveFile;
	int fileVar;
	int nextSaveID;
	int metadataIndex;
	char filename[20];
	bool savesFound = false;
	int saveFileRoundNum;
	int saveFileNumPlayers;
	int saveFilePlayerScore;
	int saveFileCarryPoints;
	int saveFileChosen;
	int numPlayersSamePoints;
	int winners[10];
	int winnerCounter;

	printf("\n -= War - By Ronan Hanley =-\n\n");

	gameOptions:;
	// initialize some variables
	saveFileChosen = -1;
	carryPoints = 0;
	playerWithCard = -1;
	numPlayers = -1;


	printf("Do you want to...\n");
	printf("[1] Start a new game\n");
	printf("[2] Continue from a previously saved game\n");
	printf("[3] Exit now\n");
	option = getch();
	printf("\n");

	switch (option) {
	case '2':
		// read info about the saved games from the metadata file
		// (to give the user a choice for which save game to load)
		metadataIndex = getMetadataIndex();

		for (i = 0; i < metadataIndex; ++i) {
			// check if a save file exists for this index
			sprintf(filename, "war_gamesave%d.dat", i);
			saveFile = fopen(filename, "r");

			if (saveFile) {
				// save file exists, offer it to the player
				savesFound = true;
				printf("Save file %d:\n", (i + 1));
				fscanf(saveFile, "%d\n", &saveFileRoundNum);
				fscanf(saveFile, "%d\n", &saveFileNumPlayers);
				fscanf(saveFile, "%d\n", &saveFileCarryPoints);
				printf("Number of players: %d\n", saveFileNumPlayers);
				// must decrement by 1 since the file represents where to start from (i.e. the next round, not the last)
				printf("Last round completed: round %d\n", (saveFileRoundNum - 1));
				printf("Extra points (from tied rounds): %d\n", saveFileCarryPoints);
				for (j = 0; j < saveFileNumPlayers; ++j) {
					// discard the player's hand
					// (discards up to 99 characters until \n is reached)
					fscanf(saveFile, "%*99[^\n]");
					fscanf(saveFile, "%d\n", &saveFilePlayerScore);
					printf("Player %d had a score of %d.\n", (j + 1), saveFilePlayerScore);
				}
				printf("\n");

				fclose(saveFile);
			}
		}

		if (savesFound) {
			printf("\nEnter a save file number to load it: ");
			scanf("%d", &saveFileChosen);
			printf("\nContinuing on from save file %d.\n", saveFileChosen);
			--saveFileChosen;

			// load in that save file's variables
			sprintf(filename, "war_gamesave%d.dat", saveFileChosen);
			saveFile = fopen(filename, "r");

			fscanf(saveFile, "%d\n", &roundNum);
			fscanf(saveFile, "%d\n", &numPlayers);
			fscanf(saveFile, "%d\n", &carryPoints);
			for (j = 0; j < numPlayers; ++j) {
				for (k = 0; k < 13; ++k) {
					fscanf(saveFile, "%d %d, ", &players[j].deck[k].value, &players[j].deck[k].suit);
				}
				fscanf(saveFile, "\n%d\n", &players[j].points);
			}

			fclose(saveFile);
		}
		else {
			printf("No save files found. Starting a new game...\n");
		}

		printf("\n");
		break;
	case '3':
		// exit the application
		exit(0);
	}

	if (numPlayers == -1) {
		// no save file read; start a new game
		printf("Enter number of players playing (2-10): ");
		scanf("%d", &numPlayers);
		initPlayers(players, numPlayers);
		roundNum = 1;
	}
	printf("\n");

	// roundNum was already initialized (eiher by save file or new game) so leaving it out
	for ( ; roundNum <= 13; ++roundNum) {
		printf("-- Round %d --\n\n", roundNum);

		for (playerTurn = 0; playerTurn < numPlayers; ++playerTurn) {
			printf("Player %d, it's your turn to choose a card.\n", (playerTurn + 1));
			displayPlayerDeck(players[playerTurn], playerTurn);

			printf("Pick a card to play. Enter it's index (from above): ");
			scanf("%d", &chosenCard);
			//  convert face value to index
			chosenCard -= 2;

			// print many newlines to hide the cards of this player from the other players
			// (should be platform independant)
			for (i = 0; i < 50; ++i) printf("\n");

			// add the player's card to the competing cards for this round
			chosenCards[playerTurn] = players[playerTurn].deck[chosenCard];

			// "remove" that card from the player's hand
			players[playerTurn].deck[chosenCard].suit = -1;
			players[playerTurn].deck[chosenCard].value = -1;
		}

		// show the cards the players chose
		printf("-- Showdown! --\n");
		for (i = 0; i < numPlayers; ++i) {
			printf("Player %d chose the %s.\n", (i + 1), getCardName(chosenCards[i]));
		}
		printf("\n");

		// find the player with the highest unique card
		roundWinner = -1;
		highestCard = -1;
		for (i = 14; i >= 0; i--) {
			numPlayersWithCard = 0;

			for (int j = 0; j < numPlayers; ++j) {
				int cardValue = chosenCards[j].value;

				if (cardValue == i) {
					playerWithCard = j;
					++numPlayersWithCard;
					highestCard = cardValue;

					if (numPlayersWithCard > 1) {
						// skip to the next lowest card
						break;
					}
				}
			}

			if (numPlayersWithCard == 1) {
				roundWinner = playerWithCard;
				break;
			}
		}

		// calculate the winnings for this round
		roundWinnings = 0;
		for (i = 0; i < numPlayers; ++i) {
			roundWinnings += chosenCards[i].value;
		}

		if (roundWinner == -1) {
			// tie
			printf("It's a tie! No winners this round.\n");

			if (roundNum == 13) {
				printf("Because it's the final round,\n");
				printf(" %d points from this round\n plus %d points carried from the previous round(s) (a total of %d) points\nare lost on the battlefield!\n",
					roundWinnings, carryPoints, (roundWinnings + carryPoints));
				carryPoints = 0;
			}
			else {
				printf("This round's pot of %d points will be carried over to the next round.\n", roundWinnings);
				carryPoints += roundWinnings;
				printf("Total extra points for the next round: %d.\n", carryPoints);
			}
		}
		else {
			// winner found
			printf("Player %d wins the round!\n", (roundWinner + 1));
			printf("Card value won with: %d\n", highestCard);
			printf("Points awarded (all chosen card values added together): %d\n", roundWinnings);

			if (carryPoints != 0) {
				printf(" + %d points carried over from the previous round(s),\n", carryPoints);
				printf(" for a total of %d points.\n", (carryPoints + roundWinnings));
			}

			// add points
			players[roundWinner].points = (roundWinnings + carryPoints);
			carryPoints = 0;
		}

		printf("\n");

		if (roundNum != 13) { // no options if the game is already finished
			printf("Press enter to continue to the next round.\n\n");
			printf(" (more options:\n");
			printf("  's' to save the game to be played at a later time\n");
			printf("  'o' to output the current status of the game\n");
			printf("  'e' to exit this game)\n\n");

			option = getch();

			switch (option) {
			case 's':
				// save game

				if (saveFileChosen == -1) {
					// make a new save file
					nextSaveID = getMetadataIndex();
				}
				else {
					// This game is already from a save file.
					// Write over that save file to avoid duplicating games.
					nextSaveID = saveFileChosen;
				}

				sprintf(filename, "war_gamesave%d.dat", nextSaveID);
				saveFile = fopen(filename, "w");

				fprintf(saveFile, "%d\n", (roundNum + 1));
				fprintf(saveFile, "%d\n", numPlayers);
				fprintf(saveFile, "%d\n", carryPoints);

				// save each player's data
				for (j = 0; j < numPlayers; ++j) {
					for (k = 0; k < 13; ++k) {
						fprintf(saveFile, "%d %d, ", players[j].deck[k].value, players[j].deck[k].suit);
					}
					fprintf(saveFile, "\n%d\n", players[j].points);
				}

				fclose(saveFile);
				incrementMetadataIndex();

				printf("Game successfully saved for later use.\n");
				printf("Exiting.\n\n");
				goto endOfGame;
				break;
			case 'o':
				// output current status of the game
				printf("Rounds completed: %d/13\n", roundNum);
				displayScores(players, numPlayers);
				printf("\nPress any key to continue to the next round...");
				getch();
				break;
			case 'e':
				// exit this game
				goto gameOptions;
				break;
			}
		}
		printf("\n\n");
	}

	printf("-- Game finished! --\n\n");
	printf("Final scores:\n");

	// initialize the winners array
	for (i = 0; i < 10; ++i) winners[i] = -1;

	for (i = 0; i < numPlayers; ++i) {
		playerPoints = players[i].points;

		if (i == 0 || playerPoints > highestPoints) {
			highestPoints = playerPoints;
			highestPointsPlayer = i;
		}
	}

	winners[0] = highestPointsPlayer;
	winnerCounter = 1;

	// check for tied 1st place
	for (i = 0; i < numPlayers; ++i) {
		playerPoints = players[i].points;

		if (i == highestPointsPlayer) continue;

		if (playerPoints == highestPoints) {
			winners[winnerCounter++] = i;
		}
	}

	displayScores(players, numPlayers);

	if (winners[1] != -1) {
		// tied first
		printf("The game is tied!\n");
		printf("The winners are players ");

		for (i = 0; i < 10; ++i) {
			if (i == 9 || winners[i + 1] == -1) {
				printf("and %d.\n", (winners[i] + 1));
				break;
			}
			else {
				printf("%d", (winners[i] + 1));
				if (!(i == 8 || winners[i + 2] == -1)) {
					printf(",");
				}
				printf(" ");
			}
		}
	}
	else {
		// only 1 winner (won outright)
		printf("\nPlayer %d wins!\n", (highestPointsPlayer + 1));
	}

	printf("\n");

	if (saveFileChosen != -1) {
		// delete the save this game was loaded from
		deleteSave(saveFileChosen);
	}

	endOfGame:;
}

void initPlayers(struct Player players[], int numPlayers) {
	int i, j;
	int s;
	bool hasEachSuit;

	// prepare for random number generation
	srand(time(NULL));

	for (i = 0; i < numPlayers; ++i) {
		// initialize the values (2 -> 13)
		for (j = 0; j < 13; ++j) {
			players[i].deck[j].value = j + 2;
		}

		do {
			for (j = 0; j < 13; ++j) {
				// initialize the suit
				players[i].deck[j].suit = (rand() % 4);
			}

			// redo all the suits if the player doesn't have one of each suit
			hasEachSuit = true;
			for (s = 0; s < 4; ++s) {
				for (j = 0; j < 13; ++j) {
					if (players[i].deck[j].suit == s) goto skip;
				}

				// suit not found
				hasEachSuit = false;
				break;

				skip:;
			}
		} while (!hasEachSuit);

		players[i].points = 0;
	}
}

void displayPlayerDeck(struct Player player, int playerNum) {
	int i;

	printf("Your cards, player %d:\n", playerNum + 1);
	for (i = 0; i < 13; ++i) {
		if (player.deck[i].value == -1) {
			printf(" <- card already used ->\n");
		}
		else {
			printf(" Card no.[%d]: %s\n", (i + 2), getCardName(player.deck[i]));
		}
	}

	printf("\n");
}

void displayScores(struct Player players[], int numPlayers) {
	int i;

	for (i = 0; i < numPlayers; ++i) {
		printf("Player %d: %d points.\n", (i + 1), players[i].points);
	}
}

/*
	Retrieves a single integer from the metadata file.
	The integer is a counter for how many game saves have been created.
	We can go from 0 to the counter when looking for save game files.
*/
int getMetadataIndex() {
	FILE *metaFile;
	int index;

	metaFile = fopen("war_metadata.dat", "r");
	if (metaFile) {
		// file exists; check number of saves
		fscanf(metaFile, "%d\n", &index);
		fclose(metaFile);
	}
	else {
		// file doesn't exist
		index = 0;
	}

	return index;
}

void incrementMetadataIndex() {
	FILE *metaFile;

	int metadataIndex = getMetadataIndex();
	metaFile = fopen("war_metadata.dat", "w");

	if (metaFile == NULL) {
		printf("Failed to open metadata file for writing.\n");
		printf("Exiting...\n\n");
		exit(1);
	}

	fprintf(metaFile, "%d\n", (metadataIndex + 1));

	fclose(metaFile);
}

void deleteSave(int saveNum) {
	char filename[20];

	sprintf(filename, "war_gamesave%d.dat", saveNum);
	remove(filename);
}
