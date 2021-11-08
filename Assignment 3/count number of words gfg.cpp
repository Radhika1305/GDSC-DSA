int countWords(string s)
{
   int count = 0;
   int n = s.length();
   int seenletter =0;
   int i=0;
   while(i<n)
   {
       seenletter =0;
       while (i<n&&isalpha(s[i]))
           {
               seenletter=1;
               i++;
           }
      
      if(s[i]=='\\')
           i+=2;
      else
           i++;   
      if(seenletter==1)
           count++;
   }
   return count;
}
