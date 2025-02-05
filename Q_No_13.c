// Given a roman numeral, convert it to an integer.
int getRomanValue(char roman){
    switch(roman){
        case 'I':return 1;
        case 'V':return 5;
        case 'X':return 10;
        case 'L':return 50;
        case 'C':return 100;
        case 'D':return 500;
        case 'M':return 1000;
        default:return 0;
    }
}
int romanToInt(char* s) {
    int total=0,prevValue=0;
    for(int i=strlen(s)-1;i>=0;i--){
        int currValue=getRomanValue(s[i]);
        if(currValue<prevValue){
            total-=currValue;
        }
        else{
            total+=currValue;
        }
        prevValue=currValue;
    }
    return total;
    
}