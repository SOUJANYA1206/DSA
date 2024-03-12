#include<stdio.h>
struct stack
{
    int n[30];
    int top;
};
int palindrome(int);
void isitstack(struct stack *);
void push(struct stack*,int);
int pop(struct stack*);
int isEmpty(struct stack*);
main()
{
    int no,res;
    printf("Enter the number to be checked palindrome or not\n");
    scanf("%d",&no);
    if(no>0)
    {
        res=palindrome(no);
        if(res==1)
        {
            printf("%d is Palindrome\n",no);
        }
        else
            printf("%d is Not a Palindrome\n",no);
    }
    else
    {
        printf("Invalid input\n");
    }
}
int palindrome(int no)
{
    int i,ld,temp=no,r=0;
    struct stack s1,s2;
    isitstack(&s1);
    isitstack(&s2);
    while(no!=0)
    {
        ld=no%10;
        push(&s1,ld);
        no=no/10;
    }
    while(!isEmpty(&s1))
    {
        push(&s2,pop(&s1));
    }
    while(!isEmpty(&s2))
    {
        ld=pop(&s2);
        r=r*10+ld;
    }
    if(temp==r)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
void isitstack(struct stack *s)
{
    s->top=-1;
}
void push(struct stack *s,int no)
{
    s->top++;
    s->n[s->top]=no;
}
int pop(struct stack *s)
{
    int n;
    n=s->n[s->top];
    s->top--;
    return n;
}
int isEmpty(struct stack *s)
{
    if(s->top==-1)
    {
        return 1;
    }
    else
        return 0;
}
