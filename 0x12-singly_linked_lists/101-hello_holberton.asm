#include <stdio.h>

int main()
{
__asm__ (
"mov $format, %%rdi\n"
"xor %%rax, %%rax\n"
"call printf\n"
"mov $0, %%rax\n"
"ret\n"
"format: .ascii \"Hello, Holberton\\n\\0\"\n"
);
return (0);
}
