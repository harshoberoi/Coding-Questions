
class Solution {
public:
   long long  binary(int  num)
{
      long long mul = 1;
      long long ans =0;
       while(num!=0)
       {
        int rem = num%2;
        num /=2;
        ans += mul*rem;
        mul *= 10;
       }
      
      return ans;

}

    string convertDateToBinary(string date) {

        int  first=stoi(date.substr(0,4));
        int second=stoi(date.substr(5,2));
        int third=stoi(date.substr(8,2));

      long  long f =  binary(first);
      string year = to_string(f);

      long  long sec =  binary(second);
      string month = to_string(sec);

      long long thd =  binary(third);
      string day = to_string(thd);

        return year+"-"+month+"-"+day;
    }
 
};
