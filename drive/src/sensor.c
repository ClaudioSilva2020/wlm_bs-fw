/**
 * @file sensor.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-06
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "sensor.h"



esp_err_t sensor_gpio_config()
{
    esp_err_t status = ESP_OK;
    sensor_config_t sensor_gpio_config = 
    {
        .intr_type = GPIO_INTR_ANYEDGE,
        .mode = GPIO_MODE_OUTPUT,
        .pin_bit_mask = (1ULL << TRIGGER_PIN),
        .pull_down_en = 0,
        .pull_up_en = 0,
        intr_type = GPIO_INTR_POSEDGE,
        .mode = GPIO_MODE_INPUT,
        .pin_bit_mask = (1ULL << ECHO_PIN),
    }

    status = gpio_config(&sensor_gpio_config);
    if (status != ESP_OK)
    {
        return status;
    }

    status = gpio_set_level(TRIGGER_PIN, LEVEL_LOW);

    return status;    
}