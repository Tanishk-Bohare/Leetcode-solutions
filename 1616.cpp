class Solution {
public:
    
    bool ispalin(string a,int i,int j){
        while(i<j && a[i]==a[j]){
            i++; j--;
        }
        return i>=j;
    }
    
    bool check(string a, string b){
        int i =0; int j = a.size()-1;
        
        while(i<j && a[i]==b[j]){
            i++; j--;
        }
        return ispalin(a,i,j) || ispalin(b,i,j);
    }
    
    bool checkPalindromeFormation(string a, string b) {
        return check(a,b) || check(b,a);
    }
};