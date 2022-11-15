

    #include<iostream>
    using namespace std;

        char stack[37];
        int top = -1;
        class infx_pstpx
{
        public:
            void push(char l)
{
        stack[++top]=l;
}
            char pop()
 {
            if(top==-1)
    {
            return -1;
    }
    else
    {
            return stack[top--];
    }
 }
        int precedence(char l)
  {
            if(l=='(')
                    return 0;
        if(l=='+' || l=='-')
            return 1;

        if(l=='*' || l=='/')
            return 2;
   }

};

    int main()
{

    infx_pstpx naxo;
    char ntn[20];
    char *n, l;
    cout<<"Take the INFIX Expression:";
    cin>>ntn;
    n=ntn;
    cout<<"Absolute POSTFIX Expression:";
    while(*n!='\0')
    {
        if(isalnum(*n))
            cout<<*n;
        else if(*n=='(')
            naxo.push(*n);
        else if(*n==')')
        {
            while((l=naxo.pop())!='(')
                cout<<l;
        }
        else
        {
            while(naxo.precedence(stack[top])>=naxo.precedence(*n))
                cout<<naxo.pop();
                     naxo.push(*n);
        }
        n++;
    }
    while(top!=-1)
    {
        cout<<naxo.pop();
    }
    return 0;
}
