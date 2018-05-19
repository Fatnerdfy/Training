int findComplement(int num) {
    int k = 0;
    int tmp = num;
    while(tmp) {
        k++;
        tmp = tmp >> 1;
    }
    return num ^ ((1 << k) - 1);
}

// runtime 6ms
