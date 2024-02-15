#include <stdio.h>

struct Player {
    char name[50];
    char country[50];
    int runs[3];
    int wickets[3];
    int points[3];
    int totalPoints;
};

int calculatePoints(int runs, int wickets) {
    int points = wickets * 12;
    if (runs <= 25) {
        points += 5;
    } else if (runs <= 50) {
        points += 10;
    } else if (runs <= 75) {
        points += 15;
    } else {
        points += 20;
    }
    return points;
}

int main() {
    struct Player players[2];

    for (int i = 0; i < 2; i++) {
        printf("Enter player %d's name: ", i + 1);
        scanf(" %[^\n]s", players[i].name);

        printf("Enter player %d's country: ", i + 1);
        scanf("%s", players[i].country);

        printf("Enter runs for player %d in 3 matches: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &players[i].runs[j]);
        }

        printf("Enter wickets for player %d in 3 matches: ", i + 1);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &players[i].wickets[j]);
        }

        for (int j = 0; j < 3; j++) {
            players[i].points[j] = calculatePoints(players[i].runs[j], players[i].wickets[j]);
        }
        players[i].totalPoints = players[i].points[0] + players[i].points[1] + players[i].points[2];
    }


printf("\nPlayer points:\n");
    for (int j = 0; j < 3; j++) {
        printf("Match %d:\n", j + 1);
        struct Player manOfTheMatch;
        int maxPoints = 0;
        
        for (int i = 0; i < 2; i++) {
            printf("%s points: %d\n", players[i].name, players[i].points[j]);
            if (players[i].points[j] > maxPoints) {
                maxPoints = players[i].points[j];
                manOfTheMatch = players[i];
            }
        }
        
        printf("Man of the Match: %s\n\n", manOfTheMatch.name);
    }
    
    struct Player manOfTheSeries;
    int maxTotalPoints = 0;
    
    for (int i = 0; i < 2; i++) {
        if (players[i].totalPoints > maxTotalPoints) {
            maxTotalPoints = players[i].totalPoints;
            manOfTheSeries = players[i];
        }
    }
    
    printf("Man of the Series: %s\n", manOfTheSeries.name);

    return 0;
}