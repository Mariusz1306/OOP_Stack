
struct stack_handle{
    int stack_number;
    int top; /* pierwsze wolne miejsce na stosie */
    int *dane;
};

void push(struct stack_handle* s,int a);
int pop(struct stack_handle* s);
void clear(struct stack_handle* s);
void init(struct stack_handle* s);
void destroy(struct stack_handle* s);
int isEmpty(struct stack_handle* s);

