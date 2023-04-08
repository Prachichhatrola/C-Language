#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int var1, var2;
   float var3, var4;
    scanf("%d %d", &var1, &var2);
    scanf("%f %f", &var3, &var4);
    printf("%d %d\n",(var1+var2), (var1-var2));
    printf("%.1f %.1f",(var3+var4), (var3-var4));
    
	
    
    return 0;
}
