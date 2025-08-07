int* matchingStrings(int strings_count, char** strings, int queries_count, char** queries, int* result_count) {
    
    int* arr = malloc(queries_count * sizeof(int));
    for(int i=0;i<queries_count;i++){
        
        int k=0;
        for (int j=0;j<strings_count;j++){
            if(strcmp(queries[i], strings[j])==0){
                k++;
            }
        }
        arr[i]=k;
    }
    
    *result_count = queries_count;
    return arr;

}