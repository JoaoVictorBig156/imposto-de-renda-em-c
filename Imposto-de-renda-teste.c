#include <assert.h>
#include "Imposto-de-renda-funcao.c"

int main()
{
    assert(imposto(2500.00) == (float)5.34);
    assert(imposto(3000.00) == (float)55.83999999);
    assert(imposto(4000.00) == (float)224.51);
    assert(imposto(5000.00) == (float)466.27);
    return 0;
}