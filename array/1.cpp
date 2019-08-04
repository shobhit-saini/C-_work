// the reverseArray function below.
vector<int> reverseArray(vector<int> a) {
    int i,j,temp;
    for(i=0,j=a.size()-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
return a;
}
