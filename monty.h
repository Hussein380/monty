#ifndef MONTY_H
#define MONTY_H
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct arg_s - hold variables
 * @stream: File that connects to the stream from file
 * @line: string which will be the line of text read from stream
 */
typedef struct ar_s
{
	FILE *stream;
	char *line;
	unsigned int line_number;
	char **tokens;
	int n_tokens;
	stack_t *head;
	size_t stack_length;
	instruction_t  *instruction;
} arg_t;
extern arg_t *arguments;
void correct_arguments(int argc);
void close_stream(void);
void free_tokens(void);
void get_instruction(void);
void initialize_arguments(void);
void invalid_instruction(void);
int main(int argc, char **argv);
void run_instruction(void);
void getting_stream_failed(char *fileName);
void get_stream(char *fileName);
void tokenize_line(void);
void push(stack_t **stack, unsigned int line_number);
void malloc_failed(void);
int is_number(char *str);
void pall(stack_t **stack, unsigned int line_number);
void free_arguments();
void free_head(void);
void free_stack(stack_t *head);
void free_all_args(void);
void pint(stack_t **stack, unsigned int line_number);
#endif
