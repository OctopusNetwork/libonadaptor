#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

#include "on_adaptor.h"

static int g_running = 0;

static void __sigint_handler(int sig)
{
    g_running = 0;
}

int main(int argc, char *argv[])
{
    if (onc_adaptor_init(NULL) < 0) {
        return -1;
    }

    onc_adaptor_call_init("{}");

    g_running = 1;
    signal(SIGINT, __sigint_handler);

    do {
        sleep(1);
    } while (1 == g_running);

    onc_adaptor_call_final();

    onc_adaptor_final();
}
