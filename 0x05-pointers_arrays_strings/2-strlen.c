int _strlen(char* s)
{
    char* z;
    z = &s[0];
    int count = 0;
    int i = 0;
   
    //hile (count < *z)
   // {
        while (s[count] != '\0')
        {
            //printf("%c", s[count]);
            //rintf("\n");
            count++;
        }
        
    return count-1;
}
