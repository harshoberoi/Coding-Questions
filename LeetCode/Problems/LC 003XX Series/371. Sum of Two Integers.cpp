class Solution {
public:
    int getSum(int a, int b) {
      //  return a+b;

         while(b>0){ 
        a++;
        b--;
    }
    while(b<0){ 
        a--;
        b++;
    }
    return a;
    }
};
