// C program to print initials  of a name 
# include <stdio.h>  
# include <string.h> 
# include <ctype.h> 
void getInitials(char* name);
int main(void) 
{     
    char name[50] = "Geeks for Geeks"; 
      
    printf("Your initials are: "); 
    getInitials(name);       
} 
  
void getInitials(char* name) 
{     
     int i = 0; 
      
     if(strlen(name) > 0 &&  
        isalpha(name[0])) 
       printf("%c ", toupper(name[0])); 
   
    
     while(name[i] != '\0') 
     { 
       if(isspace(name[i]) != 0) 
       { 
         while(isspace(name[i]) &&  
               i <= strlen(name)) 
         { 
           i++ ;              
         } 
         printf("%c ", toupper(name[i])); 
       } 
       i++; 
     } 
  printf("\n"); 
}