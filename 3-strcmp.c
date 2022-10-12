#include "main.h"                                                                                                                    

                                                                                                                                     

/**                                                                                                                                  

 * _strcmp - Compares pointers to two strings.                                                                                       

 * @s1: A pointer to the first string to be compared.                                                                                

 * @s2: A pointer to the second string to be compared.                                                                               

 *                                                                                                                                   

 * Return: If str1 < str2, the negative difference of the first unmatched char                                                       

 *         If str1 == str2, 0.                                                                                                       

 *         If str1 > str2, the positive difference of the first unmatched char                                                       

 */                                                                                                                                  

int _strcmp(char *s1, char *s2)                                                                                                      

{                                                                                                                                    

        while (*s1 && *s2 && *s1 == *s2)                                                                                             

        {                                                                                                                            

                s1++;                                                                                                                

                s2++;                                                                                                                

        }                                                                                                                            

                                                                                                                                     

        return (*s1 - *s2);                                                                                                          

}





<<<<<<< HEAD

=======
>>>>>>> e2d3a2f8612df08eae86312cb22ecf00ac03b03c
