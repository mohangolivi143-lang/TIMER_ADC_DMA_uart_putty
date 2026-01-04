#include <stdio.h>

int main()
{
    int adc_value;
    float voltage;

    for (adc_value = 0; adc_value <= 4095; adc_value += 512)
    {
        voltage = (adc_value * 3.3) / 4095;
        printf("ADC Value : %4d  -> Voltage : %.2f V\n",
               adc_value, voltage);
    }
    return 0;
}