float imposto(float valor)
{
    if (valor < 2428.80)
    {
        valor = 0;
    }

    if (valor >= 2428.80 && valor < 2826.65)
    {
        valor = (valor * 0.075) - 182.16;
    }
    if (valor >= 2826.65 && valor < 3751.05)
    {
        valor = (valor * 0.15) - 394.16;
    }
    if (valor >= 3751.05 && valor < 4664.68)
    {
        valor = (valor * 0.225) - 675.49;
    }
    if (valor > 4664.68)
    {
        valor = (valor * 0.275) - 908.73;
    }
    return valor;
}