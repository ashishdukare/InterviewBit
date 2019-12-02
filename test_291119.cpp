vector<int> Solution::plusOne(vector<int> &a) {
    int i=0,key=0;
    
    int n=a.size();
    a[n-1]=a[n-1]+1;
    for(i=1;i<n;i++)
    {
        if(a[n-i]==10)
        {
            a[n-i]=0;
            a[n-i-1]=a[n-i-1]+1;  
        }
    }

    //Increasing size if the first element becomes zero
    if(a[0]==10)
    {
        a[0]=1;
        a.resize(a.size()+1);
        a[a.size()]=0;
    }
    
    //Removing the intial zeros in the input
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            continue;
        }
        else
        {
            key=i;
            break;
        }
    }

    /*for(i=key;i<a.size();i++)
    {
        cout<<a[i];
    }*/
    vector<int> b(1000000,0);
    int j=0;
    for(i=key;i<a.size();i++)
    {
        b[j]=a[i];
        //cout<<b[j];
        j++;
    }
    b.resize(j);
    return(b);
}
