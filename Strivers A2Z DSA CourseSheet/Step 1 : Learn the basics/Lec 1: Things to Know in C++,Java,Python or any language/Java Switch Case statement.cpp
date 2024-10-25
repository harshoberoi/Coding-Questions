
class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        // code here switch (choice) {
         double r=arr[0];
                double pi = 3.14159;
                 double l=arr[0];
                double b = arr[1];
        switch(choice){
            case 1:
               
                return r*r*pi;
                
                
            case 2:
               
                return l*b;
              
                
                default:
                return 0;
        }
    }
};
