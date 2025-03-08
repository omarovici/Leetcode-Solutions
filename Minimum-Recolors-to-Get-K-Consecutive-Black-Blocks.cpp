class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int j=k-1 , count = 0 , mini = INT_MAX , size = blocks.size(),i=0,p=0;
        while(j!=size){
            for(;i<=j;i++)
            if(blocks[i]=='W') count++;

            mini = min(count,mini);
            count = 0;
            j++;
            p++;
            i = p;
        }
        return mini;
    }
};