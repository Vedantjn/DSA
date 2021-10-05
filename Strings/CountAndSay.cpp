#include<iostream>
using namespace std;

class CountAndSay {
public:
    string countAndSay(int n) 
    {
       if(n==0) return "";
        string res = "1";
        while(--n) 
        {
            string cur = "";
            for(int i=0;i<res.size();i++)
            {
                int c = 1 ;
                while(i+1<res.size() and res[i]==res[i+1])
                {
                    c++;
                    i++;
                }
                cur+=to_string(c)+res[i];
            }
            res = cur;
        }
        return res;
    }
};

// class countAndSay {
//     public string countAndSay(int n) {
        
//         if(n==1) return "1";
// //         Recursion
//         string s=countAndSay(n-1);
//         StringBuilder res = new StringBuilder();
//         // string res="";
//         int counter=0;
        
//         for(int i=0;i<s.length();i++)
//         {
//             counter++;
// //             Segregating into groups
//             if(i==s.length()-1 || s.charAt(i)!=s.charAt(i+1))
//             {
//                 res.append(counter).append(s.charAt(i));
//                 // res=res+counter+s.charAt(i);
//                 counter=0;
//             }
//         }
//           return res.toString();
       
    
//     }
// }

int main(){
    int n;
    cin>>n;
    CountAndSay a;
    a.countAndSay(n);
    
    return 0;
}