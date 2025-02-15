#ifndef LCD_H_
#define LCD_H_

#define GPIO_PORTB_DIR_R        (*((volatile uint32_t *)0x40005400))
#define GPIO_PORTB_DEN_R        (*((volatile uint32_t *)0x4000551C))
#define lcdnin_portu                     GPIO_PORTB_BASE
#define lcd_port_aktif                   SYSCTL_PERIPH_GPIOB
#define RS                               GPIO_PIN_0
#define E                                GPIO_PIN_1
#define D4                               GPIO_PIN_4
#define D5                               GPIO_PIN_5
#define D6                               GPIO_PIN_6
#define D7                               GPIO_PIN_7

void Lcd_Temizle(void);
void Lcd_Koy(char*);
void Lcd_init(void);
void Lcd_Komut(unsigned char,int type);

#endif
