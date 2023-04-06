/**
 * @file sensor.h
 * @author Cláudio Silva (claudiosilva@gmail.com)
 * @brief Arquivo de cabeçalho do
 * @version 0.1
 * @date 2023-04-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __SENSOR_H__
#define __SENSOR_H__

#include "driver/gpio.h"
#include "driver/timer.h"

#define ECHO_PIN    GPIO_NUM_2
#define TRIGGER_PIN GPIO_NUM_0

typedef gpio_config_t sensor_config_t

typedef enum status_sensor
{
    SENSOR_READY,
    SENSOR_BUSY,
    SENROT_SEND_RP,
    SENSOR_READ,
}status_sensor_t;

typedef struct sensor
{
    uint32_t duration;
    status_sensor_t status;
    uint32_t distance;    
} sensor_t;


#endif