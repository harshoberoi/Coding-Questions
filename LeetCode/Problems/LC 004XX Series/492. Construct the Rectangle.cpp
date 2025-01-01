class Solution {
public:
    vector<int> constructRectangle(int area) {
        int diff = INT_MAX;
        vector<int> a(2);
       for(int l= 1;l<=area;l++)
       {
         int w = area/l ;
        if(l >= w && diff > l-w && l*w == area)
        {
            diff = l-w;
           a[0]=l;
           a[1]=w;
        }
       }
       return a; 

    }
};
