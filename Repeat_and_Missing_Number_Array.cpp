vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int i=0;
    long long int n = A.size();
    long long int sumN = n*(n+1)/2;
    long long int sumNsq = n*(n+1)*(2*n+1)/6;
    long long int a=0,b=0;
    
    for (i=0; i<A.size(); i++)
    {
        sumN = sumN - (long long int)A[i];
        sumNsq = sumNsq - (long long int)A[i]*(long long int)A[i];
    }
    
    b = (sumN+(sumNsq/sumN))/2; // missing
    a = b - sumN; // repeting 
    vector<int> ans;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}
