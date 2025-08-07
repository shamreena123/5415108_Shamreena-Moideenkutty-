char* timeConversion(char* s) {
    
    static char answer[9]; 
    char firsttwo[3], lasttwo[3]; 

    strncpy(firsttwo, s, 2);
    firsttwo[2] = '\0'; 
    
    int hour = atoi(firsttwo);

    lasttwo[0] = s[8];
    lasttwo[1] = s[9];
    lasttwo[2] = '\0';
    
    if (strcmp(lasttwo, "PM") == 0) {
        if (hour != 12) {
            hour += 12;
        }
    } else { 
        if (hour == 12) {
            hour = 0;
        }
    }

    sprintf(answer, "%02d:%.2s:%.2s", hour, s + 3, s + 6);
    return answer;
}