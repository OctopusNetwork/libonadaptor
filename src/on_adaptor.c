#include "on_bus.h"

#include "on_adaptor.h"

/* Will the core loaded by dlopen */
// #define KKT_DYNAMIC_LOAD_CORE

typedef struct {
    int     (*init)(char *init_json);
    void    (*final)(void);
} onc_adaptor_s_t;

static onc_adaptor_s_t g_adaptor;

int onc_adaptor_init(char *core_path)
{
#ifdef ONC_DYNAMIC_LOAD_CORE
#else
    g_adaptor.init = onc_bus_init;
    g_adaptor.final = onc_bus_final;
#endif
    return 0;
}

void onc_adaptor_final(void)
{
#ifdef ONC_DYNAMIC_LOAD_CORE
#else
#endif
}

int onc_adaptor_call_init(char *init_json)
{
    return g_adaptor.init(init_json);;
}

void onc_adaptor_call_final(void)
{
    g_adaptor.final();
}
