int lonelyinteger(int a_count, int* a) {
    int count;

    for (int i = 0; i < a_count; i++) {
        count = 0;

        for (int j = 0; j < a_count; j++) {
            if (i != j && a[i] == a[j]) {
                count++;
                break;
            }
        }

        if (count == 0) {
            return a[i];
        }
    }

    return -1;
}