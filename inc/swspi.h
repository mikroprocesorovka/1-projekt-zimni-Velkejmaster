// Tyto makra upravujte podle potøeby 
#define DIN_GPIO GPIOD
#define DIN_PIN GPIO_PIN_6
#define CS_GPIO GPIOD
#define CS_PIN GPIO_PIN_5
#define CLK_GPIO GPIOE
#define CLK_PIN GPIO_PIN_0

void swspi_init(void);
void swspi_tx16(uint16_t data);
