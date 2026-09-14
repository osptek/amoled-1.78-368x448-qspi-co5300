#include "app_init.h"

esp_err_t app_init(void)
{
    ESP_ERROR_CHECK(app_lcd_init());
    ESP_ERROR_CHECK(app_touch_init());
    ESP_ERROR_CHECK(app_lvgl_init());
    return ESP_OK;
}
