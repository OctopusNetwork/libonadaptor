#ifndef __ONC_ADAPTOR____H__
#define __ONC_ADAPTOR____H__

#ifdef __cplusplus
extern "C" {
#endif

int     onc_adaptor_init(char *core_path);

int     onc_adaptor_call_init(char *init_json);
void    onc_adaptor_call_final(void);

void    onc_adaptor_final(void);

#ifdef __cplusplus
}
#endif

#endif
