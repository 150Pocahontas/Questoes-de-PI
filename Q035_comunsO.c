int comunsOrd (int a[], int na, int b[], int nb){
    int i=0,j=0,r=0;
    while(i<na && j<nb){
        if(a[i]==b[j]){
            j++;
            r++;
            i++;
        }
        if(a[i]>b[j]) j++;
        if(a[i]<b[j]) i++;
    }
    return r;
}
