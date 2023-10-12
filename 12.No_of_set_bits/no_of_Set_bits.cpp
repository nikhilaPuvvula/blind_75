class Solution {
public:
    int hammingWeight(uint32_t n) {

          int c =0 ;
          while(n)
          {
              n=n&(n-1);
              c++;
          }
          return c;
    }
};


/* for finding no of set bits in a given number we have to AND(&) the given number with its previous number untill the number is not equal to 0*/