#ifndef stTTY_H
#define stTTY_H

extern char *stty_args;

void ttyresize(int, int);
void stty(char **);
void sigchld(int);
void ttywriteraw(const utfchar *, size_t);

#endif
