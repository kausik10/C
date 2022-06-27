#include <stdio.h>
#include <math.h>

int main()
{
  /**  float x = 10.23f;
    float y = 3.1f;

    float result = remainder(x, y);

    printf("result = %f\n", result);
**/

float val = 37.777779;
float rounded_down = floorf(val * 100) / 100;   /* Result: 37.77 */
float nearest = roundf(val * 100) / 100;  /* Result: 37.78 */
float rounded_up = ceilf(val * 100) / 100;      /* Result: 37.78 */

printf("%f\n", rounded_down);
printf("%.2f\n", 37.777779);
    return 0;
}
