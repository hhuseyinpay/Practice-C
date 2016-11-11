main()
{
    int i;
    for(i = 0; i < 100; i++){
        printf("%6d%c", i, (i%10==9 || i==100-1)? '\n':' ');
    }
}
