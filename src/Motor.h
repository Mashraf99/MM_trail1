/*
 * Motor.h
 *
 * Created: 3/23/2020 10:42:39 PM
 *  Author: Mohame's DELL
 */ 

void Motor_init(void);
void PWM_init(void);
void set_Left_Speed(uint8_t speed);
void set_Right_Speed(uint8_t speed);
void Stop_Motor(void);
void Move_Forword(uint8_t speed_L,uint8_t speed_R );
void Move_Right(uint8_t speed);
void Move_Left(uint8_t speed);
void U_Turn(uint8_t speed);
extern volatile uint16_t  Right_Counter;
extern volatile uint16_t Left_Counter;
