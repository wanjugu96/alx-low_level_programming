void _puts(char* str)
{
    char* z;
   // z = &s[0];
    int count = 0;
    int i = 0;
   
    //hile (count < *z)
   // {
        while (str[count] != '\0')
        {
            _putchar(str[count]);

            //rintf("\n");
            count++;
        }
        _putchar('\n');
