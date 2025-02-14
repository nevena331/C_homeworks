typedef struct {
    int value;
    int errorflag;
} SafeResult_t;

SafeResult_t safe_add(long a, long b);
SafeResult_t safe_subtract(long a, long b);
SafeResult_t safe_multiply(long a, long b);
SafeResult_t safe_divide(long a, long b);
SafeResult_t safe_str_to_int(char* str);