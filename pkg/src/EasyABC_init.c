#include <stdlib.h>
#include <R_ext/Rdynload.h>

extern void trait_model(void *, void *);

static const R_CMethodDef CEntries[] = {
    {"trait_model", (DL_FUNC) &trait_model, 2},
    {NULL, NULL, 0}
};

void R_init_EasyABC(DllInfo *dll)
{
    R_registerRoutines(dll, CEntries, NULL, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
