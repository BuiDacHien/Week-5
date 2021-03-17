void reverse(char *s) {
    // Your code goes here
    char *begin = s; char *last=s+strlen(s)-1;
    while(begin < last){
        swap(*begin , *last);
        begin++;
        last--;
    }
}
