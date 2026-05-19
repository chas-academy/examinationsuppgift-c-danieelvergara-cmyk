/* Examinationsuppgift - Studentresultat */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    //Namn och poang for 5 elever, 13 prov vardera 
    char names[5][12];
    int scores[5][13];
    float avg[5];

    // Las in data for varje elev 
    int i, j;
    for (i = 0; i < 5; i++) {
        scanf("%s", names[i]);
        names[i][0] = toupper(names[i][0]);

        int sum = 0;
        for (j = 0; j < 13; j++) {
            scanf("%d", &scores[i][j]);
            sum = sum + scores[i][j];
        }
        avg[i] = sum / 13.0;
    }

    
   //Hitta eleven med hogst medelvarde 
    float highest = avg[0];
    int best = 0;
    for (i = 1; i < 5; i++) {
        if (avg[i] > highest) {
            highest = avg[i];
            best = i;
        }
    }
    
    //Berakna gruppens genomsnitt 
    float total = 0;
    for (i = 0; i < 5; i++) {
        total = total + avg[i];
    }
    float group_avg = total / 5.0;

    
    return 0;
}
