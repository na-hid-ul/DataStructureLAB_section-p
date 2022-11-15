

#include<iostream>
#include<cmath>
#include<stack>

using namespace std;

float pick_value(char q) {
   int val;
   val = q;
   return float(val-'0');

}

int Operator(char q) {
   if(q == '+'|| q == '-'|| q == '*'|| q == '/' || q == '^')
      return 1;
   return -1;
}

int Operand(char q) {
   if(q >= '0' && q <= '9')
      return 1;
   return -1;
}

float calculating(int x, int y, char op) {

   if(op == '+')
      return y+x;
   else if(op == '-')
      return y-x;
   else if(op == '*')
      return y*x;
   else if(op == '/')
      return y/x;
   else
      return INT_MIN;
}


float evaluation(string postfix) {
   int z, s;
   stack<float> dp;
   string::iterator it;

   for(it=postfix.begin(); it!=postfix.end(); it++) {

      if(Operator(*it) != -1) {
         z = dp.top();
         dp.pop();
         s = dp.top();
         dp.pop();
         dp.push(calculating(z, s, *it));
      }else if(Operand(*it) > 0) {
         dp.push(pick_value(*it));
      }
   }
   return dp.top();
}

main() {

    string pstfx;
    cout<<"GIVE ME THE POSTFIX EXPRESSION ,I WILL HANDLE IT IN MY WAY  *-*  "<<endl;
    cin>>pstfx;
    cout << "YOUR RESULT IS GIVEN BELLOW: "<<evaluation(pstfx);
}
