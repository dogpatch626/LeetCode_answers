#include <map>
class Solution {
public:
     map<int,int> mem;
    int res;
    int fib(int N) {
       
        if(mem[N]){
            
            return mem.find(N)->second;
        }
         
        else if(N < 2 ){
            res = N; 
        }else{
            res = fib(N-1)+fib(N-2);
        }
        mem.insert(pair<int,int>(N, res));
        return res; 
    }
};