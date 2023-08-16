int main()
{
    // int i = 0;
    // int i = {0};
    // int i{0};
    // int i(0);

    float pai = 3.14;

    // cause warning from info loss with no {}
    int apai = pai, bpai(pai);
    // cause no warning from info loss with {}
    int cpai = {pai}, dpai{pai};


    return 0;
}
