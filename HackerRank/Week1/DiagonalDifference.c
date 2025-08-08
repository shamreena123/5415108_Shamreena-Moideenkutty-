int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    
    int ltr=0,rtl=0,diff,absolute;
    
    for(int i=0;i<arr_columns;i++){
        ltr+=arr[i][i];
        rtl += arr[i][arr_columns - 1 - i]; 
    }

    diff=ltr-rtl;
    absolute=abs(diff);
    
    return absolute;
}
