int isMatch(char *exp){
    struct stack* sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    for (int i = 0; exp[i]!='\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp,'(');
        }
        else if (exp[i]==')')
        {
            pop(sp);
            return 0;
        }
       
   
    }
     if (isEmpty(sp))
        {
            return 1;
        }
        else{
            return 0;
        }
    
}
